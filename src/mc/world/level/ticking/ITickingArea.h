#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ITickingArea {

public:
    // prevent constructor by default
    ITickingArea& operator=(ITickingArea const&) = delete;
    ITickingArea(ITickingArea const&)            = delete;
    ITickingArea()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TickingArea\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const& getId() const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@TickingArea\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const = 0;
    /**
     * @vftbl 3
     * @symbol ?getEntityId\@TickingArea\@\@UEBAAEBUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID const& getEntityId() const = 0;
    /**
     * @vftbl 4
     * @symbol ?isEntityOwned\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isEntityOwned() const = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl 7
     * @symbol ?getBounds\@TickingArea\@\@UEBAAEBUBounds\@\@XZ
     */
    virtual struct Bounds const& getBounds() const = 0;
    /**
     * @vftbl 8
     * @symbol ?isAlwaysActive\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isAlwaysActive() const = 0;
    /**
     * @vftbl 9
     * @symbol ?getMaxDistToPlayers\@TickingArea\@\@UEBAMXZ
     */
    virtual float getMaxDistToPlayers() const = 0;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10() = 0;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11() = 0;
    /**
     * @vftbl 12
     * @symbol ?getDescription\@TickingArea\@\@UEBA?AUTickingAreaDescription\@\@XZ
     */
    virtual struct TickingAreaDescription getDescription() const = 0;
    /**
     * @vftbl 13
     * @symbol ?getLoadMode\@TickingArea\@\@UEBA?AW4TickingAreaLoadMode\@\@XZ
     */
    virtual enum class TickingAreaLoadMode getLoadMode() const = 0;
    /**
     * @vftbl 14
     * @symbol ?setLoadMode\@TickingArea\@\@UEAAXW4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    virtual void setLoadMode(enum class TickingAreaLoadMode, class LevelStorage&) = 0;
    /**
     * @vftbl 15
     * @symbol ?isPreloadDone\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isPreloadDone() const = 0;
    /**
     * @vftbl 16
     * @symbol ?tick\@TickingArea\@\@UEAAXAEBUTick\@\@_N\@Z
     */
    virtual void tick(struct Tick const&, bool) = 0;
    /**
     * @vftbl 17
     * @symbol ?tickSeasons\@TickingArea\@\@UEAAXAEAVRandom\@\@\@Z
     */
    virtual void tickSeasons(class Random&) = 0;
    /**
     * @vftbl 18
     * @symbol ?updatePosition\@TickingArea\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void updatePosition(class Vec3 const&) = 0;
    /**
     * @vftbl 19
     * @symbol ?updateAndCenter\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@UTick\@\@\@Z
     */
    virtual void updateAndCenter(class LevelStorage&, struct Tick) = 0;
    /**
     * @vftbl 20
     * @symbol ?findOwner\@TickingArea\@\@UEAAPEAVActor\@\@AEAE\@Z
     */
    virtual class Actor* findOwner(unsigned char&) = 0;
    /**
     * @vftbl 21
     * @symbol ?entityHasBeenFound\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool entityHasBeenFound() const = 0;
    /**
     * @vftbl 22
     * @symbol ?setEntityFound\@TickingArea\@\@UEAAXXZ
     */
    virtual void setEntityFound() = 0;
    /**
     * @vftbl 23
     * @symbol ?isRemoved\@TickingArea\@\@UEAA_NXZ
     */
    virtual bool isRemoved() = 0;
    /**
     * @vftbl 24
     * @symbol ?remove\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@\@Z
     */
    virtual void remove(class LevelStorage&) = 0;
    /**
     * @vftbl 25
     * @symbol ?onComponentChanged\@TickingArea\@\@UEAAXIM_NAEAVLevelStorage\@\@\@Z
     */
    virtual void onComponentChanged(unsigned int, float, bool, class LevelStorage&) = 0;
    /**
     * @vftbl 26
     * @symbol ?updateBlockSourceCurrentTick\@TickingArea\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void updateBlockSourceCurrentTick(struct Tick const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGAREA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ITickingArea();
#endif
    /**
     * @symbol ?serialize\@ITickingArea\@\@QEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const;
    // NOLINTEND
};
