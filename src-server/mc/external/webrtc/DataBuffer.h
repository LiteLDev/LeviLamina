#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9f8b07;
    ::ll::UntypedStorage<1, 1>  mUnk37538d;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBuffer& operator=(DataBuffer const&);
    DataBuffer(DataBuffer const&);
    DataBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataBuffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
