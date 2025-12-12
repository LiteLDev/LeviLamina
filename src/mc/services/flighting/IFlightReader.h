#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/services/flighting/FlightingTreatmentId.h"

// auto generated forward declare list
// clang-format off
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace flighting {

class IFlightReader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFlightReader() /*override*/ = default;

    // vIndex: 1
    virtual int getPersonaLowMemoryThresholdMb() const = 0;

    // vIndex: 2
    virtual bool useLegacyMultiplayerToken() const = 0;

    // vIndex: 3
    virtual ::std::chrono::seconds getNetherNetTimeout() const = 0;

    // vIndex: 4
    virtual bool getNewAlreadyLinkedMSAModal() const = 0;

    // vIndex: 5
    virtual int getLowMemoryRenderDistanceReductionPct() const = 0;

    // vIndex: 6
    virtual bool getDataDrivenRendererV2ActorsWithAttachables() const = 0;

    // vIndex: 7
    virtual bool getSplitStreamAndroid() const = 0;

    // vIndex: 8
    virtual ::std::chrono::seconds getPlayerMessagingSafetyRefreshIntervalSeconds() const = 0;

    // vIndex: 9
    virtual ::std::chrono::seconds getProfileImageRefreshIntervalSeconds() const = 0;

    // vIndex: 10
    virtual bool getTickDeathSystemsEnabled() const = 0;

    // vIndex: 11
    virtual bool getEnableMemoryTracker() const = 0;

    // vIndex: 12
    virtual int getNXLowMemoryThresholdMb() const = 0;

    // vIndex: 13
    virtual bool getHostJsonRpcSignalingService() const = 0;

    // vIndex: 14
    virtual bool getNewLinkedAccountsService() const = 0;

    // vIndex: 15
    virtual bool getEnableUseHardwareMemTier() const = 0;

    // vIndex: 16
    virtual bool getFriendsDrawerOnMainMenu() const = 0;

    // vIndex: 17
    virtual bool getFriendsDrawerOnGameMenu() const = 0;

    // vIndex: 18
    virtual bool getFriendsDrawerOnMultipleScreens() const = 0;

    // vIndex: 19
    virtual bool getFriendsDrawerPlayersInMyWorld() const = 0;

    // vIndex: 20
    virtual void visit(::std::function<void(::FlightingToggleMetadata const&)> const&) const = 0;

    // vIndex: 21
    virtual void
    registerEnableMemoryTrackerObserver(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) const = 0;

    // vIndex: 22
    virtual void registerFriendsDrawerOnMultipleScreensObserver(
        ::Bedrock::PubSub::Subscription&,
        ::std::function<void(bool)>
    ) const = 0;

    // vIndex: 23
    virtual bool isEnabled(::FlightingTreatmentId) const = 0;

    // vIndex: 24
    virtual void registerOptionObserverCallback(
        ::Bedrock::PubSub::Subscription&,
        ::FlightingTreatmentId,
        ::std::function<void(bool)>
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace flighting
