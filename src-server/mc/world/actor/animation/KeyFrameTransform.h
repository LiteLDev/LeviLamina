#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class Vec3;
// clang-format on

class KeyFrameTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb32d8a;
    ::ll::UntypedStorage<8, 16> mUnk57e818;
    ::ll::UntypedStorage<4, 4>  mUnk1b0226;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransform& operator=(KeyFrameTransform const&);
    KeyFrameTransform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyFrameTransform(::KeyFrameTransform const&);

    MCNAPI ::KeyFrameTransform& operator=(::KeyFrameTransform&&);

    MCNAPI bool optimizeAndGetDataValues(::Vec3& minValue, ::Vec3& maxValue);

    MCNAPI void set(::ExpressionNode const& expression);

    MCNAPI void set(::ExpressionNode const& expression, ::Vec3 const& axis);

    MCNAPI void set(::ExpressionNode const& expression, int axisIndex);

    MCNAPI ~KeyFrameTransform();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void computeCubicPolynomial(
        ::KeyFrameTransform* p0,
        ::KeyFrameTransform& p1,
        ::KeyFrameTransform& p2,
        ::KeyFrameTransform* p3
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::KeyFrameTransform const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
