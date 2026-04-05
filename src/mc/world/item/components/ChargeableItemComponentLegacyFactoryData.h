#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ChargeableItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnCompleteDefault;
    ::ll::TypedStorage<4, 4, float>                mMovementModifier;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ChargeableItemComponentLegacyFactoryData& operator=(ChargeableItemComponentLegacyFactoryData const&);
    ChargeableItemComponentLegacyFactoryData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ChargeableItemComponentLegacyFactoryData();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChargeableItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChargeableItemComponentLegacyFactoryData(::ChargeableItemComponentLegacyFactoryData const&);

    MCAPI ::ChargeableItemComponentLegacyFactoryData& operator=(::ChargeableItemComponentLegacyFactoryData&&);

#ifdef LL_PLAT_C
    MCAPI ::ChargeableItemComponentLegacyFactoryData& operator=(::ChargeableItemComponentLegacyFactoryData const&);
#endif
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
    MCAPI void* $ctor(::ChargeableItemComponentLegacyFactoryData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
