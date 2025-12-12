#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_err_status_t : int {
    Ok           = 0,
    Fail         = 1,
    BadParam     = 2,
    AllocFail    = 3,
    DeallocFail  = 4,
    InitFail     = 5,
    Terminus     = 6,
    AuthFail     = 7,
    CipherFail   = 8,
    ReplayFail   = 9,
    ReplayOld    = 10,
    AlgoFail     = 11,
    NoSuchOp     = 12,
    NoCtx        = 13,
    CantCheck    = 14,
    KeyExpired   = 15,
    SocketErr    = 16,
    SignalErr    = 17,
    NonceBad     = 18,
    ReadFail     = 19,
    WriteFail    = 20,
    ParseErr     = 21,
    EncodeErr    = 22,
    SemaphoreErr = 23,
    PfkeyErr     = 24,
    BadMki       = 25,
    PktIdxOld    = 26,
    PktIdxAdv    = 27,
};
