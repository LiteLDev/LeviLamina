#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct FrameCapture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdddf55;
    ::ll::UntypedStorage<8, 8> mUnk9e5605;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameCapture& operator=(FrameCapture const&);
    FrameCapture(FrameCapture const&);
    FrameCapture();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Release() = 0;

    virtual ~FrameCapture() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
