#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct PageCapture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka140a1;
    ::ll::UntypedStorage<8, 8> mUnkae2176;
    // NOLINTEND

public:
    // prevent constructor by default
    PageCapture& operator=(PageCapture const&);
    PageCapture(PageCapture const&);
    PageCapture();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void Release() = 0;

    virtual ~PageCapture() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
