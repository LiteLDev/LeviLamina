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
    ::ll::UntypedStorage<8, 32> mUnkfad5ea;
    ::ll::UntypedStorage<8, 24> mUnk81fc40;
    ::ll::UntypedStorage<1, 1>  mUnkd6fad7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_40::PlanterItemComponent&
    operator=(::SharedTypes::v1_21_40::PlanterItemComponent const&);

    MCNAPI ::SharedTypes::v1_21_40::PlanterItemComponent& operator=(::SharedTypes::v1_21_40::PlanterItemComponent&&);

    MCNAPI ~PlanterItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_50::PlanterItemComponent>& oldDefinition,
        ::std::optional<::SharedTypes::v1_21_40::PlanterItemComponent>& newDefinition
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
