#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchControlEditorState.h"

// auto generated forward declare list
// clang-format off
class ControlConfiguration;
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class ControlOptionEditorControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                                 mWYSIWYGHUDState;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                  mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                       mMainPanelArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                       mSubPanelArea;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::RectangleArea()>>>        mReservedAreas;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ControlConfiguration>>> mConfigurations;
    ::ll::TypedStorage<4, 4, ::TouchControlEditorState>                                 mEditorState;
    ::ll::TypedStorage<4, 4, int>                                                       mActivePointer;
    ::ll::TypedStorage<8, 8, double>                                                    mStartMoveTime;
    ::ll::TypedStorage<4, 4, float>                                                     mStartX;
    ::ll::TypedStorage<4, 4, float>                                                     mStartY;
    ::ll::TypedStorage<4, 4, uint>                                                      mSelectedConfigId;
    ::ll::TypedStorage<4, 4, int>                                                       mSelectAllPointer;
    ::ll::TypedStorage<4, 4, int>    mActiveInteractingWithScaleSliderPointer;
    ::ll::TypedStorage<8, 8, double> mLastBumpSoundTime;
    ::ll::TypedStorage<1, 1, bool>   mHasDoneInitialCollisionCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlOptionEditorControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;

    virtual ~ControlOptionEditorControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ControlOptionEditorControl(
        ::std::function<float()>                                 wysiwygState,
        ::std::function<::RectangleArea()>                       area,
        ::std::function<::RectangleArea()>                       mainPanelArea,
        ::std::function<::RectangleArea()>                       subPanelArea,
        ::std::function<bool()>                                  condition,
        ::std::vector<::std::unique_ptr<::ControlConfiguration>> controlConfigurations,
        ::std::vector<::std::function<::RectangleArea()>> const& reservedAreas
    );

    MCAPI bool _checkCollisionForPotentialUpdates(
        ::std::unordered_map<::ControlConfiguration*, float> const& potentialUpdates
    ) const;

    MCAPI int _getNumberOfActiveControlConfigurations() const;

    MCAPI ::RectangleArea _getRectangleAreaOfConfiguration(::ControlConfiguration* cc) const;

    MCAPI bool _isColliding(::RectangleArea const& rect, uint excludedId) const;

    MCAPI bool _otherConfigsExistWithSameCategory(uint configId) const;

    MCAPI void _playBumpingSound(::InputEventQueue& eventQueue);

    MCAPI void _pushControlsInsideSafeArea();

    MCAPI void _setControlConfigurationActive(::InputEventQueue& eventQueue, ::ControlConfiguration* cc, bool active);

    MCAPI bool areThereOverlappingControls() const;

    MCAPI void checkForOverlaps();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<float()>                                 wysiwygState,
        ::std::function<::RectangleArea()>                       area,
        ::std::function<::RectangleArea()>                       mainPanelArea,
        ::std::function<::RectangleArea()>                       subPanelArea,
        ::std::function<bool()>                                  condition,
        ::std::vector<::std::unique_ptr<::ControlConfiguration>> controlConfigurations,
        ::std::vector<::std::function<::RectangleArea()>> const& reservedAreas
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
