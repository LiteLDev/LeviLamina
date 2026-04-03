#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/services/flighting/FlightingTreatmentId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
struct FlightingToggleMetadata;
// clang-format on

namespace flighting {

class IFlightReader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFlightReader() /*override*/ = default;

    virtual int getPersonaLowMemoryThresholdMb() const = 0;

    virtual int getPersonaCriticalMemoryThresholdMb() const = 0;

    virtual int getPersonaSkinCutoffSizeKb() const = 0;

    virtual bool useLegacyMultiplayerToken() const = 0;

    virtual ::std::chrono::seconds getNetherNetTimeout() const = 0;

    virtual ::std::chrono::seconds getJoinablePartiesRefreshIntervalSeconds() const = 0;

    virtual bool getPartiesEnabled() const = 0;

    virtual bool getPartiesChatEnabled() const = 0;

    virtual bool getPartiesChatInWorldEnabled() const = 0;

    virtual bool getPartiesEligibilityCheckForExperiences() const = 0;

    virtual bool getPartiesTravelToRealmsEnabled() const = 0;

    virtual bool getPartiesTravelToExperiencesEnabled() const = 0;

    virtual bool getPartiesTravelToThirdPartyServersEnabled() const = 0;

    virtual bool getNewAlreadyLinkedMSAModal() const = 0;

    virtual int getLowMemoryRenderDistanceReductionPct() const = 0;

    virtual bool getDataDrivenRendererV2ActorsWithAttachables() const = 0;

    virtual bool getSplitStreamAndroid() const = 0;

    virtual ::std::chrono::seconds getPlayerMessagingSafetyRefreshIntervalSeconds() const = 0;

    virtual ::std::chrono::seconds getProfileImageRefreshIntervalSeconds() const = 0;

    virtual bool getEnableMemoryTracker() const = 0;

    virtual bool getEnablePredictedMovementComponent() const = 0;

    virtual int getNXLowMemoryThresholdMb() const = 0;

    virtual bool getHostJsonRpcSignalingService() const = 0;

    virtual bool getNewLinkedAccountsService() const = 0;

    virtual bool getEnableUseHardwareMemTier() const = 0;

    virtual bool getFriendsDrawerOnMainMenu() const = 0;

    virtual bool getFriendsDrawerOnGameMenu() const = 0;

    virtual bool getFriendsDrawerOnMultipleScreens() const = 0;

    virtual bool getFriendsDrawerPlayersInMyWorld() const = 0;

    virtual bool getPacketTelemetry() const = 0;

    virtual bool getTextureCacheEnabled() const = 0;

    virtual bool getTextureStreamingEnabled() const = 0;

    virtual bool getShowMismatchedClientError() const = 0;

    virtual bool getSocialDrawerHotkeyEnabled() const = 0;

    virtual bool getUseLegacyTickFiltering() const = 0;

    virtual bool getExperienceManifestRefreshOnTokenEnabled() const = 0;

    virtual bool getDisableTrickleIce(int) const = 0;

    virtual ::std::string getProfilingOrchestratorConfig() const = 0;

    virtual ::std::chrono::seconds getSignalingPingInterval() const = 0;

    virtual bool getReconnectOnResume() const = 0;

    virtual bool getEnableNewDisconnectScreen3PServers() const = 0;

    virtual bool getEnableSwitchLan() const = 0;

    virtual bool getDisableSwitchAdHoc() const = 0;

    virtual void visit(::std::function<void(::FlightingToggleMetadata const&)> const&) const = 0;

    virtual void
    registerPartiesEnabledObserver(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) const = 0;

    virtual void
    registerPartiesChatEnabledObserver(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) const = 0;

    virtual void registerProfilingOrchestratorConfigChangedObserver(
        ::Bedrock::PubSub::Subscription&,
        ::std::function<void(::std::string_view)>&&
    ) const = 0;

    virtual void
    registerEnableMemoryTrackerObserver(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) const = 0;

    virtual void registerFriendsDrawerOnMultipleScreensObserver(
        ::Bedrock::PubSub::Subscription&,
        ::std::function<void(bool)>
    ) const = 0;

    virtual void registerPartiesTravelToRealmsEnabledObserver(
        ::Bedrock::PubSub::Subscription&,
        ::std::function<void(bool)>
    ) const = 0;

    virtual bool isEnabled(::FlightingTreatmentId) const = 0;

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
