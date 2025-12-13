#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShapeDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8aab05;
    ::ll::UntypedStorage<1, 2>  mUnk5efd96;
    ::ll::UntypedStorage<4, 16> mUnk9a8660;
    ::ll::UntypedStorage<4, 16> mUnk5ed2f3;
    ::ll::UntypedStorage<4, 8>  mUnk514279;
    ::ll::UntypedStorage<4, 20> mUnk862ebe;
    ::ll::UntypedStorage<4, 8>  mUnkb50fca;
    ::ll::UntypedStorage<4, 4>  mUnk47f65b;
    ::ll::UntypedStorage<8, 48> mUnkbeac95;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapeDataPayload& operator=(ShapeDataPayload const&);
    ShapeDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShapeDataPayload(::ShapeDataPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ShapeDataPayload const&);
    // NOLINTEND
};
