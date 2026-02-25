#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct PointerMoveScreenEventData;
struct ScreenEvent;
// clang-format on

class SelectionWheelComponent : public ::UIComponent {
public:
    // SelectionWheelComponent inner types declare
    // clang-format off
    struct ButtonInteractionInfo;
    // clang-format on

    // SelectionWheelComponent inner types define
    enum class SelectionWheelIterateDir : uchar {};

    struct ButtonInteractionInfo {};

    using HoverSliceType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                mWeakScreenControl;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>> mStateControls;
    ::ll::TypedStorage<1, 1, bool>                                         mConsumeEvents;
    ::ll::TypedStorage<8, 8, uint64>                                       mSliceCount;
    ::ll::TypedStorage<8, 8, uint64>                                       mHoverSlice;
    ::ll::TypedStorage<8, 8, uint64>                                       mLastValidHoverSlice;
    ::ll::TypedStorage<4, 4, float>                                        mInnerRadius;
    ::ll::TypedStorage<4, 4, float>                                        mOuterRadius;
    ::ll::TypedStorage<4, 4, uint>                                         mAnalogButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                         mSelectButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                         mHoverButtonNameId;
    ::ll::TypedStorage<4, 4, uint>                                         mIterateLeftNameId;
    ::ll::TypedStorage<4, 4, uint>                                         mIterateRightNameId;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                         mSelectSlotNameIds;
    ::ll::TypedStorage<4, 4, ::InputMode>                                  mInputMode;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionWheelComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionWheelComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual void onEnabledChanged(bool enabled) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SelectionWheelComponent(::UIControl& owner);

    MCAPI void _broadcastNewHoverSliceButtonEvent(
        ::ScreenInputContext&                                   context,
        ::SelectionWheelComponent::ButtonInteractionInfo const& buttonInteractionInfo
    );

    MCAPI uint64 _computeHoverSliceDeflection(::PointerMoveScreenEventData const& moveData);

    MCAPI void _updateControlVisibility();

    MCAPI void addStateControl(::std::shared_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI void $onVisibilityChanged(bool visible);

    MCAPI void $onEnabledChanged(bool enabled);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
