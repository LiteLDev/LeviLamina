#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnStart;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnTick;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnCancel;
    ::ll::TypedStorage<8, 32, ::std::string>           mTitleText;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsProgressHandler(
        ::std::string const&    title,
        ::std::function<void()> tickCallback,
        ::std::function<void()> cancelCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& title, ::std::function<void()> tickCallback, ::std::function<void()> cancelCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
