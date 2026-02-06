#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct ProgressHandler;
namespace Json { class Value; }
// clang-format on

class DeleteProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                                                mInitiated;
    ::ll::TypedStorage<1, 1, bool>                                                mNext;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mCalledFrom;
    ::ll::TypedStorage<8, 8, int64>                                               mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, int64 const>                                         mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>>                mProgressHandler;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ProgressHandler>>> mProgressHandlerList;
    // NOLINTEND

public:
    // prevent constructor by default
    DeleteProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ~DeleteProgressScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeleteProgressScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList
    );

    MCAPI ::std::string const _getProgressMessage() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressHandlerList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
