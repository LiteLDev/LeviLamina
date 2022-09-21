/**
 * @file  MC/Weather.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~Weather();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @hash   710178867
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl  27
     * @symbol __unk_vfn_27
     */
    virtual void __unk_vfn_27();
    /**
     * @hash   2053765570
     * @vftbl  28
     * @symbol ?levelEvent@Weather@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
     */
    virtual void levelEvent(enum LevelEvent, class Vec3 const &, int);
    /**
     * @hash   -1784387220
     * @symbol ??0Weather@@QEAA@AEAVDimension@@AEAVIRandom@@@Z
     */
    MCAPI Weather(class Dimension &, class IRandom &);
    /**
     * @hash   1007041455
     * @symbol ?calcSnowBlockDepth@Weather@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI int calcSnowBlockDepth(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -1765620482
     * @symbol ?canPlaceTopSnow@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@_N2PEAH@Z
     */
    MCAPI bool canPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool, int *) const;
    /**
     * @hash   -1530041442
     * @symbol ?getFogLevel@Weather@@QEBAMXZ
     */
    MCAPI float getFogLevel() const;
    /**
     * @hash   2103003329
     * @symbol ?getLightningLevel@Weather@@QEBAMM@Z
     */
    MCAPI float getLightningLevel(float) const;
    /**
     * @hash   -1153937809
     * @symbol ?getRainLevel@Weather@@QEBAMM@Z
     */
    MCAPI float getRainLevel(float) const;
    /**
     * @hash   482710550
     * @symbol ?isLightning@Weather@@QEBA_NXZ
     */
    MCAPI bool isLightning() const;
    /**
     * @hash   1352368280
     * @symbol ?isPrecipitatingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isPrecipitatingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -175751146
     * @symbol ?isRaining@Weather@@QEBA_NXZ
     */
    MCAPI bool isRaining() const;
    /**
     * @hash   -1284891542
     * @symbol ?isRainingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isRainingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2030289748
     * @symbol ?isSnowingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isSnowingAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1594172669
     * @symbol ?serverTick@Weather@@QEAAXXZ
     */
    MCAPI void serverTick();
    /**
     * @hash   495605370
     * @symbol ?setSkyFlashTime@Weather@@QEAAXH@Z
     */
    MCAPI void setSkyFlashTime(int);
    /**
     * @hash   -450200470
     * @symbol ?setTargetLightningLevel@Weather@@QEAAXM@Z
     */
    MCAPI void setTargetLightningLevel(float);
    /**
     * @hash   -613942084
     * @symbol ?setTargetRainLevel@Weather@@QEAAXM@Z
     */
    MCAPI void setTargetRainLevel(float);
    /**
     * @hash   1396338711
     * @symbol ?stop@Weather@@QEAAXXZ
     */
    MCAPI void stop();
    /**
     * @hash   2089080429
     * @symbol ?tick@Weather@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   -1251509369
     * @symbol ?tryToPlaceTopSnow@Weather@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N2@Z
     */
    MCAPI bool tryToPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool);
    /**
     * @hash   -1655589981
     * @symbol ?calcLightningCycleTime@Weather@@SAHAEAVIRandom@@@Z
     */
    MCAPI static int calcLightningCycleTime(class IRandom &);
    /**
     * @hash   1702002025
     * @symbol ?calcRainCycleTime@Weather@@SAHAEAVIRandom@@@Z
     */
    MCAPI static int calcRainCycleTime(class IRandom &);
    /**
     * @hash   1632742533
     * @symbol ?calcRainDuration@Weather@@SAHAEAVIRandom@@@Z
     */
    MCAPI static int calcRainDuration(class IRandom &);
    /**
     * @hash   1612008402
     * @symbol ?rebuildTopSnowToDepth@Weather@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI static void rebuildTopSnowToDepth(class BlockSource &, class BlockPos const &, int);

};