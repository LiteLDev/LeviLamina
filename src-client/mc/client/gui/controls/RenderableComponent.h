#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class UIControl;
class UIMeasureStrategy;
// clang-format on

class RenderableComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mSupportsLayoutOverride;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mMeasuredSize;
    ::ll::TypedStorage<4, 4, float>       mPropagatedAlpha;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderableComponent() /*override*/;

    virtual void updateUI(::UIMeasureStrategy const& uiMeasureStrategy);

    virtual void reset() /*override*/;

    virtual bool isRenderableComponent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderableComponent(::UIControl& owner, bool supportsLayoutOverride);

    MCAPI bool _hasDefaultHeightSizing() const;

    MCAPI bool _hasDefaultSizing(::LayoutVariableType type) const;

    MCAPI bool _hasDefaultWidthSizing() const;

    MCAPI bool _hasMaxSize() const;

    MCAPI bool _hasMinSize() const;

    MCAPI void _updateLayoutSize();

    MCAPI float getLayoutAxisOffsetOverride(::LayoutVariableType type) const;

    MCAPI bool overridesLayoutAxisOffset(::LayoutVariableType type) const;

    MCAPI void setPropagatedAlpha(float alpha);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getUIMaterialName(::UIMaterialType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner, bool supportsLayoutOverride);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $updateUI(::UIMeasureStrategy const& uiMeasureStrategy);

    MCFOLD void $reset();

    MCFOLD bool $isRenderableComponent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
