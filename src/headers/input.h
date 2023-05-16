#include "sgl.h"
#include "stdarg.h"
#include "stdbool.h"

static Uint16 PAD_BUTTONS[]={
PER_DGT_KU,
PER_DGT_KD,
PER_DGT_KR,
PER_DGT_KL,
PER_DGT_TA,
PER_DGT_TB,
PER_DGT_TC,
PER_DGT_ST,
PER_DGT_TX,
PER_DGT_TY,
PER_DGT_TZ,
PER_DGT_TR,
PER_DGT_TL,
};

bool CheckInputs(Uint8 player, int buttonsCount, ...)
{
    //Let's factor this out to something more generic but keep it in as a guard clause for now.
    if(!Per_Connect1)return;


    va_list list;
    va_start(list, buttonsCount);
    Uint16 button = (Uint16)va_arg(list, int);
    for(int i = 1; i < buttonsCount; i++)
    {
        button ^= (Uint16)va_arg(list, int);
    }


    Uint16 pad_input;
    pad_input = Smpc_Peripheral[player].data;

    Uint16 result = button & pad_input;
    va_end(list);

    return result == 0;
}