#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
#include "mc/enums/TickingAreaLoadMode.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ITickingArea {
public:
    // prevent constructor by default
    ITickingArea& operator=(ITickingArea const&);
    ITickingArea(ITickingArea const&);
    ITickingArea();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ITickingArea@@UEAA@XZ
    virtual ~ITickingArea();

    // vIndex: 1, symbol: ?getId@TickingArea@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const = 0;

    // vIndex: 2, symbol: ?getName@TickingArea@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const = 0;

    // vIndex: 3, symbol: ?getEntityId@TickingArea@@UEBAAEBUActorUniqueID@@XZ
    virtual struct ActorUniqueID const& getEntityId() const = 0;

    // vIndex: 4, symbol: ?isEntityOwned@TickingArea@@UEBA_NXZ
    virtual bool isEntityOwned() const = 0;

    // vIndex: 5, symbol: ?getBlockSource@TickingArea@@UEBA?BV?$WeakRef@VBlockSource@@@@XZ
    virtual class WeakRef<class BlockSource> const getBlockSource() const = 0;

    // vIndex: 6, symbol: ?getBlockSource@TickingArea@@UEAA?AV?$WeakRef@VBlockSource@@@@XZ
    virtual class WeakRef<class BlockSource> getBlockSource() = 0;

    // vIndex: 7, symbol: ?getBounds@TickingArea@@UEBAAEBUBounds@@XZ
    virtual struct Bounds const& getBounds() const = 0;

    // vIndex: 8, symbol: ?isAlwaysActive@TickingArea@@UEBA_NXZ
    virtual bool isAlwaysActive() const = 0;

    // vIndex: 9, symbol: ?getMaxDistToPlayers@TickingArea@@UEBAMXZ
    virtual float getMaxDistToPlayers() const = 0;

    // vIndex: 10, symbol: ?getView@TickingArea@@UEBAAEBVITickingAreaView@@XZ
    virtual class ITickingAreaView const& getView() const = 0;

    // vIndex: 11, symbol: ?getView@TickingArea@@UEAAAEAVITickingAreaView@@XZ
    virtual class ITickingAreaView& getView() = 0;

    // vIndex: 12, symbol: ?getDescription@TickingArea@@UEBA?AUTickingAreaDescription@@XZ
    virtual struct TickingAreaDescription getDescription() const = 0;

    // vIndex: 13, symbol: ?getLoadMode@TickingArea@@UEBA?AW4TickingAreaLoadMode@@XZ
    virtual ::TickingAreaLoadMode getLoadMode() const = 0;

    // vIndex: 14, symbol: ?setLoadMode@TickingArea@@UEAAXW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, class LevelStorage& levelStorage) = 0;

    // vIndex: 15, symbol: ?isPreloadDone@TickingArea@@UEBA_NXZ
    virtual bool isPreloadDone() const = 0;

    // vIndex: 16, symbol: ?tick@TickingArea@@UEAAXAEBUTick@@_N@Z
    virtual void tick(struct Tick const& currentTick, bool randomize) = 0;

    // vIndex: 17, symbol: ?tickSeasons@TickingArea@@UEAAXAEAVRandom@@@Z
    virtual void tickSeasons(class Random& random) = 0;

    // vIndex: 18, symbol: ?updatePosition@TickingArea@@UEAAXAEBVVec3@@@Z
    virtual void updatePosition(class Vec3 const& pos) = 0;

    // vIndex: 19, symbol: ?updateAndCenter@TickingArea@@UEAAXAEAVLevelStorage@@UTick@@@Z
    virtual void updateAndCenter(class LevelStorage& levelStorage, struct Tick currentLevelTick) = 0;

    // vIndex: 20, symbol: ?findOwner@TickingArea@@UEAAPEAVActor@@AEAE@Z
    virtual class Actor* findOwner(uchar& pendingChunks) = 0;

    // vIndex: 21, symbol: ?entityHasBeenFound@TickingArea@@UEBA_NXZ
    virtual bool entityHasBeenFound() const = 0;

    // vIndex: 22, symbol: ?setEntityFound@TickingArea@@UEAAXXZ
    virtual void setEntityFound() = 0;

    // vIndex: 23, symbol: ?isRemoved@TickingArea@@UEAA_NXZ
    virtual bool isRemoved() = 0;

    // vIndex: 24, symbol: ?remove@TickingArea@@UEAAXAEAVLevelStorage@@@Z
    virtual void remove(class LevelStorage& levelStorage) = 0;

    // vIndex: 25, symbol: ?onComponentChanged@TickingArea@@UEAAXIM_NAEAVLevelStorage@@@Z
    virtual void
    onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, class LevelStorage& levelStorage) = 0;

    // vIndex: 26, symbol: ?updateBlockSourceCurrentTick@TickingArea@@UEAAXAEBUTick@@@Z
    virtual void updateBlockSourceCurrentTick(struct Tick const& currentTick) = 0;

    // symbol: ?serialize@ITickingArea@@QEBA?AVCompoundTag@@XZ
    MCAPI class CompoundTag serialize() const;

    // NOLINTEND
};
