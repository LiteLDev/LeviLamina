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
    ::ll::UntypedStorage<8, 32> mUnkb95b37;
    // NOLINTEND

public:
    // prevent constructor by default
    RarityItemComponent& operator=(RarityItemComponent const&);
    RarityItemComponent(RarityItemComponent const&);
    RarityItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::RarityItemComponent& operator=(::SharedTypes::v1_21_30::RarityItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
