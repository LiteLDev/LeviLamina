#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {

struct PlanterItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk65b69f;
    ::ll::UntypedStorage<8, 24> mUnk609e55;
    ::ll::UntypedStorage<1, 1>  mUnkd6fad7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_40::PlanterItemComponent&
    operator=(::SharedTypes::v1_21_40::PlanterItemComponent const&);

    MCAPI ::SharedTypes::v1_21_40::PlanterItemComponent& operator=(::SharedTypes::v1_21_40::PlanterItemComponent&&);

    MCAPI ~PlanterItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_50::PlanterItemComponent>& oldDefinition,
        ::std::optional<::SharedTypes::v1_21_40::PlanterItemComponent>& newDefinition
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
