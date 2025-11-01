#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/IntRange.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes { struct IntRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DurabilityItemComponent : public ::NetworkedItemComponent<::DurabilityItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMaxDamage;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mDamageChance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DurabilityItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::vector<::AllExperiments> const& requiredToggles, ::std::optional<::SemVersion> releasedMinFormatVersion);

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
