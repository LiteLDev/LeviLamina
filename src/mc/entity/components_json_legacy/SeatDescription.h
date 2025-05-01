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
    ::ll::UntypedStorage<4, 12>  mUnkffe8e6;
    ::ll::UntypedStorage<4, 4>   mUnk53a4e8;
    ::ll::UntypedStorage<4, 4>   mUnka2353f;
    ::ll::UntypedStorage<1, 1>   mUnke1cd25;
    ::ll::UntypedStorage<8, 216> mUnk42e630;
    ::ll::UntypedStorage<1, 1>   mUnkd0eb9e;
    ::ll::UntypedStorage<4, 4>   mUnk5c0f68;
    // NOLINTEND

public:
    // prevent constructor by default
    SeatDescription& operator=(SeatDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SeatDescription();

    MCNAPI SeatDescription(::SeatDescription const&);

    MCNAPI void addRotationExpressionNode(::ExpressionNode const& node);

    MCNAPI bool operator==(::SeatDescription const& seat) const;

    MCNAPI ~SeatDescription();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SeatDescription const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SeatDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
