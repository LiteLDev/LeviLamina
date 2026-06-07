#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct EntityPlacerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>     mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedDispenseBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponentLegacyFactoryData& operator=(EntityPlacerItemComponentLegacyFactoryData const&);
    EntityPlacerItemComponentLegacyFactoryData(EntityPlacerItemComponentLegacyFactoryData const&);
    EntityPlacerItemComponentLegacyFactoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EntityPlacerItemComponentLegacyFactoryData& operator=(::EntityPlacerItemComponentLegacyFactoryData&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
