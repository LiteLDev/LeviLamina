/**
 * @file  Weather.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Weather.
 *
 */
class Weather : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEATHER
public:
    class Weather& operator=(class Weather const &) = delete;
    Weather(class Weather const &) = delete;
    Weather() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Weather();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @symbol  __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol  __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol  __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol  ?levelEvent\@Weather\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    virtual void levelEvent(enum class LevelEvent, class Vec3 const &, int);
    /**
     * @symbol  ??0Weather\@\@QEAA\@AEAVDimension\@\@AEAVIRandom\@\@\@Z
     */
    MCAPI Weather(class Dimension &, class IRandom &);
    /**
     * @symbol  ?calcSnowBlockDepth\@Weather\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int calcSnowBlockDepth(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol  ?canPlaceTopSnow\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N2PEAH\@Z
     */
    MCAPI bool canPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool, int *) const;
    /**
     * @symbol  ?getFogLevel\@Weather\@\@QEBAMXZ
     */
    MCAPI float getFogLevel() const;
    /**
     * @symbol  ?getLightningLevel\@Weather\@\@QEBAMM\@Z
     */
    MCAPI float getLightningLevel(float) const;
    /**
     * @symbol  ?getRainLevel\@Weather\@\@QEBAMM\@Z
     */
    MCAPI float getRainLevel(float) const;
    /**
     * @symbol  ?isLightning\@Weather\@\@QEBA_NXZ
     */
    MCAPI bool isLightning() const;
    /**
     * @symbol  ?isPrecipitatingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPrecipitatingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?isRaining\@Weather\@\@QEBA_NXZ
     */
    MCAPI bool isRaining() const;
    /**
     * @symbol  ?isRainingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isRainingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?isSnowingAt\@Weather\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isSnowingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?serverTick\@Weather\@\@QEAAXXZ
     */
    MCAPI void serverTick();
    /**
     * @symbol  ?setSkyFlashTime\@Weather\@\@QEAAXH\@Z
     */
    MCAPI void setSkyFlashTime(int);
    /**
     * @symbol  ?setTargetLightningLevel\@Weather\@\@QEAAXM\@Z
     */
    MCAPI void setTargetLightningLevel(float);
    /**
     * @symbol  ?setTargetRainLevel\@Weather\@\@QEAAXM\@Z
     */
    MCAPI void setTargetRainLevel(float);
    /**
     * @symbol  ?stop\@Weather\@\@QEAAXXZ
     */
    MCAPI void stop();
    /**
     * @symbol  ?tick\@Weather\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ?tryToPlaceTopSnow\@Weather\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N2\@Z
     */
    MCAPI bool tryToPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool);
    /**
     * @symbol  ?calcLightningCycleTime\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcLightningCycleTime(class IRandom &);
    /**
     * @symbol  ?calcRainCycleTime\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcRainCycleTime(class IRandom &);
    /**
     * @symbol  ?calcRainDuration\@Weather\@\@SAHAEAVIRandom\@\@\@Z
     */
    MCAPI static int calcRainDuration(class IRandom &);
    /**
     * @symbol  ?rebuildTopSnowToDepth\@Weather\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI static void rebuildTopSnowToDepth(class BlockSource &, class BlockPos const &, int);

};