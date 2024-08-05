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
    // vIndex: 0
    virtual class BlockPos getSize(::Rotation rotation) const;

    // vIndex: 2
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region) const;

    // vIndex: 7
    virtual bool place(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    // vIndex: 12
    virtual ~FeaturePoolElement() = default;

    // vIndex: 13
    virtual ::StructurePoolElementType type() const;

    MCAPI FeaturePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class WeakRef<class IFeature>                       feature
    );

    // NOLINTEND
};
