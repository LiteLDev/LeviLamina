#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct Brightness : public ::NewType<uchar> {
public:
    // prevent constructor by default
    Brightness();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Brightness(uchar&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Brightness const& INVALID();

    MCAPI static ::Brightness const& MAX();

    MCAPI static ::Brightness const& MIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uchar&&);
    // NOLINTEND
};
