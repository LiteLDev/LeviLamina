#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BCReaderState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1a9462;
    ::ll::UntypedStorage<8, 8> mUnk24ca5d;
    ::ll::UntypedStorage<8, 8> mUnk50ab4d;
    ::ll::UntypedStorage<8, 8> mUnk4121a2;
    ::ll::UntypedStorage<4, 4> mUnk467924;
    ::ll::UntypedStorage<4, 4> mUnk83065d;
    ::ll::UntypedStorage<8, 8> mUnk4deabd;
    ::ll::UntypedStorage<4, 4> mUnke7ebc7;
    int mUnk38e70c : 8;
    int mUnkc90e8d : 8;
    int mUnk5da76d : 8;
    int mUnk5592e7 : 8;
    ::ll::UntypedStorage<8, 8> mUnkf479a7;
    ::ll::UntypedStorage<4, 4> mUnk5b88bf;
    ::ll::UntypedStorage<4, 4> mUnk3f6386;
    // NOLINTEND

public:
    // prevent constructor by default
    BCReaderState& operator=(BCReaderState const&);
    BCReaderState(BCReaderState const&);
    BCReaderState();

};
