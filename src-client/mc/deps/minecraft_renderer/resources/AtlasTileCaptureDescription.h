#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtlasTileCaptureDescription {
public:
    // AtlasTileCaptureDescription inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // AtlasTileCaptureDescription inner types define
    struct Impl {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AtlasTileCaptureDescription::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    AtlasTileCaptureDescription& operator=(AtlasTileCaptureDescription const&);
    AtlasTileCaptureDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AtlasTileCaptureDescription(::AtlasTileCaptureDescription const& description);

    MCAPI ~AtlasTileCaptureDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AtlasTileCaptureDescription const& description);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
