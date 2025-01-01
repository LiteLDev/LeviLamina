#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct Brightness : public ::NewType<uchar> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Brightness(uchar const&);

    MCAPI Brightness(::Brightness const&);

    MCAPI ::Brightness& operator=(::Brightness&&);

    MCAPI ::Brightness& operator=(::Brightness const&);
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
    MCAPI void* $ctor(uchar const&);

    MCAPI void* $ctor(::Brightness const&);
    // NOLINTEND
};
