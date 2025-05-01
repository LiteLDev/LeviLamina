#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct Brightness : public ::NewType<uchar> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Brightness(uchar&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Brightness const& MAX();

    MCAPI static ::Brightness const& MIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar&&);
    // NOLINTEND
};
