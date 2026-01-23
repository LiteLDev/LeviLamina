#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ProjectileItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                        mMinimumCriticalPower;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>> mProjectileEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::ProjectileItemComponent&
    operator=(::SharedTypes::v1_20_50::ProjectileItemComponent&&);

    MCFOLD ::SharedTypes::v1_20_50::ProjectileItemComponent&
    operator=(::SharedTypes::v1_20_50::ProjectileItemComponent const&);

    MCAPI ~ProjectileItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
