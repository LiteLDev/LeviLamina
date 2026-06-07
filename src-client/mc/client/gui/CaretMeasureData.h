#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CaretMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>  position;
    ::ll::TypedStorage<1, 1, bool const> shouldRender;
    // NOLINTEND

public:
    // prevent constructor by default
    CaretMeasureData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CaretMeasureData(int _position, bool _shouldRender);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int _position, bool _shouldRender);
    // NOLINTEND
};
