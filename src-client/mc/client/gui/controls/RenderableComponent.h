#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderableComponent() /*override*/ = default;

    virtual void updateUI(::UIMeasureStrategy const& context);

    virtual void reset() /*override*/;

    virtual bool isRenderableComponent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateLayoutSize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getUIMaterialName(::UIMaterialType type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateUI(::UIMeasureStrategy const& context);

    MCNAPI bool $isRenderableComponent() const;
    // NOLINTEND
};
