#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/block/BlockedDirections.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct PlacementFilterComponent {
public:
    // PlacementFilterComponent inner types declare
    // clang-format off
    struct PlacementCondition;
    // clang-format on

    // PlacementFilterComponent inner types define
    struct PlacementCondition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::BlockedDirections>              mDirectionalFilter;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlockFilter;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SharedTypes::v1_26_10::BlockDefinition::PlacementFilterComponent::PlacementCondition>>
        mConditions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlacementFilterComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& AllowedFacesId();

    MCAPI static ::std::string_view const& BlockFilterId();

    MCAPI static ::std::string_view const& ConditionsId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
