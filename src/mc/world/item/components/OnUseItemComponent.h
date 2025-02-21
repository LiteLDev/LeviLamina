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

class OnUseItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::DefinitionTrigger> mOnUse;
    // NOLINTEND

public:
    // prevent constructor by default
    OnUseItemComponent(OnUseItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnUseItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::OnUseItemComponent& operator=(::OnUseItemComponent&&);

    MCFOLD ::OnUseItemComponent& operator=(::OnUseItemComponent const&);
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
