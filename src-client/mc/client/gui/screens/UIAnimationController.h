#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on

class UIAnimationController {
public:
    // UIAnimationController inner types declare
    // clang-format off
    struct AnimationUIControlFunctionCallback;
    // clang-format on

    // UIAnimationController inner types define
    enum class tickType : int {
        Fixed  = 0,
        Render = 1,
    };

    struct AnimationUIControlFunctionCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                                   control;
        ::ll::TypedStorage<8, 64, ::std::function<::ui::AnimationStatus(::mce::TimeStep const&)>> function;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AnimationUIControlFunctionCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using animationFunction_t = ::std::function<::ui::AnimationStatus(::mce::TimeStep const&)>;

    using animationList_t = ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>>
        animationListFixedTimestep;
    ::ll::TypedStorage<8, 24, ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>>
        animationListRenderTimestep;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tick(
        ::std::vector<::UIAnimationController::AnimationUIControlFunctionCallback>& animationList,
        ::mce::TimeStep const&                                                      timeStep,
        ::std::vector<::ScreenEvent>&                                               screenEvents
    );

    MCAPI ~UIAnimationController();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
