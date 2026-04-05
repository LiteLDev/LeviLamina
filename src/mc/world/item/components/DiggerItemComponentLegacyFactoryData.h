#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct DiggerBlockTypeInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mUseEfficiency;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerBlockTypeInfo>> mDestroySpeeds;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>                  mOnDigDefault;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DiggerItemComponentLegacyFactoryData& operator=(DiggerItemComponentLegacyFactoryData const&);
    DiggerItemComponentLegacyFactoryData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DiggerItemComponentLegacyFactoryData();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiggerItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerItemComponentLegacyFactoryData(::DiggerItemComponentLegacyFactoryData const&);

    MCAPI ::DiggerItemComponentLegacyFactoryData& operator=(::DiggerItemComponentLegacyFactoryData&&);

#ifdef LL_PLAT_C
    MCAPI ::DiggerItemComponentLegacyFactoryData& operator=(::DiggerItemComponentLegacyFactoryData const&);
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DiggerItemComponentLegacyFactoryData const&);
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
