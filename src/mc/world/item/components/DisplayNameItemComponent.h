#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DisplayNameItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DisplayNameItemComponent : public ::NetworkedItemComponent<::DisplayNameItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDescriptionId;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayNameItemComponent& operator=(DisplayNameItemComponent const&);
    DisplayNameItemComponent(DisplayNameItemComponent const&);
    DisplayNameItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayNameItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S explicit DisplayNameItemComponent(::SharedTypes::v1_20_50::DisplayNameItemComponent component);

    MCAPI ::DisplayNameItemComponent& operator=(::DisplayNameItemComponent&&);
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
    MCAPI_S void* $ctor(::SharedTypes::v1_20_50::DisplayNameItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
