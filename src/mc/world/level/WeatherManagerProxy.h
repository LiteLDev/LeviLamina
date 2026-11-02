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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getRainLevel() const;

    MCNAPI float $getLightningLevel() const;

    MCNAPI int $getRainTime() const;

    MCNAPI int $getLightningTime() const;

    MCNAPI void $setRainLevel(float rainLevel);

    MCNAPI void $setLightningLevel(float lightningLevel);

    MCNAPI void $setRainTime(int rainTime);

    MCNAPI void $setLightningTime(int lightningTime);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
