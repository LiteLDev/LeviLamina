#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class DeferredTextObject;
namespace Json { class Value; }
// clang-format on

class ChalkboardScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DeferredTextObject>> mDeferredTextObject;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mBlockPosition;
    ::ll::TypedStorage<1, 1, bool>                                    mLockVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    ChalkboardScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChalkboardScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChalkboardScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::BlockPos const&                              blockPos,
        bool                                           lockVisible
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::BlockPos const& blockPos, bool lockVisible);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
