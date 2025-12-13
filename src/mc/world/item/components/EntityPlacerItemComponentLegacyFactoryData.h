#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct EntityPlacerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk2e1cec;
    ::ll::UntypedStorage<8, 24>  mUnke0635e;
    ::ll::UntypedStorage<8, 24>  mUnk21f542;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponentLegacyFactoryData& operator=(EntityPlacerItemComponentLegacyFactoryData const&);
    EntityPlacerItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityPlacerItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntityPlacerItemComponentLegacyFactoryData(::EntityPlacerItemComponentLegacyFactoryData&&);

    MCAPI EntityPlacerItemComponentLegacyFactoryData(::EntityPlacerItemComponentLegacyFactoryData const&);
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
    MCAPI void* $ctor(::EntityPlacerItemComponentLegacyFactoryData&&);

    MCAPI void* $ctor(::EntityPlacerItemComponentLegacyFactoryData const&);
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
