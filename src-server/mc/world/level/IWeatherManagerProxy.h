#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWeatherManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWeatherManagerProxy() = default;

    // vIndex: 1
    virtual float getRainLevel() const = 0;

    // vIndex: 2
    virtual float getLightningLevel() const = 0;

    // vIndex: 3
    virtual int getRainTime() const = 0;

    // vIndex: 4
    virtual int getLightningTime() const = 0;

    // vIndex: 5
    virtual void setRainLevel(float) = 0;

    // vIndex: 6
    virtual void setLightningLevel(float) = 0;

    // vIndex: 7
    virtual void setRainTime(int) = 0;

    // vIndex: 8
    virtual void setLightningTime(int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
