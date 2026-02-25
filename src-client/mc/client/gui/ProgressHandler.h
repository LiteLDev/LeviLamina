#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/gui/ProgressHandlerType.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ProgressHandlerType const> mType;
    ::ll::TypedStorage<4, 4, ::ProgressAnimation>         mProgressAnimation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProgressHandler() = default;

    virtual void onStart(::MinecraftScreenModel&) = 0;

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    virtual void tick(::MinecraftScreenModel&) = 0;

    virtual void onCancel(::MinecraftScreenModel&) = 0;

    virtual void onRetry(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&) = 0;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const = 0;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const = 0;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    virtual ::std::string getName() const = 0;

    virtual ::std::string getTTSProgressMessage() const;

    virtual ::std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onRetry(::MinecraftScreenModel&);

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCAPI ::std::string $getTitleText() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
