#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct PlanterItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71ce8d;
    ::ll::UntypedStorage<8, 24> mUnk8b61ff;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent& operator=(PlanterItemComponent const&);
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::PlanterItemComponent& operator=(::SharedTypes::v1_20_50::PlanterItemComponent&&);

    MCNAPI ~PlanterItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
