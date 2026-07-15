#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnHurtActor;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnHitActor;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnHitBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    WeaponItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeaponItemComponent(::WeaponItemComponent const&);

    MCAPI ::WeaponItemComponent& operator=(::WeaponItemComponent const&);
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeaponItemComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
