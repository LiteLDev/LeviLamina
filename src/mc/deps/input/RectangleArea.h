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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    RectangleArea();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI RectangleArea(float x0, float y0, float x1, float y1, bool checkForValidity);

    MCAPI ::RectangleArea grow(::glm::vec2 const& f) const;

    MCAPI bool isOverlapping(::RectangleArea const& rect) const;

    MCAPI ::RectangleArea translate(float tx, float ty) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(float x0, float y0, float x1, float y1, bool checkForValidity);
#endif
    // NOLINTEND
};
