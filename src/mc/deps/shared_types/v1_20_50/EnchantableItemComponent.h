#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct EnchantableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkbb22ad;
    ::ll::UntypedStorage<8, 32> mUnk7b4f14;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantableItemComponent(EnchantableItemComponent const&);
    EnchantableItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_50::EnchantableItemComponent&
    operator=(::SharedTypes::v1_20_50::EnchantableItemComponent&&);

    MCAPI ::SharedTypes::v1_20_50::EnchantableItemComponent&
    operator=(::SharedTypes::v1_20_50::EnchantableItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
