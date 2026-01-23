#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct RarityItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    RarityItemComponent(RarityItemComponent const&);
    RarityItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_30::RarityItemComponent& operator=(::SharedTypes::v1_21_30::RarityItemComponent&&);

    MCFOLD ::SharedTypes::v1_21_30::RarityItemComponent& operator=(::SharedTypes::v1_21_30::RarityItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
