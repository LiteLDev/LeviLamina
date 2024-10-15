#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

class WoodlandMansionPieces {
public:
    // WoodlandMansionPieces inner types declare
    // clang-format off
    class FloorRoomCollection;
    class FirstFloorRoomCollection;
    class MansionGrid;
    struct PlacementData;
    class SecondFloorRoomCollection;
    class SimpleGrid;
    class MansionPiecePlacer;
    class ThirdFloorRoomCollection;
    class WoodlandMansionPiece;
    // clang-format on

    // WoodlandMansionPieces inner types define
    class FloorRoomCollection {
    public:
        // prevent constructor by default
        FloorRoomCollection& operator=(FloorRoomCollection const&);
        FloorRoomCollection(FloorRoomCollection const&);
        FloorRoomCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FloorRoomCollection() = default;

        // vIndex: 1
        virtual std::string get1x1(class Random& random) = 0;

        // vIndex: 2
        virtual std::string get1x1Secret(class Random& random) = 0;

        // vIndex: 3
        virtual std::string get1x2SideEntrance(class Random& random, bool isStairsRoom) = 0;

        // vIndex: 4
        virtual std::string get1x2FrontEntrance(class Random& random, bool isStairsRoom) = 0;

        // vIndex: 5
        virtual std::string get1x2Secret(class Random& random) = 0;

        // vIndex: 6
        virtual std::string get2x2(class Random& random) = 0;

        // vIndex: 7
        virtual std::string get2x2Secret(class Random& random) = 0;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        // NOLINTEND
    };

    class FirstFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // prevent constructor by default
        FirstFloorRoomCollection& operator=(FirstFloorRoomCollection const&);
        FirstFloorRoomCollection(FirstFloorRoomCollection const&);
        FirstFloorRoomCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FirstFloorRoomCollection() = default;

        // vIndex: 1
        virtual std::string get1x1(class Random& random);

        // vIndex: 2
        virtual std::string get1x1Secret(class Random& random);

        // vIndex: 3
        virtual std::string get1x2SideEntrance(class Random& random, bool isStairsRoom);

        // vIndex: 4
        virtual std::string get1x2FrontEntrance(class Random& random, bool isStairsRoom);

        // vIndex: 5
        virtual std::string get1x2Secret(class Random& random);

        // vIndex: 6
        virtual std::string get2x2(class Random& random);

        // vIndex: 7
        virtual std::string get2x2Secret(class Random& random);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI std::string get1x1$(class Random& random);

        MCAPI std::string get1x1Secret$(class Random& random);

        MCAPI std::string get1x2FrontEntrance$(class Random& random, bool isStairsRoom);

        MCAPI std::string get1x2Secret$(class Random& random);

        MCAPI std::string get1x2SideEntrance$(class Random& random, bool isStairsRoom);

        MCAPI std::string get2x2$(class Random& random);

        MCAPI std::string get2x2Secret$(class Random& random);

