#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#include "mc/world/item/components/DiggerBlockTypeInfo.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
struct DiggerBlockTypeInfo;
// clang-format on

struct DiggerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mUseEfficiency;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerBlockTypeInfo>>     mDestroySpeeds;
    ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> mOnDigDefault;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
