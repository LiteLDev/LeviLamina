#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonHandleResult.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenButtonMapping;
// clang-format on

class InputComponent : public ::UIComponent {
public:
    // InputComponent inner types declare
    // clang-format off
    struct ScreenHoverButtonMapping;
    struct PressStats;
    // clang-format on

    // InputComponent inner types define
    enum class PressType : int {};

    struct ScreenHoverButtonMapping {};

    struct PressStats {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenButtonMapping>>                      mButtonMappings;
    ::ll::TypedStorage<8, 24, ::std::vector<::InputComponent::ScreenHoverButtonMapping>> mHoverButtonMappings;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope>                                         mRemappingMappingScope;
    ::ll::TypedStorage<1, 1, bool>                                                       mAlwaysHandlePointer;
    ::ll::TypedStorage<1, 1, bool> mAlwaysHandleControllerDirection;
    ::ll::TypedStorage<1, 1, bool> mHasRemappingMapping;
    ::ll::TypedStorage<1, 1, bool> mAlwaysListensToInput;
    ::ll::TypedStorage<1, 1, bool> mModal;
    ::ll::TypedStorage<1, 1, bool> mInlineModal;
    ::ll::TypedStorage<1, 1, bool> mIgnoreHoverChange;
    ::ll::TypedStorage<1, 1, bool> mHoverEnabled;
    ::ll::TypedStorage<1, 1, bool> mConsumeHoverEvents;
    ::ll::TypedStorage<1, 1, bool> mPreventsTouchControl;
    ::ll::TypedStorage<1, 1, bool> mGamepadDeflectionMode;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::InputComponent::PressStats>> mPressStats;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InputComponent::PressType
    _detectDoubleClick(uint buttonId, ::ButtonState state, ::glm::vec2 const& pointerPosition, bool isTTSTouchEnabled);

    MCAPI bool _getContentPanelHover(::glm::vec2 const& pointerPosition);

    MCAPI bool _sendButtonScreenEvent(
        ::ScreenInputContext&        context,
        ::ScreenButtonMapping const& buttonMapping,
        ::ButtonState                state,
        ::glm::vec2 const&           pointerPosition,
        ::VisualTree&                visualTree,
        ::UIAnimationController&     animationController,
        ::InputMode                  inputMode
    );

    MCAPI bool _sendHoverScreenEvent(
        ::ScreenInputContext&    context,
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::glm::vec2 const&       position,
        bool                     alreadyHandled
    );

    MCAPI bool _shouldHandlePressedMapping(
        ::ScreenButtonMapping const& buttonMapping,
        uint                         buttonId,
        ::ButtonState                state,
        ::glm::vec2 const&           pointerPosition,
        ::InputMode                  inputMode
    );

    MCAPI ::ButtonHandleResult handleButtonEvent(
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        uint                     buttonId,
        ::ButtonState            state,
        ::glm::vec2 const&       pointerPosition,
        ::InputMode              inputMode,
        bool                     isTTSTouchEnabled
    );

    MCAPI bool handleControllerDirection(
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        ::DirectionId            directionId,
        ::glm::vec2 const&       deltaPosition,
        bool                     alreadyHandled
    );

    MCAPI bool handleFocusLocation(
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        ::glm::vec2 const&       position,
        bool                     alreadyHandled
    );

    MCAPI bool handlePointerLocation(
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        ::glm::vec2 const&       position,
        ::glm::vec2 const&       deltaPosition,
        bool                     alreadyHandled
    );

    MCAPI bool isWithinClipRegion(::glm::vec2 const& pointerPosition) const;
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

    MCAPI void $onVisibilityChanged(bool visible);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
