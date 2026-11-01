#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenControllerProxy;
class ScreenViewProxy;
namespace OreUI { class IViewTestHelper; }
// clang-format on

struct AbstractSceneProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>             mGetScreenName;
    ::ll::TypedStorage<8, 64, ::std::function<::ScreenControllerProxy*()>>  mGetController;
    ::ll::TypedStorage<8, 64, ::std::function<::ScreenViewProxy*()>>        mGetScreenView;
    ::ll::TypedStorage<8, 64, ::std::function<::OreUI::IViewTestHelper*()>> mGetOreUIViewTestHelper;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>             mGetRoute;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractSceneProxyCallbacks& operator=(AbstractSceneProxyCallbacks const&);
    AbstractSceneProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbstractSceneProxyCallbacks(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND
};
