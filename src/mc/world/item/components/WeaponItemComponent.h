#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mUnkec044b;
    ::ll::UntypedStorage<8, 256> mUnkc8a0f0;
    ::ll::UntypedStorage<8, 256> mUnk38ff7b;
    // NOLINTEND

public:
    // prevent constructor by default
    WeaponItemComponent(WeaponItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeaponItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeaponItemComponent();

    MCAPI WeaponItemComponent(::WeaponItemComponent&&);

    MCAPI ::WeaponItemComponent& operator=(::WeaponItemComponent const&);

    MCAPI ::WeaponItemComponent& operator=(::WeaponItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WeaponItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
