#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class TickingArea {

public:
    // prevent constructor by default
    TickingArea& operator=(TickingArea const&) = delete;
    TickingArea(TickingArea const&)            = delete;
    TickingArea()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@TickingArea\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const& getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@TickingArea\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getEntityId\@TickingArea\@\@UEBAAEBUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID const& getEntityId() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isEntityOwned\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isEntityOwned() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getBounds\@TickingArea\@\@UEBAAEBUBounds\@\@XZ
     */
    virtual struct Bounds const& getBounds() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?isAlwaysActive\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isAlwaysActive() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getMaxDistToPlayers\@TickingArea\@\@UEBAMXZ
     */
    virtual float getMaxDistToPlayers() const; // NOLINT
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
     * @symbol ?getDescription\@TickingArea\@\@UEBA?AUTickingAreaDescription\@\@XZ
     */
    virtual struct TickingAreaDescription getDescription() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?getLoadMode\@TickingArea\@\@UEBA?AW4TickingAreaLoadMode\@\@XZ
     */
    virtual enum class TickingAreaLoadMode getLoadMode() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?setLoadMode\@TickingArea\@\@UEAAXW4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    virtual void setLoadMode(enum class TickingAreaLoadMode, class LevelStorage&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?isPreloadDone\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool isPreloadDone() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?tick\@TickingArea\@\@UEAAXAEBUTick\@\@_N\@Z
     */
    virtual void tick(struct Tick const&, bool); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?tickSeasons\@TickingArea\@\@UEAAXAEAVRandom\@\@\@Z
     */
    virtual void tickSeasons(class Random&); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?updatePosition\@TickingArea\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void updatePosition(class Vec3 const&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?updateAndCenter\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@UTick\@\@\@Z
     */
    virtual void updateAndCenter(class LevelStorage&, struct Tick); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?findOwner\@TickingArea\@\@UEAAPEAVActor\@\@AEAE\@Z
     */
    virtual class Actor* findOwner(unsigned char&); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?entityHasBeenFound\@TickingArea\@\@UEBA_NXZ
     */
    virtual bool entityHasBeenFound() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?setEntityFound\@TickingArea\@\@UEAAXXZ
     */
    virtual void setEntityFound(); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?isRemoved\@TickingArea\@\@UEAA_NXZ
     */
    virtual bool isRemoved(); // NOLINT
    /**
     * @vftbl 24
     * @symbol ?remove\@TickingArea\@\@UEAAXAEAVLevelStorage\@\@\@Z
     */
    virtual void remove(class LevelStorage&); // NOLINT
    /**
     * @vftbl 25
     * @symbol ?onComponentChanged\@TickingArea\@\@UEAAXIM_NAEAVLevelStorage\@\@\@Z
     */
    virtual void onComponentChanged(unsigned int, float, bool, class LevelStorage&); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?updateBlockSourceCurrentTick\@TickingArea\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void updateBlockSourceCurrentTick(struct Tick const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREA
    /**
     * @symbol ?getBlockSource\@TickingArea\@\@UEBA?BV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> const getBlockSource() const; // NOLINT
    /**
     * @symbol ?getBlockSource\@TickingArea\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource(); // NOLINT
    /**
     * @symbol ?getView\@TickingArea\@\@UEAAAEAVITickingAreaView\@\@XZ
     */
    MCVAPI class ITickingAreaView& getView(); // NOLINT
    /**
     * @symbol ?getView\@TickingArea\@\@UEBAAEBVITickingAreaView\@\@XZ
     */
    MCVAPI class ITickingAreaView const& getView() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickingArea(); // NOLINT
#endif
    /**
     * @symbol ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBUBounds\@\@UActorUniqueID\@\@M\@Z
     */
    MCAPI TickingArea(class Dimension&, class mce::UUID, struct Bounds const&, struct ActorUniqueID, float); // NOLINT
    /**
     * @symbol
     * ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUBounds\@\@_NW4TickingAreaLoadMode\@\@\@Z
     */
    MCAPI TickingArea(
        class Dimension&,
        class mce::UUID,
        std::string const&,
        struct Bounds const&,
        bool,
        enum class TickingAreaLoadMode
    ); // NOLINT
    /**
     * @symbol ??0TickingArea\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBUBounds\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI TickingArea(class Dimension&, class mce::UUID, struct Bounds const&, struct ActorUniqueID); // NOLINT

    // private:
    /**
     * @symbol
     * ??0TickingArea\@\@AEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@AEBUBounds\@\@_NM5W4TickingAreaLoadMode\@\@\@Z
     */
    MCAPI TickingArea(
        class Dimension&,
        class mce::UUID,
        std::string const&,
        struct ActorUniqueID,
        struct Bounds const&,
        bool,
        float,
        bool,
        enum class TickingAreaLoadMode
    ); // NOLINT
    /**
     * @symbol ?_center\@TickingArea\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _center(class LevelStorage&); // NOLINT
    /**
     * @symbol ?_save\@TickingArea\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _save(class LevelStorage&); // NOLINT

private:
};
