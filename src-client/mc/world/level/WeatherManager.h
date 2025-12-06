#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class LevelEventCoordinator;
struct IServerPlayerSleepManagerConnector;
struct IWeatherManagerProxy;
struct LevelEventManager;
// clang-format on

class WeatherManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>      mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const>     mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IWeatherManagerProxy>>>    mWeatherManagerProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeatherManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
    );

    MCAPI void
    registerWithServerPlayerSleepManager(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);

    MCAPI void stopWeather();

    MCAPI void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCAPI ~WeatherManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
