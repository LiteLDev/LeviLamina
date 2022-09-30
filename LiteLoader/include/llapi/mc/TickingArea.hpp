/**
 * @file  TickingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingArea.
 *
 */
class TickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREA
public:
    class TickingArea& operator=(class TickingArea const &) = delete;
    TickingArea(class TickingArea const &) = delete;
    TickingArea() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TickingArea();
    /**
     * @hash   -980802206
     * @vftbl  1
     * @symbol ?getId@TickingArea@@UEBAAEBVUUID@mce@@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @hash   1520898487
     * @vftbl  2
     * @symbol ?getName@TickingArea@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   505833001
     * @vftbl  3
     * @symbol ?getEntityId@TickingArea@@UEBAAEBUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   -852109122
     * @vftbl  4
     * @symbol ?isEntityOwned@TickingArea@@UEBA_NXZ
     */
    virtual bool isEntityOwned() const;
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -679849922
     * @vftbl  7
     * @symbol ?getBounds@TickingArea@@UEBAAEBUBounds@@XZ
     */
    virtual struct Bounds const & getBounds() const;
    /**
     * @hash   1053852949
     * @vftbl  8
     * @symbol ?isAlwaysActive@TickingArea@@UEBA_NXZ
     */
    virtual bool isAlwaysActive() const;
    /**
     * @hash   684660975
     * @vftbl  9
     * @symbol ?getMaxDistToPlayers@TickingArea@@UEBAMXZ
     */
    virtual float getMaxDistToPlayers() const;
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @hash   -832490522
     * @vftbl  12
     * @symbol ?getDescription@TickingArea@@UEBA?AUTickingAreaDescription@@XZ
     */
    virtual struct TickingAreaDescription getDescription() const;
    /**
     * @hash   -516329096
     * @vftbl  13
     * @symbol ?getLoadMode@TickingArea@@UEBA?AW4TickingAreaLoadMode@@XZ
     */
    virtual enum class TickingAreaLoadMode getLoadMode() const;
    /**
     * @hash   -565111682
     * @vftbl  14
     * @symbol ?setLoadMode@TickingArea@@UEAAXW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
     */
    virtual void setLoadMode(enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @hash   479681047
     * @vftbl  15
     * @symbol ?isPreloadDone@TickingArea@@UEBA_NXZ
     */
    virtual bool isPreloadDone() const;
    /**
     * @hash   -1214986595
     * @vftbl  16
     * @symbol ?tick@TickingArea@@UEAAXAEBUTick@@_N@Z
     */
    virtual void tick(struct Tick const &, bool);
    /**
     * @hash   -668341655
     * @vftbl  17
     * @symbol ?tickSeasons@TickingArea@@UEAAXAEAVRandom@@@Z
     */
    virtual void tickSeasons(class Random &);
    /**
     * @hash   1376388843
     * @vftbl  18
     * @symbol ?updatePosition@TickingArea@@UEAAXAEBVVec3@@@Z
     */
    virtual void updatePosition(class Vec3 const &);
    /**
     * @hash   869024062
     * @vftbl  19
     * @symbol ?updateAndCenter@TickingArea@@UEAAXAEAVLevelStorage@@UTick@@@Z
     */
    virtual void updateAndCenter(class LevelStorage &, struct Tick);
    /**
     * @hash   537490371
     * @vftbl  20
     * @symbol ?findOwner@TickingArea@@UEAAPEAVActor@@AEAE@Z
     */
    virtual class Actor * findOwner(unsigned char &);
    /**
     * @hash   -2067593739
     * @vftbl  21
     * @symbol ?entityHasBeenFound@TickingArea@@UEBA_NXZ
     */
    virtual bool entityHasBeenFound() const;
    /**
     * @hash   -424221406
     * @vftbl  22
     * @symbol ?setEntityFound@TickingArea@@UEAAXXZ
     */
    virtual void setEntityFound();
    /**
     * @hash   695624829
     * @vftbl  23
     * @symbol ?isRemoved@TickingArea@@UEAA_NXZ
     */
    virtual bool isRemoved();
    /**
     * @hash   -1405939276
     * @vftbl  24
     * @symbol ?remove@TickingArea@@UEAAXAEAVLevelStorage@@@Z
     */
    virtual void remove(class LevelStorage &);
    /**
     * @hash   1422851156
     * @vftbl  25
     * @symbol ?onComponentChanged@TickingArea@@UEAAXIM_NAEAVLevelStorage@@@Z
     */
    virtual void onComponentChanged(unsigned int, float, bool, class LevelStorage &);
    /**
     * @hash   -1159600475
     * @vftbl  26
     * @symbol ?updateBlockSourceCurrentTick@TickingArea@@UEAAXAEBUTick@@@Z
     */
    virtual void updateBlockSourceCurrentTick(struct Tick const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREA
    /**
     * @hash   -1303657631
     * @symbol ?getBlockSource@TickingArea@@UEAAAEAVBlockSource@@XZ
     */
    MCVAPI class BlockSource & getBlockSource();
    /**
     * @hash   -1736472547
     * @symbol ?getBlockSource@TickingArea@@UEBAAEBVBlockSource@@XZ
     */
    MCVAPI class BlockSource const & getBlockSource() const;
    /**
     * @hash   -245436036
     * @symbol ?getView@TickingArea@@UEAAAEAVITickingAreaView@@XZ
     */
    MCVAPI class ITickingAreaView & getView();
    /**
     * @hash   1026031160
     * @symbol ?getView@TickingArea@@UEBAAEBVITickingAreaView@@XZ
     */
    MCVAPI class ITickingAreaView const & getView() const;
#endif
    /**
     * @hash   223357778
     * @symbol ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUBounds@@_NW4TickingAreaLoadMode@@@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, std::string const &, struct Bounds const &, bool, enum class TickingAreaLoadMode);
    /**
     * @hash   504696335
     * @symbol ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBUBounds@@UActorUniqueID@@M@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, struct Bounds const &, struct ActorUniqueID, float);
    /**
     * @hash   -422146158
     * @symbol ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBUBounds@@UActorUniqueID@@@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, struct Bounds const &, struct ActorUniqueID);

//private:
    /**
     * @hash   -2052881454
     * @symbol ??0TickingArea@@AEAA@AEAVDimension@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@AEBUBounds@@_NM5W4TickingAreaLoadMode@@@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, std::string const &, struct ActorUniqueID, struct Bounds const &, bool, float, bool, enum class TickingAreaLoadMode);
    /**
     * @hash   1796910951
     * @symbol ?_center@TickingArea@@AEAAXAEAVLevelStorage@@@Z
     */
    MCAPI void _center(class LevelStorage &);
    /**
     * @hash   1219005567
     * @symbol ?_save@TickingArea@@AEAAXAEAVLevelStorage@@@Z
     */
    MCAPI void _save(class LevelStorage &);

private:

};