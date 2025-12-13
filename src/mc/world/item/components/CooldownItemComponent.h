#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::v1_20_50 { struct CooldownItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CooldownItemComponent : public ::NetworkedItemComponent<::CooldownItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>           mDuration;
    ::ll::TypedStorage<8, 48, ::HashedString> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    CooldownItemComponent& operator=(CooldownItemComponent const&);
    CooldownItemComponent(CooldownItemComponent const&);
    CooldownItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CooldownItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CooldownItemComponent(::SharedTypes::v1_20_50::CooldownItemComponent component);

    MCAPI ::CooldownItemComponent& operator=(::CooldownItemComponent&&);
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
    MCAPI void* $ctor(::SharedTypes::v1_20_50::CooldownItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
