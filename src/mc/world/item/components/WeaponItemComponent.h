#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class HashedString;
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
    WeaponItemComponent& operator=(WeaponItemComponent const&);
    WeaponItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeaponItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeaponItemComponent(::WeaponItemComponent&&);

    MCAPI WeaponItemComponent(::WeaponItemComponent const&);

    MCAPI ::WeaponItemComponent& operator=(::WeaponItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeaponItemComponent&&);

    MCAPI void* $ctor(::WeaponItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
