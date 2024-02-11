#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/PostProcessSettings.h"
#include "mc/enums/Projection.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

class FeaturePoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    FeaturePoolElement& operator=(FeaturePoolElement const&);
    FeaturePoolElement(FeaturePoolElement const&);
    FeaturePoolElement();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getSize@FeaturePoolElement@@UEBA?AVBlockPos@@W4Rotation@@@Z
    virtual class BlockPos getSize(::Rotation rotation) const;

    // vIndex: 2, symbol:
    // ?getJigsawMarkers@FeaturePoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@AEAVLegacyStructureSettings@@PEAVBlockSource@@@Z
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region) const;

    // vIndex: 7, symbol:
    // ?place@FeaturePoolElement@@UEBA_NAEAVBlockSource@@VBlockPos@@W4Rotation@@VBoundingBox@@AEAVRandom@@AEAV?$unordered_map@VBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@@std@@@3@@std@@1@Z
    virtual bool place(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    // vIndex: 12, symbol: __gen_??1FeaturePoolElement@@UEAA@XZ
    virtual ~FeaturePoolElement() = default;

    // vIndex: 13, symbol: ?type@FeaturePoolElement@@UEBA?AW4StructurePoolElementType@@XZ
    virtual ::StructurePoolElementType type() const;

    // symbol:
    // ??0FeaturePoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@V?$WeakRef@VIFeature@@@@@Z
    MCAPI FeaturePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class WeakRef<class IFeature>                       feature
    );

    // NOLINTEND
};