        // NOLINTEND
    };

    class MansionGrid {
    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&);
        MansionGrid(MansionGrid const&);
        MansionGrid();

    public:
        // NOLINTBEGIN
        MCAPI explicit MansionGrid(class Random& random);

        MCAPI uchar
        get1x2RoomDirection(class WoodlandMansionPieces::SimpleGrid const& grid, int x, int y, int floorNum, int roomId)
            const;

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI bool _cleanEdges(class WoodlandMansionPieces::SimpleGrid& grid);

        MCAPI void _identifyRooms(
            class WoodlandMansionPieces::SimpleGrid& fromGrid,
            class WoodlandMansionPieces::SimpleGrid& roomGrid
        );

        MCAPI void
        _recursiveCorridor(class WoodlandMansionPieces::SimpleGrid& grid, int x, int y, uchar heading, int depth);

        MCAPI void _setupThirdFloor();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class Random& random);

        // NOLINTEND
    };

    struct PlacementData {
    public:
        // prevent constructor by default
        PlacementData& operator=(PlacementData const&);
        PlacementData(PlacementData const&);
        PlacementData();

    public:
        // NOLINTBEGIN
        MCAPI ~PlacementData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // prevent constructor by default
        SecondFloorRoomCollection& operator=(SecondFloorRoomCollection const&);
        SecondFloorRoomCollection(SecondFloorRoomCollection const&);
        SecondFloorRoomCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~SecondFloorRoomCollection() = default;

        // vIndex: 1
        virtual std::string get1x1(class Random& random);

        // vIndex: 2
        virtual std::string get1x1Secret(class Random& random);

        // vIndex: 3
        virtual std::string get1x2SideEntrance(class Random& random, bool isStairsRoom);

        // vIndex: 4
        virtual std::string get1x2FrontEntrance(class Random& random, bool isStairsRoom);

        // vIndex: 5
        virtual std::string get1x2Secret(class Random& random);

        // vIndex: 6
        virtual std::string get2x2(class Random& random);

        // vIndex: 7
        virtual std::string get2x2Secret(class Random& random);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI std::string get1x1$(class Random& random);

        MCAPI std::string get1x1Secret$(class Random& random);

        MCAPI std::string get1x2FrontEntrance$(class Random& random, bool isStairsRoom);

        MCAPI std::string get1x2Secret$(class Random& random);

        MCAPI std::string get1x2SideEntrance$(class Random& random, bool isStairsRoom);

        MCAPI std::string get2x2$(class Random& random);

        MCAPI std::string get2x2Secret$(class Random& random);

        // NOLINTEND
    };

    class SimpleGrid {
    public:
        // prevent constructor by default
        SimpleGrid& operator=(SimpleGrid const&);
        SimpleGrid(SimpleGrid const&);
        SimpleGrid();

    public:
        // NOLINTBEGIN
        MCAPI bool edgesTo(int x, int y, int ifValue);

        MCAPI void set(int x0, int y0, int x1, int y1, int value);

        // NOLINTEND
    };

    class MansionPiecePlacer {
    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&);
        MansionPiecePlacer(MansionPiecePlacer const&);
        MansionPiecePlacer();

    public:
        // NOLINTBEGIN
        MCAPI void createMansion(
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class WoodlandMansionPieces::MansionGrid&           mansion
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _addRoom1x1(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class BlockPos const&                               roomPos,
            ::Rotation                                          rotation,
            uchar                                               doorDir,
            class WoodlandMansionPieces::FloorRoomCollection&   rooms
        );

        MCAPI void _addRoom1x2(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class BlockPos const&                               roomPos,
            ::Rotation                                          rotation,
            uchar                                               roomDir,
            uchar                                               doorDir,
            class WoodlandMansionPieces::FloorRoomCollection&   rooms,
            bool                                                isStairsRoom
        );

        MCAPI void _addRoom2x2(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class BlockPos const&                               roomPos,
            ::Rotation                                          rotation,
            uchar                                               roomDir,
            uchar                                               doorDir,
            class WoodlandMansionPieces::FloorRoomCollection&   rooms
        );

        MCAPI void _addRoom2x2Secret(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class BlockPos const&                               roomPos,
            ::Rotation                                          rotation,
            class WoodlandMansionPieces::FloorRoomCollection&   rooms
        );

        MCAPI void _createRoof(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            class BlockPos const&                               roofOrigin,
            ::Rotation                                          rotation,
            class WoodlandMansionPieces::SimpleGrid&            grid,
            class WoodlandMansionPieces::SimpleGrid*            aboveGrid
        );

        MCAPI void _traverseOuterWalls(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            struct WoodlandMansionPieces::PlacementData&        data,
            class WoodlandMansionPieces::SimpleGrid&            grid,
            uchar                                               gridDirection,
            int                                                 startX,
            int                                                 startY,
            int                                                 endX,
            int                                                 endY
        );

        MCAPI void _traverseWallPiece(
            std::vector<std::unique_ptr<class StructurePiece>>& pieces,
            struct WoodlandMansionPieces::PlacementData&        data
        );

        // NOLINTEND
    };

    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {
    public:
        // prevent constructor by default
        ThirdFloorRoomCollection& operator=(ThirdFloorRoomCollection const&);
        ThirdFloorRoomCollection(ThirdFloorRoomCollection const&);
        ThirdFloorRoomCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ThirdFloorRoomCollection() = default;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        // NOLINTEND
    };

    class WoodlandMansionPiece : public ::TemplateStructurePiece {
    public:
        // prevent constructor by default
        WoodlandMansionPiece& operator=(WoodlandMansionPiece const&);
        WoodlandMansionPiece(WoodlandMansionPiece const&);
        WoodlandMansionPiece();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~WoodlandMansionPiece();

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

        MCAPI WoodlandMansionPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string const&                                  templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation
        );

        MCAPI WoodlandMansionPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string const&                                  templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            ::Mirror                                            mirror
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _addChest(
            std::string const&       markerId,
            class BlockPos const&    position,
            class BlockSource&       region,
            class Random&            random,
            class BoundingBox const& chunkBB
        );

        MCAPI void _loadTemplate();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void* ctor$(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string const&                                  templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation
        );

        MCAPI void* ctor$(
            Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
            std::string const&                                  templateName,
            class BlockPos const&                               origin,
            ::Rotation                                          rotation,
            ::Mirror                                            mirror
        );

        MCAPI void dtor$();

        MCAPI void _handleDataMarker$(
            std::string const&       markerId,
            class BlockPos const&    position,
            class BlockSource&       region,
            class Random&            random,
            class BoundingBox const& chunkBB
        );

        MCAPI ::StructurePieceType getType$() const;

        MCAPI void
        postProcessMobsAt$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WoodlandMansionPieces& operator=(WoodlandMansionPieces const&);
    WoodlandMansionPieces(WoodlandMansionPieces const&);
    WoodlandMansionPieces();

public:
    // NOLINTBEGIN
    MCAPI static void generateMansion(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> structureManager,
        class BlockPos const&                               origin,
        ::Rotation                                          rotation,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // NOLINTEND
};
