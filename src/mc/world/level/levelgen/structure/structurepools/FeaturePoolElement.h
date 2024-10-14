#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::vector<class JigsawBlockInfo>
          getJigsawMarkers$(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region)
        const;

    MCAPI class BlockPos getSize$(::Rotation rotation) const;

    MCAPI bool place$(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    MCAPI ::StructurePoolElementType type$() const;

    // NOLINTEND
};
