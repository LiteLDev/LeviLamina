#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ArrowDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk1680f6;
    ::ll::UntypedStorage<4, 8>  mUnkfb4751;
    ::ll::UntypedStorage<4, 8>  mUnkf6bcd8;
    ::ll::UntypedStorage<1, 2>  mUnka50de1;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrowDataPayload& operator=(ArrowDataPayload const&);
    ArrowDataPayload(ArrowDataPayload const&);
    ArrowDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ArrowDataPayload const&) const;
    // NOLINTEND
};
