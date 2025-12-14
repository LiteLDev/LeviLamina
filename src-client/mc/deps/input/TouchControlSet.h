#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchMoveAndTurnControlState.h"
#include "mc/deps/input/TouchPointResults.h"
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
class RectangleArea;
class TouchControl;
class TouchMoveAndTurnInteractControl;
class TouchTurnInteractControl;
struct TouchControlConfig;
struct TouchGlyphButtonBinding;
struct TouchTapOrHoldGlyphButtonBinding;
struct TouchTextButtonBinding;
// clang-format on

class TouchControlSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::TouchPointResults>                              mTouchPointResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::TouchControl>>> mControls;
    ::ll::TypedStorage<8, 8, ::TouchTurnInteractControl*>                       mTurnInteractControl;
    ::ll::TypedStorage<8, 8, ::TouchMoveAndTurnInteractControl*>                mTouchMoveAndTurnInteractControl;
    ::ll::TypedStorage<4, 4, int>                                               mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                               mScreenHeight;
    ::ll::TypedStorage<8, 8, uint64>                                            mControlOptionEditorId;
    ::ll::TypedStorage<4, 4, ::TouchTurnState>                                  mPrevState;
    ::ll::TypedStorage<8, 32, ::TouchTurnControlState>                          mPrevTouchTurnControlState;
    ::ll::TypedStorage<8, 120, ::TouchMoveAndTurnControlState>                  mPrevTouchMoveAndTurnControlState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, int>>>            mActivePointers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addConditionalGuiPassthrough(
        ::BindingFactory const& bindingFactory,
        uint                    areaBindingName,
        ::std::string const&    buttonName,
        uint                    conditionName,
        bool                    consumeInput
    );

    MCAPI void addCustomZone(::BindingFactory const& bindingFactory, uint areaBindingName, uint conditionName);

    MCAPI void addGlyphButton(::BindingFactory const& bindingFactory, ::TouchGlyphButtonBinding const& binding);

    MCAPI void addMoveAndTurnInteract(
        ::TouchControlConfig const&                       touchControlConfig,
        ::std::function<::std::vector<::RectangleArea>()> inactiveAreas
    );

    MCAPI void
    addTapOrHoldGlyphButton(::BindingFactory const& bindingFactory, ::TouchTapOrHoldGlyphButtonBinding const& binding);

    MCAPI void addTextButton(::BindingFactory const& bindingFactory, ::TouchTextButtonBinding const& binding);

    MCAPI void addTouchControlEditor(
        ::BindingFactory const& bindingFactory,
        uint                    areaBindingName,
        uint                    mainPanelAreaBindingName,
        uint                    subPanelAreaBindingName,
        uint                    conditionBindingName
    );

    MCAPI void addTurnInteract(
        ::TouchControlConfig const&                       touchControlConfig,
        ::std::function<::std::vector<::RectangleArea>()> inactiveAreas
    );

    MCAPI void clearControls(::InputEventQueue& eventQueue);

    MCAPI ~TouchControlSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
