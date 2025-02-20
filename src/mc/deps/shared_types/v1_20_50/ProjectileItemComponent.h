#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ProjectileItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk79e1ba;
    ::ll::UntypedStorage<8, 32> mUnka85ab4;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_50::ProjectileItemComponent&
    operator=(::SharedTypes::v1_20_50::ProjectileItemComponent&&);

    MCAPI ::SharedTypes::v1_20_50::ProjectileItemComponent&
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
