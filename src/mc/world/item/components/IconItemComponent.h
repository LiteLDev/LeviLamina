#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_60 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class IconItemComponent : public ::NetworkedItemComponent<::IconItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~IconItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IconItemComponent(::SharedTypes::v1_20_60::IconItemComponent component);

    MCNAPI ::std::string const& getDefaultTexture() const;

    MCNAPI void setTexturePath(::std::string const& texturePath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_60::IconItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
