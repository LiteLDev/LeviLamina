#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnUseOnItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkf7552f;
    // NOLINTEND

public:
    // prevent constructor by default
    OnUseOnItemComponentLegacyFactoryData& operator=(OnUseOnItemComponentLegacyFactoryData const&);
    OnUseOnItemComponentLegacyFactoryData(OnUseOnItemComponentLegacyFactoryData const&);
    OnUseOnItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnUseOnItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OnUseOnItemComponentLegacyFactoryData(::DefinitionTrigger trigger);

    MCFOLD ::OnUseOnItemComponentLegacyFactoryData& operator=(::OnUseOnItemComponentLegacyFactoryData&&);
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
