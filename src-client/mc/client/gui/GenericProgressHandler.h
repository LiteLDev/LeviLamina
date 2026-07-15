#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GenericProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnStart;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnTick;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mOnCancel;
    ::ll::TypedStorage<1, 1, bool>                                 mIsCancellable;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                       mMessageText;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GenericProgressHandler(
        ::std::string                       title,
        ::std::string                       message,
        ::brstd::move_only_function<void()> startCallback,
        ::brstd::move_only_function<void()> tickCallback,
        ::brstd::move_only_function<void()> cancelCallback,
        bool                                isCancellable
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                       title,
        ::std::string                       message,
        ::brstd::move_only_function<void()> startCallback,
        ::brstd::move_only_function<void()> tickCallback,
        ::brstd::move_only_function<void()> cancelCallback,
        bool                                isCancellable
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
