#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/enums/TickingAreaLoadMode.h"
#include "mc/world/level/ticking/ITickingArea.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class TickingArea : public ::ITickingArea {
public:
    // prevent constructor by default
    TickingArea& operator=(TickingArea const&);
    TickingArea(TickingArea const&);
    TickingArea();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@TickingArea@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // vIndex: 2, symbol: ?getName@TickingArea@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?getEntityId@TickingArea@@UEBAAEBUActorUniqueID@@XZ
    virtual struct ActorUniqueID const& getEntityId() const;

    // vIndex: 4, symbol: ?isEntityOwned@TickingArea@@UEBA_NXZ
    virtual bool isEntityOwned() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getBounds@TickingArea@@UEBAAEBUBounds@@XZ
    virtual struct Bounds const& getBounds() const;

    // vIndex: 8, symbol: ?isAlwaysActive@TickingArea@@UEBA_NXZ
    virtual bool isAlwaysActive() const;

    // vIndex: 9, symbol: ?getMaxDistToPlayers@TickingArea@@UEBAMXZ
    virtual float getMaxDistToPlayers() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?getDescription@TickingArea@@UEBA?AUTickingAreaDescription@@XZ
    virtual struct TickingAreaDescription getDescription() const;

    // vIndex: 13, symbol: ?getLoadMode@TickingArea@@UEBA?AW4TickingAreaLoadMode@@XZ
    virtual ::TickingAreaLoadMode getLoadMode() const;

    // vIndex: 14, symbol: ?setLoadMode@TickingArea@@UEAAXW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    virtual void setLoadMode(::TickingAreaLoadMode, class LevelStorage&);

    // vIndex: 15, symbol: ?isPreloadDone@TickingArea@@UEBA_NXZ
    virtual bool isPreloadDone() const;

    // vIndex: 16, symbol: ?tick@TickingArea@@UEAAXAEBUTick@@_N@Z
    virtual void tick(struct Tick const&, bool);

    // vIndex: 17, symbol: ?tickSeasons@TickingArea@@UEAAXAEAVRandom@@@Z
    virtual void tickSeasons(class Random&);

    // vIndex: 18, symbol: ?updatePosition@TickingArea@@UEAAXAEBVVec3@@@Z
    virtual void updatePosition(class Vec3 const&);

    // vIndex: 19, symbol: ?updateAndCenter@TickingArea@@UEAAXAEAVLevelStorage@@UTick@@@Z
    virtual void updateAndCenter(class LevelStorage&, struct Tick);

    // vIndex: 20, symbol: ?findOwner@TickingArea@@UEAAPEAVActor@@AEAE@Z
    virtual class Actor* findOwner(uchar&);

    // vIndex: 21, symbol: ?entityHasBeenFound@TickingArea@@UEBA_NXZ
    virtual bool entityHasBeenFound() const;

    // vIndex: 22, symbol: ?setEntityFound@TickingArea@@UEAAXXZ
    virtual void setEntityFound();

    // vIndex: 23, symbol: ?isRemoved@TickingArea@@UEAA_NXZ
    virtual bool isRemoved();

    // vIndex: 24, symbol: ?remove@TickingArea@@UEAAXAEAVLevelStorage@@@Z
    virtual void remove(class LevelStorage&);

    // vIndex: 25, symbol: ?onComponentChanged@TickingArea@@UEAAXIM_NAEAVLevelStorage@@@Z
    virtual void onComponentChanged(uint, float, bool, class LevelStorage&);

    // vIndex: 26, symbol: ?updateBlockSourceCurrentTick@TickingArea@@UEAAXAEBUTick@@@Z
    virtual void updateBlockSourceCurrentTick(struct Tick const&);

    // symbol: ?getBlockSource@TickingArea@@UEBA?BV?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> const getBlockSource() const;

    // symbol: ?getBlockSource@TickingArea@@UEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource();

    // symbol: ?getView@TickingArea@@UEAAAEAVITickingAreaView@@XZ
    MCVAPI class ITickingAreaView& getView();

    // symbol: ?getView@TickingArea@@UEBAAEBVITickingAreaView@@XZ
    MCVAPI class ITickingAreaView const& getView() const;

    // symbol: ??1TickingArea@@UEAA@XZ
    MCVAPI ~TickingArea();

    // symbol: ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBUBounds@@UActorUniqueID@@M@Z
    MCAPI TickingArea(class Dimension&, class mce::UUID, struct Bounds const&, struct ActorUniqueID, float);

    // symbol:
    // ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUBounds@@_NW4TickingAreaLoadMode@@@Z
    MCAPI TickingArea(
        class Dimension&,
        class mce::UUID,
        std::string const&,
        struct Bounds const&,
        bool,
        ::TickingAreaLoadMode
    );

    // symbol: ??0TickingArea@@QEAA@AEAVDimension@@VUUID@mce@@AEBUBounds@@UActorUniqueID@@@Z
    MCAPI TickingArea(class Dimension&, class mce::UUID, struct Bounds const&, struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0TickingArea@@AEAA@AEAVDimension@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@AEBUBounds@@_NM5W4TickingAreaLoadMode@@@Z
    MCAPI TickingArea(
        class Dimension&,
        class mce::UUID,
        std::string const&,
        struct ActorUniqueID,
        struct Bounds const&,
        bool,
        float,
        bool,
        ::TickingAreaLoadMode
    );

    // symbol: ?_center@TickingArea@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _center(class LevelStorage&);

    // symbol: ?_save@TickingArea@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _save(class LevelStorage&);

    // NOLINTEND
};
