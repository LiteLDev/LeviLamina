#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
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
    // vIndex: 0, symbol: ??1TickingArea@@UEAA@XZ
    virtual ~TickingArea();

    // vIndex: 1, symbol: ?getId@TickingArea@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // vIndex: 2, symbol: ?getName@TickingArea@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?getEntityId@TickingArea@@UEBAAEBUActorUniqueID@@XZ
    virtual struct ActorUniqueID const& getEntityId() const;

    // vIndex: 4, symbol: ?isEntityOwned@TickingArea@@UEBA_NXZ
    virtual bool isEntityOwned() const;

    // vIndex: 5, symbol: ?getBlockSource@TickingArea@@UEBA?BV?$WeakRef@VBlockSource@@@@XZ
    virtual class WeakRef<class BlockSource> const getBlockSource() const;

    // vIndex: 6, symbol: ?getBlockSource@TickingArea@@UEAA?AV?$WeakRef@VBlockSource@@@@XZ
    virtual class WeakRef<class BlockSource> getBlockSource();

    // vIndex: 7, symbol: ?getBounds@TickingArea@@UEBAAEBUBounds@@XZ
    virtual struct Bounds const& getBounds() const;

    // vIndex: 8, symbol: ?isAlwaysActive@TickingArea@@UEBA_NXZ
    virtual bool isAlwaysActive() const;

    // vIndex: 9, symbol: ?getMaxDistToPlayers@TickingArea@@UEBAMXZ
    virtual float getMaxDistToPlayers() const;

    // vIndex: 10, symbol: ?getView@TickingArea@@UEBAAEBVITickingAreaView@@XZ
    virtual class ITickingAreaView const& getView() const;

    // vIndex: 11, symbol: ?getView@TickingArea@@UEAAAEAVITickingAreaView@@XZ
    virtual class ITickingAreaView& getView();

    // vIndex: 12, symbol: ?getDescription@TickingArea@@UEBA?AUTickingAreaDescription@@XZ
    virtual struct TickingAreaDescription getDescription() const;

    // vIndex: 13, symbol: ?getLoadMode@TickingArea@@UEBA?AW4TickingAreaLoadMode@@XZ
    virtual ::TickingAreaLoadMode getLoadMode() const;

    // vIndex: 14, symbol: ?setLoadMode@TickingArea@@UEAAXW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    virtual void setLoadMode(::TickingAreaLoadMode loadMode, class LevelStorage& levelStorage);

    // vIndex: 15, symbol: ?isPreloadDone@TickingArea@@UEBA_NXZ
    virtual bool isPreloadDone() const;

    // vIndex: 16, symbol: ?tick@TickingArea@@UEAAXAEBUTick@@_N@Z
    virtual void tick(struct Tick const& currentTick, bool randomize);

    // vIndex: 17, symbol: ?tickSeasons@TickingArea@@UEAAXAEAVRandom@@@Z
    virtual void tickSeasons(class Random& random);

    // vIndex: 18, symbol: ?updatePosition@TickingArea@@UEAAXAEBVVec3@@@Z
    virtual void updatePosition(class Vec3 const& pos);

    // vIndex: 19, symbol: ?updateAndCenter@TickingArea@@UEAAXAEAVLevelStorage@@UTick@@@Z
    virtual void updateAndCenter(class LevelStorage& levelStorage, struct Tick currentLevelTick);

    // vIndex: 20, symbol: ?findOwner@TickingArea@@UEAAPEAVActor@@AEAE@Z
    virtual class Actor* findOwner(uchar& pendingChunks);

    // vIndex: 21, symbol: ?entityHasBeenFound@TickingArea@@UEBA_NXZ
    virtual bool entityHasBeenFound() const;

    // vIndex: 22, symbol: ?setEntityFound@TickingArea@@UEAAXXZ
    virtual void setEntityFound();

    // vIndex: 23, symbol: ?isRemoved@TickingArea@@UEAA_NXZ
    virtual bool isRemoved();

    // vIndex: 24, symbol: ?remove@TickingArea@@UEAAXAEAVLevelStorage@@@Z
    virtual void remove(class LevelStorage& levelStorage);

    // vIndex: 25, symbol: ?onComponentChanged@TickingArea@@UEAAXIM_NAEAVLevelStorage@@@Z
    virtual void
    onComponentChanged(uint radius, float maxDistToPlayers, bool alwaysActive, class LevelStorage& levelStorage);

    // vIndex: 26, symbol: ?updateBlockSourceCurrentTick@TickingArea@@UEAAXAEBUTick@@@Z
    virtual void updateBlockSourceCurrentTick(struct Tick const& currentTick);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0TickingArea@@AEAA@AEAVDimension@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@AEBUBounds@@_NM5W4TickingAreaLoadMode@@@Z
    MCAPI TickingArea(
        class Dimension&      dimension,
        class mce::UUID       uniqueId,
        std::string const&    name,
        struct ActorUniqueID  entityId,
        struct Bounds const&  bounds,
        bool                  isCircle,
        float                 maxDistToPlayers,
        bool                  alwaysActive,
        ::TickingAreaLoadMode loadMode
    );

    // symbol: ?_center@TickingArea@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _center(class LevelStorage& levelStorage);

    // symbol: ?_save@TickingArea@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _save(class LevelStorage& levelStorage);

    // NOLINTEND
};
