#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::H264 {

struct NaluIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf28e3d;
    ::ll::UntypedStorage<8, 8> mUnkc4d4f5;
    ::ll::UntypedStorage<8, 8> mUnk126139;
    // NOLINTEND

public:
    // prevent constructor by default
    NaluIndex& operator=(NaluIndex const&);
    NaluIndex(NaluIndex const&);
    NaluIndex();

};

}
