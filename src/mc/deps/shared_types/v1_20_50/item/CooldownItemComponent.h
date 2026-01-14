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
    ::ll::TypedStorage<4, 4, float>          mDuration;
    ::ll::TypedStorage<8, 32, ::std::string> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    CooldownItemComponent& operator=(CooldownItemComponent const&);
    CooldownItemComponent(CooldownItemComponent const&);
    CooldownItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::CooldownItemComponent& operator=(::SharedTypes::v1_20_50::CooldownItemComponent&&);

    MCAPI ~CooldownItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_CATEGORY();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
