#include "sgl.h"

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

int CheckInput(Uint16 button)
{
    //Let's factor this out to something more generic but keep it in as a guard clause for now.
    if(!Per_Connect1)return;

    Uint16 pad_input;
    pad_input = Smpc_Peripheral[0].data;

    return button & pad_input;
}