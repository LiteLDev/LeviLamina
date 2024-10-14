#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class Weather : public ::LevelListener {
public:
    // prevent constructor by default
    Weather& operator=(Weather const&);
    Weather(Weather const&);
    Weather();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Weather() = default;

    // vIndex: 24
    virtual void levelEvent(::LevelEvent type, class Vec3 const&, int data);

    MCAPI Weather(class Dimension& d, class IRandom& random);

    MCAPI int calcSnowBlockDepth(class BlockSource& region, class BlockPos const& pos, int maxLayerDepth) const;

    MCAPI bool canPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  checkSnowDepthLevel,
        int*                  newHeightAfterPlacement
    ) const;

    MCAPI float getFogLevel() const;

    MCAPI float getLightningLevel(float a) const;

    MCAPI float getRainLevel(float a) const;

    MCAPI bool isLightning() const;

    MCAPI bool isPrecipitatingAt(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isRaining() const;

    MCAPI bool isRainingAt(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isSnowingAt(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void serverTick();

    MCAPI void setSkyFlashTime(int flash);

    MCAPI void setTargetLightningLevel(float lightningLevel);

    MCAPI void setTargetRainLevel(float rainLevel);

    MCAPI void stop();

    MCAPI void tick();

    MCAPI bool tryToPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  fillLowerNeighborsFirst
    );

    MCAPI static int calcLightningCycleTime(class IRandom& random);

    MCAPI static int calcRainCycleTime(class IRandom& random);

    MCAPI static int calcRainDuration(class IRandom& random);

    MCAPI static void rebuildTopSnowToDepth(class BlockSource& region, class BlockPos const& testPos, int desiredDepth);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void levelEvent$(::LevelEvent type, class Vec3 const&, int data);

    // NOLINTEND
};
