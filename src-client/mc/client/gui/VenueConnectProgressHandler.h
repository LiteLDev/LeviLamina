#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct Venue;
// clang-format on

class VenueConnectProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mGatheringId;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>              mCancelCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool, ::Venue)>> mCompleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    VenueConnectProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VenueConnectProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VenueConnectProgressHandler(
        ::std::string const&                 gatheringId,
        ::std::function<void(bool, ::Venue)> completeCallback,
        ::std::function<void()>              cancelCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                 gatheringId,
        ::std::function<void(bool, ::Venue)> completeCallback,
        ::std::function<void()>              cancelCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getName() const;

    MCAPI ::std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
