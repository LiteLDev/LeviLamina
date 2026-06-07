#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class FeatureToggles;
class FlightingService;
class IAdvancedGraphicsOptions;
class IContentManager;
class IDataDrivenUIRepository;
class IGameModuleApp;
class IMinecraftGame;
class ISplitScreenChangedPublisher;
class MarketplaceServicesManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace Parties { class PartySystem; }
namespace Realms { class RealmsSystem; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class SocialSystem; }
namespace World { class WorldSystem; }
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>>           mGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>              mPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::flighting::TreatmentToggles>>    mFlighting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>>           mFeatureToggles;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>>  mDataDrivenUIRepository;
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
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&           game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&              platform,
        ::flighting::TreatmentToggles&                                   flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&           features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&  dataDrivenUIRepository
    );

    MCAPI ::IContentManager& getContentManager() const;

    MCAPI ::IDataDrivenUIRepository& getDataDrivenUIRepository() const;

    MCAPI ::FeatureToggles& getFeatureToggles() const;

    MCAPI ::FlightingService& getFlightingService() const;

    MCAPI ::IGameModuleApp& getGameModule() const;

    MCAPI ::MarketplaceServicesManager& getMarketplaceServicesManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> getOreUIResourceAllowList() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Parties::PartySystem> getPartySystem() const;

    MCAPI ::AppPlatform& getPlatform() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> getProfanityContext() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSystem> getRealmsSystem() const;

    MCAPI ::Social::SocialSystem& getSocialSystem() const;

    MCAPI ::ISplitScreenChangedPublisher& getSplitScreenPublisher() const;

    MCAPI ::World::WorldSystem& getWorldSystem() const;

    MCAPI ~GameDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies&&);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame> const&           game,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& graphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform> const&              platform,
        ::flighting::TreatmentToggles&                                   flighting,
        ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles> const&           features,
        ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository> const&  dataDrivenUIRepository
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
