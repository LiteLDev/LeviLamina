#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CloudSyncTrigger;
class FeatureToggles;
class FlightingService;
class IAdvancedGraphicsOptions;
class IDataDrivenUIRepository;
class ILocalHydratingLayoutServiceCache;
class IMinecraftGame;
class ISceneStackNavigator;
class ISubscriptionStateManager;
class MarketplaceSearchState;
class MatchmakingQueueState;
class MatchmakingRequestSender;
class TextToSpeechSystem;
namespace MainMenu { class Gate; }
namespace Marketplace { class GiftingSystem; }
namespace OreUI { class AllKnownTiles; }
namespace OreUI { class TelemetryManager; }
namespace flighting { class TreatmentToggles; }
// clang-format on

namespace OreUI {

class GameDependencies {
public:
    // GameDependencies inner types define
    using GamePtr = ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>;

    using GraphicsPtr = ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>;

    using PlatformPtr = ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>;

    using FeaturePtr = ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>;

    using DataDrivenUIRepositoryPtr = ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>;

    using MainMenuGateProvider = ::std::function<::MainMenu::Gate*()>;

    using TtsProvider = ::std::function<::TextToSpeechSystem*()>;

    using GiftingSystemProvider = ::std::function<::Marketplace::GiftingSystem&()>;

    using CloudSyncTriggerProvider = ::std::function<::CloudSyncTrigger*()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>>           mGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>              mPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::flighting::TreatmentToggles>>    mFlighting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>>           mFeatureToggles;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>>  mDataDrivenUIRepository;
    ::ll::TypedStorage<8, 8, ::ISceneStackNavigator&>                                    mSceneStackNavigator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache>>
                                                                                mLocalHydratingLayoutServiceCache;
    ::ll::TypedStorage<8, 8, ::OreUI::TelemetryManager&>                        mOreUITelemetryManager;
    ::ll::TypedStorage<8, 64, ::std::function<::MainMenu::Gate*()>>             mMainMenuGateProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::Marketplace::GiftingSystem&()>> mGiftingSystemProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::TextToSpeechSystem*()>>         mTtsProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mMarketplaceSearchState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::AllKnownTiles>>                mGeometryAtlasKnownTiles;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                 mStartupScreenReadyNotifier;
    ::ll::TypedStorage<8, 64, ::std::function<::CloudSyncTrigger*()>>                  mCloudSyncTriggerProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDependencies& operator=(GameDependencies const&);
    GameDependencies(GameDependencies const&);
    GameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameDependencies(::OreUI::GameDependencies&&);

    MCAPI GameDependencies(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&                    game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&          graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&                       platform,
        ::flighting::TreatmentToggles&                                            flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&                    features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&           dataDrivenUIRepository,
        ::ISceneStackNavigator&                                                   sceneStackNavigator,
        ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache> const& localHydratingLayoutServiceCache,
        ::OreUI::TelemetryManager&                                                oreUITelemetryManager,
        ::std::function<::MainMenu::Gate*()>                                      mainMenuGateProvider,
        ::std::function<::Marketplace::GiftingSystem&()>                          giftingSystemProvider,
        ::std::function<::TextToSpeechSystem*()>                                  ttsProvider,
        ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState> const&            marketplaceSearchState,
        ::std::unique_ptr<::OreUI::AllKnownTiles>                                 geometryAtlasKnownTiles,
        ::std::function<void()>                                                   startupScreenReadyNotifier,
        ::std::function<::CloudSyncTrigger*()>                                    cloudSyncTriggerProvider
    );

    MCAPI ::FlightingService& getFlightingService() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MatchmakingQueueState> getMatchmakingQueueState() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MatchmakingRequestSender> getMatchmakingRequestSender() const;

    MCAPI ::std::shared_ptr<::ISubscriptionStateManager> getSubscriptionStateManager() const;

    MCAPI ~GameDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies&&);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&                    game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const&          graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&                       platform,
        ::flighting::TreatmentToggles&                                            flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&                    features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&           dataDrivenUIRepository,
        ::ISceneStackNavigator&                                                   sceneStackNavigator,
        ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache> const& localHydratingLayoutServiceCache,
        ::OreUI::TelemetryManager&                                                oreUITelemetryManager,
        ::std::function<::MainMenu::Gate*()>                                      mainMenuGateProvider,
        ::std::function<::Marketplace::GiftingSystem&()>                          giftingSystemProvider,
        ::std::function<::TextToSpeechSystem*()>                                  ttsProvider,
        ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState> const&            marketplaceSearchState,
        ::std::unique_ptr<::OreUI::AllKnownTiles>                                 geometryAtlasKnownTiles,
        ::std::function<void()>                                                   startupScreenReadyNotifier,
        ::std::function<::CloudSyncTrigger*()>                                    cloudSyncTriggerProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
