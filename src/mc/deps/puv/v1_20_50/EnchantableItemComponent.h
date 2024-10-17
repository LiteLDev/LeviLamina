#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct EnchantableItemComponent {
public:
    // prevent constructor by default
    EnchantableItemComponent(EnchantableItemComponent const&);
    EnchantableItemComponent();

public:
    // NOLINTBEGIN
    MCAPI struct Puv::v1_20_50::EnchantableItemComponent&
    operator=(struct Puv::v1_20_50::EnchantableItemComponent const&);

    MCAPI ~EnchantableItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
