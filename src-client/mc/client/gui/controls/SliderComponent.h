#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ButtonScreenEventData;
struct ControllerDirectionEventData;
struct HoverScreenEventData;
struct ScreenEvent;
// clang-format on

class SliderComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mSliderBoxControl;
    ::ll::TypedStorage<4, 4, uint>                          mTrackScrollButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mSmallDecreaseButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mSmallIncreaseButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mSelectedButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mDeselectedButtonId;
    ::ll::TypedStorage<1, 1, bool>                          mTrackActive;
    ::ll::TypedStorage<1, 1, bool>                          mDragActive;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>         mSliderDirection;
    ::ll::TypedStorage<1, 1, bool>                          mInverted;
    ::ll::TypedStorage<4, 4, float>                         mPercentage;
    ::ll::TypedStorage<4, 4, int>                           mCurrentStep;
    ::ll::TypedStorage<4, 4, int>                           mNumberSteps;
    ::ll::TypedStorage<4, 4, float>                         mSliderSpeed;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>        mSliderTimeout;
    ::ll::TypedStorage<8, 8, double>                        mLastRefreshTime;
    bool                                                    mStepSlider    : 1;
    bool                                                    mHover         : 1;
    bool                                                    mSelectOnHover : 1;
    ::ll::TypedStorage<4, 4, uint>                          mSliderNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                mSliderCollectionName;
    ::ll::TypedStorage<1, 1, ::ui::CardinalDirection>       mLastDirection;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mBackground;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mBackgroundHover;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mProgress;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mProgressHover;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mDefaultControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mHoverControl;
    ::ll::TypedStorage<8, 32, ::std::string>                mTTSSliderValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SliderComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _createSteps();

    MCAPI void _finalizeSliderBox();

    MCAPI ::ComponentReceiveActionType _handleButtonEvent(
        ::VisualTree&                  visualTree,
        ::ScreenInputContext&          context,
        ::ButtonScreenEventData const& buttonData
    );

    MCAPI void _handleControllerDirectionEvent(
        ::VisualTree&                         visualTree,
        ::ScreenInputContext&                 context,
        ::ControllerDirectionEventData const& controllerData
    );

    MCAPI void _handleHoverEvent(::VisualTree& visualTree, ::HoverScreenEventData const& hoverData);

    MCAPI void _moveSliderBox(::glm::vec2 offsetDelta);

    MCAPI void _sendSliderChangeEvent(::ScreenInputContext& context, bool finalized);

    MCAPI void _setSelected(bool selected);

    MCAPI void _setSliderValue(float value);

    MCAPI void _updateControlVisibility();

    MCAPI void _updateSliderBarProgress();

    MCAPI void _updateSliderFromDirection(::ui::CardinalDirection direction);

    MCAPI void _updateSliderFromPosition(::glm::vec2 const& pointerPosition, bool finalize);

    MCAPI void _updateSliderFromStepSize(int stepSize);

    MCAPI bool getSliderSelected() const;

    MCAPI void setSliderValue(float value);
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

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
