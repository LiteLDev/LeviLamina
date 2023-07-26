#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

class Weather : public ::BlockSourceListener {

public:
    // prevent constructor by default
    Weather& operator=(Weather const&) = delete;
    Weather(Weather const&)            = delete;
    Weather()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23(); // NOLINT
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24(); // NOLINT
    /**
     * @vftbl 25
     * @symbol ?levelEvent\@Weather\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    virtual void levelEvent(enum class LevelEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ??0Weather\@\@QEAA\@AEAVDimension\@\@AEAVIRandom\@\@\@Z
     */
    MCAPI Weather(class Dimension&, class IRandom&); // NOLINT
    /**
     * @symbol ?calcSnowBlockDepth\@Weather\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int calcSnowBlockDepth(class BlockSource&, class BlockPos const&, int) const; // NOLINT
    /**
     * @symbol ?canPlaceTopSnow\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N2PEAH\@Z
     */
    MCAPI bool canPlaceTopSnow(class BlockSource&, class BlockPos const&, bool, bool, int*) const; // NOLINT
    /**
     * @symbol ?getFogLevel\@Weather\@\@QEBAMXZ
     */
    MCAPI float getFogLevel() const; // NOLINT
    /**
     * @symbol ?getLightningLevel\@Weather\@\@QEBAMM\@Z
     */
    MCAPI float getLightningLevel(float) const; // NOLINT
    /**
     * @symbol ?getRainLevel\@Weather\@\@QEBAMM\@Z
     */
    MCAPI float getRainLevel(float) const; // NOLINT
    /**
     * @symbol ?isLightning\@Weather\@\@QEBA_NXZ
     */
    MCAPI bool isLightning() const; // NOLINT
    /**
     * @symbol ?isPrecipitatingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPrecipitatingAt(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isRaining\@Weather\@\@QEBA_NXZ
     */
    MCAPI bool isRaining() const; // NOLINT
    /**
     * @symbol ?isRainingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isRainingAt(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isSnowingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isSnowingAt(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?serverTick\@Weather\@\@QEAAXXZ
     */
    MCAPI void serverTick(); // NOLINT
    /**
     * @symbol ?setSkyFlashTime\@Weather\@\@QEAAXH\@Z
     */
    MCAPI void setSkyFlashTime(int); // NOLINT
    /**
     * @symbol ?setTargetLightningLevel\@Weather\@\@QEAAXM\@Z
     */
    MCAPI void setTargetLightningLevel(float); // NOLINT
    /**
     * @symbol ?setTargetRainLevel\@Weather\@\@QEAAXM\@Z
     */
    MCAPI void setTargetRainLevel(float); // NOLINT
    /**
     * @symbol ?stop\@Weather\@\@QEAAXXZ
     */
    MCAPI void stop(); // NOLINT
    /**
     * @symbol ?tick\@Weather\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?tryToPlaceTopSnow\@Weather\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N2\@Z
     */
    MCAPI bool tryToPlaceTopSnow(class BlockSource&, class BlockPos const&, bool, bool); // NOLINT
    /**
     * @symbol ?calcLightningCycleTime\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcLightningCycleTime(class IRandom&); // NOLINT
    /**
     * @symbol ?calcRainCycleTime\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcRainCycleTime(class IRandom&); // NOLINT
    /**
     * @symbol ?calcRainDuration\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcRainDuration(class IRandom&); // NOLINT
    /**
     * @symbol ?rebuildTopSnowToDepth\@Weather\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI static void rebuildTopSnowToDepth(class BlockSource&, class BlockPos const&, int); // NOLINT
};
