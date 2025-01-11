#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct CooldownItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5653b7;
    ::ll::UntypedStorage<4, 4>  mUnke83815;
    // NOLINTEND

public:
    // prevent constructor by default
    CooldownItemComponent(CooldownItemComponent const&);
    CooldownItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::CooldownItemComponent& operator=(::SharedTypes::v1_20_50::CooldownItemComponent&&);

    MCAPI ::SharedTypes::v1_20_50::CooldownItemComponent&
    operator=(::SharedTypes::v1_20_50::CooldownItemComponent const&);

    MCAPI ~CooldownItemComponent();
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
