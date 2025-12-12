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
    virtual float getRainLevel() const /*override*/;

    virtual float getLightningLevel() const /*override*/;

    virtual int getRainTime() const /*override*/;

    virtual int getLightningTime() const /*override*/;

    virtual void setRainLevel(float rainLevel) /*override*/;

    virtual void setLightningLevel(float lightningLevel) /*override*/;

    virtual void setRainTime(int rainTime) /*override*/;

    virtual void setLightningTime(int lightningTime) /*override*/;

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
