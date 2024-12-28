#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TintMapColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::std::array<::mce::Color, 4>> colors;
    // NOLINTEND

public:
    // prevent constructor by default
    TintMapColor& operator=(TintMapColor const&);
    TintMapColor(TintMapColor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TintMapColor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
