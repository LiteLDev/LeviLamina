#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftRoom : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftRoom& operator=(MineshaftRoom const&);
    MineshaftRoom(MineshaftRoom const&);
    MineshaftRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MineshaftRoom() = default;

    // vIndex: 1, symbol: ?moveBoundingBox@MineshaftRoom@@UEAAXHHH@Z
    virtual void moveBoundingBox(int, int, int);

    // vIndex: 2, symbol: ?getType@MineshaftRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@MineshaftRoom@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // vIndex: 4, symbol: ?postProcess@MineshaftRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ??0MineshaftRoom@@QEAA@AEAUMineshaftData@@HAEAVRandom@@HH@Z
    MCAPI MineshaftRoom(struct MineshaftData&, int, class Random&, int, int);

    // NOLINTEND
};
