#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class IServerPlayerSleepManagerConnector;
class IWeatherManagerProxy;
class LevelEventCoordinator;
class LevelEventManager;
// clang-format on

class WeatherManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5cc1fc;
    ::ll::UntypedStorage<8, 24> mUnk8f3ac3;
    ::ll::UntypedStorage<8, 24> mUnk8c8cfe;
    ::ll::UntypedStorage<8, 8>  mUnke11ee3;
    ::ll::UntypedStorage<8, 16> mUnk76271e;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherManager& operator=(WeatherManager const&);
    WeatherManager(WeatherManager const&);
    WeatherManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
    );

    MCNAPI void
    registerWithServerPlayerSleepManager(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);

    MCNAPI void stopWeather();

    MCNAPI void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCNAPI ~WeatherManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>      dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>     levelEventManager,
        ::std::unique_ptr<::IWeatherManagerProxy>              weatherManagerProxy
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
