#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ISceneStackNavigator.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class TextToSpeechSystem;
// clang-format on

class SceneStackNavigator : public ::ISceneStackNavigator {
public:
    // SceneStackNavigator inner types define
    using TtsProvider = ::std::function<::TextToSpeechSystem*()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                        mClient;
    ::ll::TypedStorage<8, 64, ::std::function<::TextToSpeechSystem*()>> mTtsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackNavigator& operator=(SceneStackNavigator const&);
    SceneStackNavigator(SceneStackNavigator const&);
    SceneStackNavigator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toPreStartScreen(bool initialNavigation) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $toPreStartScreen(bool initialNavigation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
