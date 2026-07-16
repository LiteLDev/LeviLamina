#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RefCountedBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8aebe4;
    // NOLINTEND

public:
    // prevent constructor by default
    RefCountedBase& operator=(RefCountedBase const&);
    RefCountedBase(RefCountedBase const&);
    RefCountedBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RefCountedBase() = default;
    // NOLINTEND
};

} // namespace webrtc
