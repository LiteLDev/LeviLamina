/**
 * @file  TickingArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~TickingArea();
    /**
     * @hash   -884179422
     * @vftbl  1
     * @symbol  ?getId\@TickingArea\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @hash   655398823
     * @vftbl  2
     * @symbol  ?getName\@TickingArea\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -344736567
     * @vftbl  3
     * @symbol  ?getEntityId\@TickingArea\@\@UEBAAEBUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   20986286
     * @vftbl  4
     * @symbol  ?isEntityOwned\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isEntityOwned() const;
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   193199358
     * @vftbl  7
     * @symbol  ?getBounds\@TickingArea\@\@UEBAAEBUBounds\@\@XZ
     */
    virtual struct Bounds const & getBounds() const;
    /**
     * @hash   1926948357
     * @vftbl  8
     * @symbol  ?isAlwaysActive\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isAlwaysActive() const;
    /**
     * @hash   494075455
     * @vftbl  9
     * @symbol  ?getMaxDistToPlayers\@TickingArea\@\@UEBAMXZ
     */
    virtual float getMaxDistToPlayers() const;
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
     * @hash   40574134
     * @vftbl  12
     * @symbol  ?getDescription\@TickingArea\@\@UEBA?AUTickingAreaDescription\@\@XZ
     */
    virtual struct TickingAreaDescription getDescription() const;
    /**
     * @hash   -1250748360
     * @vftbl  13
     * @symbol  ?getLoadMode\@TickingArea\@\@UEBA?AW4TickingAreaLoadMode\@\@XZ
     */
    virtual enum class TickingAreaLoadMode getLoadMode() const;
    /**
     * @hash   308045230
     * @vftbl  14
     * @symbol  ?setLoadMode\@TickingArea\@\@UEAAXW4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    virtual void setLoadMode(enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @hash   1352776455
     * @vftbl  15
     * @symbol  ?isPreloadDone\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isPreloadDone() const;
    /**
     * @hash   -341829683
     * @vftbl  16
     * @symbol  ?tick\@TickingArea\@\@UEAAXAEBUTick\@\@_N\@Z
     */
    virtual void tick(struct Tick const &, bool);
    /**
     * @hash   204846009
     * @vftbl  17
     * @symbol  ?tickSeasons\@TickingArea\@\@UEAAXAEAVRandom\@\@\@Z
     */
    virtual void tickSeasons(class Random &);
    /**
     * @hash   -2045360037
     * @vftbl  18
     * @symbol  ?updatePosition\@TickingArea\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void updatePosition(class Vec3 const &);
    /**
     * @hash   1742227102
     * @vftbl  19
     * @symbol  ?updateAndCenter\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@UTick\@\@\@Z
     */
    virtual void updateAndCenter(class LevelStorage &, struct Tick);
    /**
     * @hash   1410493523
     * @vftbl  20
     * @symbol  ?findOwner\@TickingArea\@\@UEAAPEAVActor\@\@AEAE\@Z
     */
    virtual class Actor * findOwner(unsigned char &);
    /**
     * @hash   -1194590587
     * @vftbl  21
     * @symbol  ?entityHasBeenFound\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool entityHasBeenFound() const;
    /**
     * @hash   448935506
     * @vftbl  22
     * @symbol  ?setEntityFound\@TickingArea\@\@UEAAXXZ
     */
    virtual void setEntityFound();
    /**
     * @hash   1568735613
     * @vftbl  23
     * @symbol  ?isRemoved\@TickingArea\@\@UEAA_NXZ
     */
    virtual bool isRemoved();
    /**
     * @hash   -532828492
     * @vftbl  24
     * @symbol  ?remove\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@\@Z
     */
    virtual void remove(class LevelStorage &);
    /**
     * @hash   -1999005356
     * @vftbl  25
     * @symbol  ?onComponentChanged\@TickingArea\@\@UEAAXIM_NAEAVLevelStorage\@\@\@Z
     */
    virtual void onComponentChanged(unsigned int, float, bool, class LevelStorage &);
    /**
     * @hash   -286382059
     * @vftbl  26
     * @symbol  ?updateBlockSourceCurrentTick\@TickingArea\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void updateBlockSourceCurrentTick(struct Tick const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREA
    /**
     * @symbol  ?getBlockSource\@TickingArea\@\@UEBA?BV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> const getBlockSource() const;
    /**
     * @symbol  ?getBlockSource\@TickingArea\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource();
    /**
     * @hash   -1043578036
     * @symbol  ?getView\@TickingArea\@\@UEAAAEAVITickingAreaView\@\@XZ
     */
    MCVAPI class ITickingAreaView & getView();
    /**
     * @hash   227889160
     * @symbol  ?getView\@TickingArea\@\@UEBAAEBVITickingAreaView\@\@XZ
     */
    MCVAPI class ITickingAreaView const & getView() const;
#endif
    /**
     * @hash   1096299426
     * @symbol  ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUBounds\@\@_NW4TickingAreaLoadMode\@\@\@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, std::string const &, struct Bounds const &, bool, enum class TickingAreaLoadMode);
    /**
     * @hash   1377637983
     * @symbol  ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBUBounds\@\@UActorUniqueID\@\@M\@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, struct Bounds const &, struct ActorUniqueID, float);
    /**
     * @hash   450795490
     * @symbol  ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBUBounds\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, struct Bounds const &, struct ActorUniqueID);

//private:
    /**
     * @hash   -1179909054
     * @symbol  ??0TickingArea\@\@AEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@AEBUBounds\@\@_NM5W4TickingAreaLoadMode\@\@\@Z
     */
    MCAPI TickingArea(class Dimension &, class mce::UUID, std::string const &, struct ActorUniqueID, struct Bounds const &, bool, float, bool, enum class TickingAreaLoadMode);
    /**
     * @hash   -1625099321
     * @symbol  ?_center\@TickingArea\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _center(class LevelStorage &);
    /**
     * @hash   2091993343
     * @symbol  ?_save\@TickingArea\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _save(class LevelStorage &);

private:

};