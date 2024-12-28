#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynBuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd7b318;
    ::ll::UntypedStorage<8, 8> mUnke8a8ad;
    ::ll::UntypedStorage<8, 8> mUnk28d0b8;
    ::ll::UntypedStorage<4, 4> mUnk6e6d4c;
    ::ll::UntypedStorage<8, 8> mUnk482f4d;
    ::ll::UntypedStorage<8, 8> mUnk49b59f;
    // NOLINTEND

public:
    // prevent constructor by default
    DynBuf& operator=(DynBuf const&);
    DynBuf(DynBuf const&);
    DynBuf();
};
