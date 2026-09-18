#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/block/BlockDescriptor.h"

struct EntityPlacerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>     mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedDispenseBlocks;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EntityPlacerItemComponentLegacyFactoryData& operator=(EntityPlacerItemComponentLegacyFactoryData const&);
    EntityPlacerItemComponentLegacyFactoryData(EntityPlacerItemComponentLegacyFactoryData const&);
    EntityPlacerItemComponentLegacyFactoryData();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::EntityPlacerItemComponentLegacyFactoryData& operator=(::EntityPlacerItemComponentLegacyFactoryData&&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
