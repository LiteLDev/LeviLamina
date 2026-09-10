#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentCatalogService;
class FeatureToggles;
class FlightingService;
class IAdvancedGraphicsOptions;
class IDataDrivenUIRepository;
class IMinecraftGame;
class ISceneStackNavigator;
class LayoutServiceSystem;
namespace OreUI { class LazyLayoutImageSource; }
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
    ::ll::TypedStorage<8, 8, ::ISceneStackNavigator&>                                    mSceneStackNavigator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem>>      mLayoutServiceSystem;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::LazyLayoutImageSource>>         mLayoutImageSource;
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
        ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem> const&               layoutServiceSystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> contentCatalogServiceProvider
    );

    MCAPI ::FlightingService& getFlightingService() const;

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
        ::Bedrock::NotNullNonOwnerPtr<::LayoutServiceSystem> const&               layoutServiceSystem,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()> contentCatalogServiceProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
