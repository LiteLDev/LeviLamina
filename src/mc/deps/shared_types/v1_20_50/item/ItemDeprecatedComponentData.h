#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnCompleteTriggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_40/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_40::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnCompleteTriggerItemComponent>>
        legacyOnCompleteTriggerItemComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
