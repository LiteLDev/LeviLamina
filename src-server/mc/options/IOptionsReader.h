#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class IOptionsReader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IOptionsReader() = default;

    // vIndex: 1
    virtual ::gsl::not_null<::Option const*> get(::OptionID) const = 0;

    // vIndex: 2
    virtual bool getDevRenderBoundingBoxes() const = 0;

    // vIndex: 3
    virtual bool getDevRenderPaths() const = 0;

    // vIndex: 4
    virtual bool getDevRenderMobInfoState() const = 0;

    // vIndex: 5
    virtual bool getDevRenderSchedulerInfo() const = 0;

    // vIndex: 6
    virtual bool getDevRenderGoalState() const = 0;

    // vIndex: 7
    virtual bool getDevDeepDarkDebugRender() const = 0;

    // vIndex: 8
    virtual ushort getDevGameEventRetentionTicks() const = 0;

    // vIndex: 9
    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const = 0;

    // vIndex: 10
    virtual int getMaxViewDistanceChunks() const = 0;

    // vIndex: 11
    virtual ::GraphicsMode getGraphicsMode() const = 0;

    // vIndex: 12
    virtual ::UIProfile getUIProfile() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
