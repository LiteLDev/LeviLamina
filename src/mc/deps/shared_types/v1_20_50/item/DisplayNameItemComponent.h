#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct DisplayNameItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayNameItemComponent& operator=(DisplayNameItemComponent const&);
    DisplayNameItemComponent(DisplayNameItemComponent const&);
    DisplayNameItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::DisplayNameItemComponent&
    operator=(::SharedTypes::v1_20_50::DisplayNameItemComponent&&);

    MCAPI_C ~DisplayNameItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
