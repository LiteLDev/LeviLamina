#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class SemVersion;
namespace SharedTypes::v1_21_80 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class IconItemComponent : public ::NetworkedItemComponent<::IconItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::Reference<11>>> mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IconItemComponent(::SharedTypes::v1_21_80::IconItemComponent component);

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getBundleOpenBackTexture() const;

    MCNAPI ::std::string const& getBundleOpenFrontTexture() const;
#endif

    MCNAPI void setTexturePath(::std::string const& texturePath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_80::IconItemComponent component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
