#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/PostProcessSettings.h"
#include "mc/enums/Projection.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    EmptyPoolElement& operator=(EmptyPoolElement const&);
    EmptyPoolElement(EmptyPoolElement const&);
    EmptyPoolElement();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getSize@EmptyPoolElement@@UEBA?AVBlockPos@@W4Rotation@@@Z
    virtual class BlockPos getSize(::Rotation) const;

    // vIndex: 1, symbol:
    // ?getJigsawMarkers@EmptyPoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@W4Rotation@@@Z
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, ::Rotation) const;

    // vIndex: 2, symbol:
    // ?getJigsawMarkers@EmptyPoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@AEAVLegacyStructureSettings@@PEAVBlockSource@@@Z
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;

    // vIndex: 3, symbol: ?getBoundingBox@EmptyPoolElement@@UEBA?AVBoundingBox@@VBlockPos@@W4Rotation@@@Z
    virtual class BoundingBox getBoundingBox(class BlockPos, ::Rotation) const;

    // vIndex: 11, symbol: ?isValid@EmptyPoolElement@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 12, symbol: __gen_??1EmptyPoolElement@@UEAA@XZ
    virtual ~EmptyPoolElement() = default;

    // vIndex: 13, symbol: ?type@EmptyPoolElement@@UEBA?AW4StructurePoolElementType@@XZ
    virtual ::StructurePoolElementType type() const;

    // symbol: ??0EmptyPoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@@Z
    MCAPI explicit EmptyPoolElement(Bedrock::NotNullNonOwnerPtr<class StructureManager>);

    // NOLINTEND
};
