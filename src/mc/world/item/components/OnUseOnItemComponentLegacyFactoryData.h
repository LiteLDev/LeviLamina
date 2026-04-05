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

class OnUseOnItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnUseOn;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    OnUseOnItemComponentLegacyFactoryData& operator=(OnUseOnItemComponentLegacyFactoryData const&);
    OnUseOnItemComponentLegacyFactoryData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    OnUseOnItemComponentLegacyFactoryData();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnUseOnItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OnUseOnItemComponentLegacyFactoryData(::OnUseOnItemComponentLegacyFactoryData const&);

    MCAPI explicit OnUseOnItemComponentLegacyFactoryData(::DefinitionTrigger trigger);

    MCFOLD ::OnUseOnItemComponentLegacyFactoryData& operator=(::OnUseOnItemComponentLegacyFactoryData&&);

#ifdef LL_PLAT_C
    MCFOLD ::OnUseOnItemComponentLegacyFactoryData& operator=(::OnUseOnItemComponentLegacyFactoryData const&);
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
    MCFOLD void* $ctor(::OnUseOnItemComponentLegacyFactoryData const&);

    MCAPI void* $ctor(::DefinitionTrigger trigger);
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
