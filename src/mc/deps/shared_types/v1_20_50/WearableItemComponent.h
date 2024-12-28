#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct WearableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk95fe9b;
    ::ll::UntypedStorage<4, 4> mUnkee8cf5;
    // NOLINTEND

public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);
    WearableItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
