#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class TaskGroup;
namespace Json { class Value; }
// clang-format on

class ScreenshotScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mScreenshotPath;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                         mNextTickDirtyFlag;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mCloseScreenAt;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>          mAsyncTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenshotScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _takeScreenshot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
