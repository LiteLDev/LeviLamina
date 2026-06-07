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
    // prevent constructor by default
    RectangleArea(RectangleArea const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RectangleArea();

    MCAPI RectangleArea(float x0, float y0, float x1, float y1, bool checkForValidity);

    MCAPI float centerX() const;

    MCAPI float centerY() const;

    MCAPI ::RectangleArea grow(float f) const;

    MCAPI ::RectangleArea grow(::glm::vec2 const& f) const;

    MCAPI bool isEmpty() const;

    MCAPI bool isInside(float x, float y) const;

    MCAPI bool isOverlapping(::RectangleArea const& rect) const;

    MCAPI ::RectangleArea leftHalf() const;

    MCFOLD float maxX() const;

    MCFOLD float maxY() const;

    MCFOLD float minX() const;

    MCFOLD float minY() const;

    MCAPI ::RectangleArea& operator=(::RectangleArea const& orig);

    MCAPI ::RectangleArea rightHalf() const;

    MCAPI ::RectangleArea scale(float f) const;

    MCAPI void set(float x0, float y0, float x1, float y1);

    MCAPI ::RectangleArea translate(float tx, float ty) const;

    MCAPI ::RectangleArea uniformScale(float f) const;

    MCAPI ::RectangleArea unionRects(::RectangleArea const& rect) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(float x0, float y0, float x1, float y1, bool checkForValidity);
    // NOLINTEND
};
