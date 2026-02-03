#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

struct SeatDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkffe8e6;
    ::ll::UntypedStorage<4, 4>  mUnk53a4e8;
    ::ll::UntypedStorage<4, 4>  mUnka2353f;
    ::ll::UntypedStorage<1, 1>  mUnke1cd25;
    ::ll::UntypedStorage<8, 16> mUnk42e630;
    ::ll::UntypedStorage<1, 1>  mUnkd0eb9e;
    ::ll::UntypedStorage<4, 4>  mUnk5c0f68;
    ::ll::UntypedStorage<4, 8>  mUnk1e8344;
    ::ll::UntypedStorage<4, 8>  mUnk3c1f72;
    // NOLINTEND

public:
    // prevent constructor by default
    SeatDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SeatDescription(::SeatDescription const&);

    MCAPI void addRotationExpressionNode(::ExpressionNode const& node);

    MCAPI ::SeatDescription& operator=(::SeatDescription const&);

    MCAPI bool operator==(::SeatDescription const& seat) const;

    MCAPI void setCameraRelaxDistanceSmoothing(float const& value);

    MCAPI void setThirdPersonCamerRadiusOverride(float const& value);

    MCAPI ~SeatDescription();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SeatDescription const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SeatDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
