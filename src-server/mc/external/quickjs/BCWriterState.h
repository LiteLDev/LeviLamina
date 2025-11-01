#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BCWriterState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6dab0c;
    ::ll::UntypedStorage<8, 48> mUnkc3b740;
    int mUnk2c1d53 : 8;
    int mUnk1c3993 : 8;
    int mUnk2caace : 8;
    ::ll::UntypedStorage<4, 4> mUnk1a7c45;
    ::ll::UntypedStorage<8, 8> mUnkcf37c5;
    ::ll::UntypedStorage<4, 4> mUnkff66aa;
    ::ll::UntypedStorage<8, 8> mUnk97e7df;
    ::ll::UntypedStorage<4, 4> mUnkb871c7;
    ::ll::UntypedStorage<4, 4> mUnked9f6a;
    ::ll::UntypedStorage<8, 8> mUnkb04d82;
    ::ll::UntypedStorage<4, 4> mUnk4e7ad9;
    ::ll::UntypedStorage<4, 4> mUnk6a5709;
    ::ll::UntypedStorage<8, 32> mUnk297f10;
    // NOLINTEND

public:
    // prevent constructor by default
    BCWriterState& operator=(BCWriterState const&);
    BCWriterState(BCWriterState const&);
    BCWriterState();

};
