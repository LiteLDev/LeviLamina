#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ButtonHandleResult.h"
#include "mc/client/gui/controls/ButtonMappingInputModeCondition.h"
#include "mc/client/gui/controls/ButtonMappingType.h"
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
    enum class PressType : int {
        Single = 0,
        Double = 1,
    };

    struct ScreenHoverButtonMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>               toButtonId;
        ::ll::TypedStorage<1, 1, ::ScreenEventScope> scope;
        // NOLINTEND
    };

    struct PressStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                     pressCount;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> lastPressTime;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                             position;
        // NOLINTEND
    };

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
    // prevent constructor by default
    InputComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onVisibilityChanged(bool) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InputComponent(::UIControl& owner);

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

    MCAPI bool _shouldHandleControllerDirection(::DirectionId deltaPosition, ::glm::vec2 const&);

    MCAPI bool _shouldHandleMapping(
        ::ScreenButtonMapping const& buttonMapping,
        ::InputComponent::PressType  interpretAsPressType,
        uint                         buttonId,
        ::ButtonState                state,
        ::glm::vec2 const&           pointerPosition,
        ::InputMode                  inputMode
    );

    MCAPI bool _shouldHandlePressedMapping(
        ::ScreenButtonMapping const& buttonMapping,
        uint                         state,
        ::ButtonState                pointerPosition,
        ::glm::vec2 const&           inputMode,
        ::InputMode
    );

    MCAPI void addButtonMapping(
        uint                              fromButtonId,
        uint                              toButtonId,
        ::ButtonMappingType               mappingType,
        ::ScreenEventScope                scope,
        bool                              buttonUpRightOfFirstRefusal,
        bool                              handleSelect,
        bool                              handleDeselect,
        bool                              alternateInputScope,
        bool                              consumeEvent,
        ::ButtonMappingInputModeCondition inputModeCondition,
        bool                              ignoreInputScope
    );

    MCAPI void addHoverButtonMapping(uint toButtonId, ::ScreenEventScope scope);

    MCAPI void addRemappingMapping(::ScreenEventScope scope);

    MCAPI bool canHandleDeselect(uint buttonId);

    MCFOLD void cleanUpAllButtonStates();

    MCAPI void cleanUpButtonState(
        uint               buttonId,
        ::ButtonState      state,
        ::glm::vec2 const& pointerPosition,
        ::InputMode,
        bool isTTSTouchEnabled
    );

    MCFOLD bool getAlwaysListensToInput() const;

    MCAPI bool getGamepadDeflectionMode() const;

    MCFOLD bool getInlineModal() const;

    MCFOLD bool getModal() const;

    MCFOLD bool getPreventsTouchControls() const;

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

    MCAPI void handleInputModeChange(
        ::VisualTree&            mVisualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        ::InputMode              newInputMode
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

    MCAPI void setAlwaysHandleControllerDirection(bool enabled);

    MCAPI void setAlwaysHandlePointer(bool enabled);

    MCFOLD void setAlwaysListensToInput(bool enabled);

    MCFOLD void setConsumeHoverEvents(bool consumeHoverEvents);

    MCAPI void setGamepadDeflectionMode(bool enabled);

    MCAPI void setHoverEnabled(bool hoverEnabled);

    MCAPI void setIgnoreHoverChange(bool ignoreHoverChange);

    MCAPI void setInlineModal(bool inlineModal);

    MCAPI void setModal(bool modal);

    MCAPI void setPreventsTouchControls(bool enabled);
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

    MCFOLD void $reset();

    MCAPI void $onVisibilityChanged(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
