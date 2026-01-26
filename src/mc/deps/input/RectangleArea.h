#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RectangleArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> _x0;
    ::ll::TypedStorage<4, 4, float> _x1;
    ::ll::TypedStorage<4, 4, float> _y0;
    ::ll::TypedStorage<4, 4, float> _y1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::RectangleArea grow(::glm::vec2 const& f) const;

    MCAPI_C bool isOverlapping(::RectangleArea const& rect) const;

    MCAPI_C ::RectangleArea translate(float tx, float ty) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(float x0, float y0, float x1, float y1, bool checkForValidity);
    // NOLINTEND
};
