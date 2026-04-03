#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace SharedTypes::v1_21_40 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct PlanterItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>>                           mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mUseOn;
    ::ll::TypedStorage<1, 1, bool>                                                   mReplaceBlockItem;
    ::ll::TypedStorage<1, 1, bool>                                                   mAlignedPlacement;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_0::PlanterItemComponent& operator=(::SharedTypes::v1_26_0::PlanterItemComponent&&);

    MCAPI ::SharedTypes::v1_26_0::PlanterItemComponent& operator=(::SharedTypes::v1_26_0::PlanterItemComponent const&);

    MCAPI ~PlanterItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_21_40::PlanterItemComponent>& oldDefinition,
        ::std::optional<::SharedTypes::v1_26_0::PlanterItemComponent>&  newDefinition
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
