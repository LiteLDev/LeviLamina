#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/BaseCyclingComponent.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class UIComponent;
class UIControl;
// clang-format on

class ImageCyclingComponent : public ::BaseCyclingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>> mImageLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageCyclingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageCyclingComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void _postCreate() /*override*/;

    virtual void _updateSubPage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ImageCyclingComponent(::UIControl& owner);

    MCAPI void _initSpriteComponent();

    MCAPI void setImageLocations(::std::vector<::ResourceLocation>&& imageLocations);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $_postCreate();

    MCAPI void $_updateSubPage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
