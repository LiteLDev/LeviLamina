#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IWeatherManagerProxy.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class WeatherManagerProxy : public ::IWeatherManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const> mLevelData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual float getRainLevel() const /*override*/;

    // vIndex: 2
    virtual float getLightningLevel() const /*override*/;

    // vIndex: 3
    virtual int getRainTime() const /*override*/;

    // vIndex: 4
    virtual int getLightningTime() const /*override*/;

    // vIndex: 5
    virtual void setRainLevel(float rainLevel) /*override*/;

    // vIndex: 6
    virtual void setLightningLevel(float lightningLevel) /*override*/;

    // vIndex: 7
    virtual void setRainTime(int rainTime) /*override*/;

    // vIndex: 8
    virtual void setLightningTime(int lightningTime) /*override*/;

    // vIndex: 0
    virtual ~WeatherManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getRainLevel() const;

    MCAPI float $getLightningLevel() const;

    MCAPI int $getRainTime() const;

    MCAPI int $getLightningTime() const;

    MCAPI void $setRainLevel(float rainLevel);

    MCAPI void $setLightningLevel(float lightningLevel);

    MCAPI void $setRainTime(int rainTime);

    MCAPI void $setLightningTime(int lightningTime);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
