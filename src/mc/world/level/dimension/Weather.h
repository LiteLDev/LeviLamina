#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

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
    // vIndex: 0, symbol: __gen_??1Weather@@UEAA@XZ
    virtual ~Weather() = default;

    // vIndex: 24, symbol: ?levelEvent@Weather@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    virtual void levelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // symbol: ??0Weather@@QEAA@AEAVDimension@@AEAVIRandom@@@Z
    MCAPI Weather(class Dimension& d, class IRandom& random);

    // symbol: ?calcSnowBlockDepth@Weather@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI int calcSnowBlockDepth(class BlockSource& region, class BlockPos const& pos, int maxLayerDepth) const;

    // symbol: ?canPlaceTopSnow@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@_N2PEAH@Z
    MCAPI bool canPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  checkSnowDepthLevel,
        int*                  newHeightAfterPlacement
    ) const;

    // symbol: ?getFogLevel@Weather@@QEBAMXZ
    MCAPI float getFogLevel() const;

    // symbol: ?getLightningLevel@Weather@@QEBAMM@Z
    MCAPI float getLightningLevel(float a) const;

    // symbol: ?getRainLevel@Weather@@QEBAMM@Z
    MCAPI float getRainLevel(float a) const;

    // symbol: ?isLightning@Weather@@QEBA_NXZ
    MCAPI bool isLightning() const;

    // symbol: ?isPrecipitatingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isPrecipitatingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isRaining@Weather@@QEBA_NXZ
    MCAPI bool isRaining() const;

    // symbol: ?isRainingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isRainingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isSnowingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isSnowingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?serverTick@Weather@@QEAAXXZ
    MCAPI void serverTick();

    // symbol: ?setSkyFlashTime@Weather@@QEAAXH@Z
    MCAPI void setSkyFlashTime(int flash);

    // symbol: ?setTargetLightningLevel@Weather@@QEAAXM@Z
    MCAPI void setTargetLightningLevel(float lightningLevel);

    // symbol: ?setTargetRainLevel@Weather@@QEAAXM@Z
    MCAPI void setTargetRainLevel(float rainLevel);

    // symbol: ?stop@Weather@@QEAAXXZ
    MCAPI void stop();

    // symbol: ?tick@Weather@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?tryToPlaceTopSnow@Weather@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N2@Z
    MCAPI bool tryToPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  fillLowerNeighborsFirst
    );

    // symbol: ?calcLightningCycleTime@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcLightningCycleTime(class IRandom& random);

    // symbol: ?calcRainCycleTime@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcRainCycleTime(class IRandom& random);

    // symbol: ?calcRainDuration@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcRainDuration(class IRandom& random);

    // symbol: ?rebuildTopSnowToDepth@Weather@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static void rebuildTopSnowToDepth(class BlockSource& region, class BlockPos const& testPos, int desiredDepth);

    // NOLINTEND
};
