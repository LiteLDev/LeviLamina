#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/OceanTempCategory.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class OceanRuinPieces {
public:
    // OceanRuinPieces inner types declare
    // clang-format off
    class OceanRuinPiece;
    // clang-format on

    // OceanRuinPieces inner types define
    class OceanRuinPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        OceanRuinPiece& operator=(OceanRuinPiece const&);
        OceanRuinPiece(OceanRuinPiece const&);
        OceanRuinPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~OceanRuinPiece() = default;

        // vIndex: 2
        virtual ::StructurePieceType getType() const;

        // vIndex: 4
        virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

        // vIndex: 13
        virtual void _handleDataMarker(
            std::string const&       markerId,
            class BlockPos const&    position,
            class BlockSource&       region,
            class Random&            random,
            class BoundingBox const& chunkBB
        );

        MCAPI OceanRuinPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string                                         templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            float                                               integrity,
            bool                                                isLarge,
            ::OceanTempCategory                                 type
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OceanRuinPieces& operator=(OceanRuinPieces const&);
    OceanRuinPieces(OceanRuinPieces const&);
    OceanRuinPieces();

public:
    // NOLINTBEGIN
    MCAPI static void addPieces(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        struct OceanRuinConfiguration const&                configuration
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _addClusterRuins(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class Random&                                       random,
        ::Rotation const&                                   rotation,
        class BlockPos const&                               parentPos,
        struct OceanRuinConfiguration const&                configuration,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces
    );

    MCAPI static void _addPiece(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class BlockPos const&                               position,
        ::Rotation const&                                   rotation,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        struct OceanRuinConfiguration const&                configuration,
        bool                                                isLarge,
        float                                               baseIntegrity
    );

    MCAPI static std::vector<class BlockPos> _allPositions(class Random& random, int cornerX, int cornerY, int cornerZ);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string_view BIG_RUIN_LOOT;

    MCAPI static std::string_view RUIN_LOOT;

    MCAPI static std::string_view STRUCTURE_BIG_RUIN1_BRICK;

    MCAPI static std::string_view STRUCTURE_BIG_RUIN8_BRICK;

    MCAPI static std::string_view STRUCTURE_RUIN_2_BRICK;

    MCAPI static std::string_view STRUCTURE_RUIN_3_BRICK;

    MCAPI static std::string_view bigRuinsBrick[];

    MCAPI static std::string_view bigRuinsCracked[];

    MCAPI static std::string_view bigRuinsMossy[];

    MCAPI static std::string_view bigWarmRuins[];

    MCAPI static class LegacyStructureSettings mSettings;

    MCAPI static std::string_view ruinsBrick[];

    MCAPI static std::string_view ruinsCracked[];

    MCAPI static std::string_view ruinsMossy[];

    MCAPI static std::string_view warmRuins[];

    // NOLINTEND
};
