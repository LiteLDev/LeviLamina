#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class WorldChangeTransaction;

class Feature : public ::IFeature {
public:
    int                     unk;
    ActorUniqueID           mPlacerID;    // this+0x8
    WorldChangeTransaction* mTransaction; // this+0x10

    // prevent constructor by default
    Feature& operator=(Feature const&);
    Feature(Feature const&);
    Feature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Feature@@UEAA@XZ
    virtual ~Feature();

    // vIndex: 1, symbol:
    // ?place@Feature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // vIndex: 3, symbol: ?place@LegacyEmeraldOreFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const = 0;

    // symbol: ??0Feature@@QEAA@PEAVActor@@@Z
    MCAPI explicit Feature(class Actor*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_placeBlock@Feature@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool _placeBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol: ?_setManuallyPlaced@Feature@@IEAAXPEAVActor@@@Z
    MCAPI void _setManuallyPlaced(class Actor*);

    // NOLINTEND
};
