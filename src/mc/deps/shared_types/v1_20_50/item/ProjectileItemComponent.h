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
    ::ll::UntypedStorage<8, 32> mUnk7dd2ef;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileItemComponent(ProjectileItemComponent const&);
    ProjectileItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectileItemComponent(::SharedTypes::v1_20_50::ProjectileItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::ProjectileItemComponent&
    operator=(::SharedTypes::v1_20_50::ProjectileItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::ProjectileItemComponent&
    operator=(::SharedTypes::v1_20_50::ProjectileItemComponent const&);

    MCNAPI ~ProjectileItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ProjectileItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
