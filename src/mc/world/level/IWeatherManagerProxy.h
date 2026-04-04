#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWeatherManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWeatherManagerProxy() = default;

    virtual float getRainLevel() const = 0;

    virtual float getLightningLevel() const = 0;

    virtual int getRainTime() const = 0;

    virtual int getLightningTime() const = 0;

    virtual void setRainLevel(float rainLevel) = 0;

    virtual void setLightningLevel(float lightningLevel) = 0;

    virtual void setRainTime(int rainTime) = 0;

    virtual void setLightningTime(int lightningTime) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
