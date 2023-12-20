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
    // symbol: ??4EnchantableItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::EnchantableItemComponent&
    operator=(struct Puv::v1_20_50::EnchantableItemComponent const&);

    // symbol: ??1EnchantableItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~EnchantableItemComponent();

    // symbol: ?bindType@EnchantableItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
