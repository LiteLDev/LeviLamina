#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class PillagerOutpostPieces {
public:
    // PillagerOutpostPieces inner types declare
    // clang-format off
    class PillagerOutpostPiece;
    // clang-format on

    // PillagerOutpostPieces inner types define
    class PillagerOutpostPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        PillagerOutpostPiece& operator=(PillagerOutpostPiece const&);
        PillagerOutpostPiece(PillagerOutpostPiece const&);
        PillagerOutpostPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~PillagerOutpostPiece() = default;

        // vIndex: 4
        virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

        // vIndex: 5
        virtual void
        postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

        // vIndex: 12
        virtual void addHardcodedSpawnAreas(class LevelChunk& chunk) const;

        // vIndex: 13
        virtual void _handleDataMarker(
            std::string const&       markerId,
            class BlockPos const&    position,
            class BlockSource&       region,
            class Random&            random,
            class BoundingBox const& chunkBB
        );

        MCAPI PillagerOutpostPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string                                         templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            float                                               integrity,
            bool                                                isSatellite,
            class Dimension&                                    dimension
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _addMobsFromPositions(
            class BoundingBox const&                chunkBB,
            struct ActorDefinitionIdentifier const& definition,
            class BlockSource&                      region,
            std::vector<class BlockPos> const&      entityPositions
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PillagerOutpostPieces& operator=(PillagerOutpostPieces const&);
    PillagerOutpostPieces(PillagerOutpostPieces const&);
    PillagerOutpostPieces();

    // private:
    // NOLINTBEGIN
    MCAPI static void _addPiece(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        class Dimension&                                    dimension
    );

    MCAPI static void _addScatteredPieces(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class Random&                                       random,
        ::Rotation const&                                   rotation,
        class BlockPos const&                               parentPos,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Dimension&                                    dimension
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<std::string_view, 7> MSC_FEATURES;

    MCAPI static std::string_view PILLAGER_LOOT;

    MCAPI static std::string_view STRUCTURE_WATCHTOWER;

    MCAPI static std::string_view STRUCTURE_WATCHTOWER_OVERGROWN;

    // NOLINTEND
};
