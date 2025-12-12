#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct PlacementDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc66640;
    ::ll::UntypedStorage<4, 8>  mUnkf980db;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&);
    PlacementDirection(PlacementDirection const&);
    PlacementDirection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S ~PlacementDirection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& CARDINAL_DIRECTION();

    MCNAPI static ::std::string_view const& FACING_DIRECTION();

    MCNAPI static ::std::string const& VALID_DIRECTION_REGEX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_S void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
