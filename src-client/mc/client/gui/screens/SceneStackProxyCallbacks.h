#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class AbstractSceneProxy;
// clang-format on

struct SceneStackProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<bool(::AbstractScene const&)>)>> mForEachScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void(::AbstractScene&)>)>>
        mForEachAlwaysAcceptInputScreenWithTop;
    ::ll::TypedStorage<8, 64, ::std::function<::std::weak_ptr<::AbstractSceneProxy>()>>        mGetScreen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>                                mGetScreenName;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                         mHasScheduledScreens;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::shared_ptr<::AbstractScene>, bool)>> mPushScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                         mSchedulePopScreen;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string)>>                            mScreenOnStack;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                         mGetScreenTicking;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                                     mSetScreenTicking;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                         mUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackProxyCallbacks& operator=(SceneStackProxyCallbacks const&);
    SceneStackProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SceneStackProxyCallbacks(::SceneStackProxyCallbacks const&);

    MCAPI ~SceneStackProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SceneStackProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
