#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class WorldProcessProgressHandler : public ::EmptyProgressHandler {
public:
    // WorldProcessProgressHandler inner types define
    enum class Type : int {
        Convert = 0,
        Upload  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>>           mOnTick;
    ::ll::TypedStorage<8, 64, ::std::function<::LoadingState()>>  mGetLoadingStateCallback;
    ::ll::TypedStorage<4, 4, float>                               mProgress;
    ::ll::TypedStorage<4, 4, ::WorldProcessProgressHandler::Type> mWorldProcessType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldProcessProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldProcessProgressHandler() /*override*/ = default;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldProcessProgressHandler(
        ::WorldProcessProgressHandler::Type worldProcessType,
        ::std::function<float()>            tickCallback,
        ::std::function<::LoadingState()>   getLoadingStateCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WorldProcessProgressHandler::Type worldProcessType,
        ::std::function<float()>            tickCallback,
        ::std::function<::LoadingState()>   getLoadingStateCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
