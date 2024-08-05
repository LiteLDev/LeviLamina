#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class EndCityPieces {
public:
    // EndCityPieces inner types declare
    // clang-format off
    class EndCityPiece;
    class SectionGenerator;
    class FatTowerGenerator;
    class HouseTowerGenerator;
    class TowerBridgeGenerator;
    class TowerGenerator;
    // clang-format on

    // EndCityPieces inner types define
    enum class SectionType {};

    class EndCityPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        EndCityPiece& operator=(EndCityPiece const&);
        EndCityPiece(EndCityPiece const&);
        EndCityPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~EndCityPiece() = default;

        // vIndex: 2
        virtual ::StructurePieceType getType() const;

        // vIndex: 5
        virtual void
        postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

        // vIndex: 13
        virtual void _handleDataMarker(
            std::string const&       markerId,
            class BlockPos const&    position,
            class BlockSource&       region,
            class Random&            random,
            class BoundingBox const& chunkBB
        );

        MCAPI EndCityPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string                                         templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            bool                                                overwrite
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _loadAndSetup(class BlockPos const& position);

        // NOLINTEND
    };

    class SectionGenerator {
    public:
        // prevent constructor by default
        SectionGenerator& operator=(SectionGenerator const&);
        SectionGenerator(SectionGenerator const&);
        SectionGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
            std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            class EndCityPieces::EndCityPiece*                                         parent,
            class BlockPos const&                                                      offset,
            std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
            class Random&                                                              random
        ) = 0;

        // vIndex: 1
        virtual ~SectionGenerator() = default;

        // NOLINTEND
    };

    class FatTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        FatTowerGenerator& operator=(FatTowerGenerator const&);
        FatTowerGenerator(FatTowerGenerator const&);
        FatTowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
            std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            class EndCityPieces::EndCityPiece*                                         parent,
            class BlockPos const&                                                      offset,
            std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
            class Random&                                                              random
        );

        // vIndex: 1
        virtual ~FatTowerGenerator() = default;

        // NOLINTEND
    };

    class HouseTowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        HouseTowerGenerator& operator=(HouseTowerGenerator const&);
        HouseTowerGenerator(HouseTowerGenerator const&);
        HouseTowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
            std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            class EndCityPieces::EndCityPiece*                                         parent,
            class BlockPos const&                                                      offset,
            std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
            class Random&                                                              random
        );

        // vIndex: 1
        virtual ~HouseTowerGenerator() = default;

        // NOLINTEND
    };

    class TowerBridgeGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        TowerBridgeGenerator& operator=(TowerBridgeGenerator const&);
        TowerBridgeGenerator(TowerBridgeGenerator const&);
        TowerBridgeGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
            std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            class EndCityPieces::EndCityPiece*                                         parent,
            class BlockPos const&                                                      offset,
            std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
            class Random&                                                              random
        );

        // vIndex: 1
        virtual ~TowerBridgeGenerator() = default;

        // NOLINTEND
    };

    class TowerGenerator : public ::EndCityPieces::SectionGenerator {
    public:
        // prevent constructor by default
        TowerGenerator& operator=(TowerGenerator const&);
        TowerGenerator(TowerGenerator const&);
        TowerGenerator();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool generate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
            std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
            int                                                                        genDepth,
            class EndCityPieces::EndCityPiece*                                         parent,
            class BlockPos const&                                                      offset,
            std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
            class Random&                                                              random
        );

        // vIndex: 1
        virtual ~TowerGenerator() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EndCityPieces& operator=(EndCityPieces const&);
    EndCityPieces(EndCityPieces const&);
    EndCityPieces();

public:
    // NOLINTBEGIN
    MCAPI static void startHouseTower(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class BlockPos const&                               origin,
        ::Rotation                                          rotation,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class EndCityPieces::EndCityPiece* _addHelper(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        std::unique_ptr<class EndCityPieces::EndCityPiece>  piece
    );

    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class EndCityPieces::EndCityPiece*                  parent,
        class BlockPos const&                               offset,
        std::string const&                                  templateName,
        ::Rotation                                          rotation,
        bool                                                overwrite
    );

    MCAPI static bool _recursiveChildren(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>                        structureManager,
        std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const& generators,
        ::EndCityPieces::SectionType                                               type,
        int                                                                        newGenDepth,
        class EndCityPieces::EndCityPiece*                                         parent,
        class BlockPos const&                                                      offset,
        std::vector<std::unique_ptr<class StructurePiece>>&                        pieces,
        class Random&                                                              random
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class LegacyStructureSettings mInsertSettings;

    MCAPI static class LegacyStructureSettings mOverwriteSettings;

    // NOLINTEND
};
