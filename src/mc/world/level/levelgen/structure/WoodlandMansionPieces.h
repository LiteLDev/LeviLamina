#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class Random;
class StructureManager;
class StructurePiece;
// clang-format on

class WoodlandMansionPieces {
public:
    // WoodlandMansionPieces inner types declare
    // clang-format off
    class FirstFloorRoomCollection;
    class FloorRoomCollection;
    class MansionGrid;
    class MansionPiecePlacer;
    struct PlacementData;
    class SecondFloorRoomCollection;
    class SimpleGrid;
    class ThirdFloorRoomCollection;
    class WoodlandMansionPiece;
    // clang-format on

    // WoodlandMansionPieces inner types define
    class WoodlandMansionPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk4d3f84;
        ::ll::UntypedStorage<8, 32> mUnkcee1a3;
        ::ll::UntypedStorage<1, 1>  mUnkf64aa2;
        ::ll::UntypedStorage<1, 1>  mUnk42ba55;
        ::ll::UntypedStorage<4, 12> mUnkb8937e;
        ::ll::UntypedStorage<8, 24> mUnk1ce38c;
        ::ll::UntypedStorage<8, 24> mUnk3a48b3;
        ::ll::UntypedStorage<8, 24> mUnka40a15;
        // NOLINTEND

    public:
        // prevent constructor by default
        WoodlandMansionPiece& operator=(WoodlandMansionPiece const&);
        WoodlandMansionPiece(WoodlandMansionPiece const&);
        WoodlandMansionPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ::StructurePieceType getType() const /*override*/;

        // vIndex: 5
        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        // vIndex: 13
        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;

        // vIndex: 0
        virtual ~WoodlandMansionPiece() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI WoodlandMansionPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation
        );

        MCAPI WoodlandMansionPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            ::Mirror                                          mirror
        );

        MCAPI void _addChest(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        );

        MCAPI void _loadTemplate();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation
        );

        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string const&                              templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            ::Mirror                                          mirror
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::StructurePieceType $getType() const;

        MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCAPI void $_handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct PlacementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk5be46d;
        ::ll::UntypedStorage<4, 12> mUnkcebdae;
        ::ll::UntypedStorage<8, 32> mUnkf5b1b8;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacementData& operator=(PlacementData const&);
        PlacementData(PlacementData const&);
        PlacementData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PlacementData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class MansionGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkabbf84;
        ::ll::UntypedStorage<8, 8>  mUnke92746;
        ::ll::UntypedStorage<8, 24> mUnk29dd95;
        ::ll::UntypedStorage<4, 4>  mUnkd065d7;
        ::ll::UntypedStorage<4, 4>  mUnk9a0f18;
        ::ll::UntypedStorage<8, 8>  mUnkec8509;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&);
        MansionGrid(MansionGrid const&);
        MansionGrid();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit MansionGrid(::Random& random);

        MCAPI bool _cleanEdges(::WoodlandMansionPieces::SimpleGrid& grid);

        MCAPI void
        _identifyRooms(::WoodlandMansionPieces::SimpleGrid& fromGrid, ::WoodlandMansionPieces::SimpleGrid& roomGrid);

        MCAPI void
        _recursiveCorridor(::WoodlandMansionPieces::SimpleGrid& grid, int x, int y, uchar heading, int depth);

        MCAPI void _setupThirdFloor();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Random& random);
        // NOLINTEND
    };

    class SimpleGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk357599;
        ::ll::UntypedStorage<4, 4>  mUnk172802;
        ::ll::UntypedStorage<4, 4>  mUnkeb4d1d;
        ::ll::UntypedStorage<4, 4>  mUnk1e4614;
        // NOLINTEND

    public:
        // prevent constructor by default
        SimpleGrid& operator=(SimpleGrid const&);
        SimpleGrid(SimpleGrid const&);
        SimpleGrid();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void set(int x0, int y0, int x1, int y1, int value);
        // NOLINTEND
    };

    class FloorRoomCollection {
    public:
        // prevent constructor by default
        FloorRoomCollection& operator=(FloorRoomCollection const&);
        FloorRoomCollection(FloorRoomCollection const&);
        FloorRoomCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FloorRoomCollection() = default;

        // vIndex: 1
        virtual ::std::string get1x1(::Random&) = 0;

        // vIndex: 2
        virtual ::std::string get1x1Secret(::Random&) = 0;

        // vIndex: 3
        virtual ::std::string get1x2SideEntrance(::Random&, bool) = 0;

        // vIndex: 4
        virtual ::std::string get1x2FrontEntrance(::Random&, bool) = 0;

        // vIndex: 5
        virtual ::std::string get1x2Secret(::Random&) = 0;

        // vIndex: 6
        virtual ::std::string get2x2(::Random&) = 0;

        // vIndex: 7
        virtual ::std::string get2x2Secret(::Random&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class MansionPiecePlacer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkda958b;
        ::ll::UntypedStorage<8, 8>  mUnkc9fbcb;
        ::ll::UntypedStorage<4, 4>  mUnk8d326a;
        ::ll::UntypedStorage<4, 4>  mUnka4720e;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&);
        MansionPiecePlacer(MansionPiecePlacer const&);
        MansionPiecePlacer();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _addRoom1x1(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roomPos,
            ::Rotation                                          rotation,
            uchar                                               doorDir,
            ::WoodlandMansionPieces::FloorRoomCollection&       rooms
        );

        MCAPI void _addRoom1x2(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roomPos,
            ::Rotation                                          rotation,
            uchar                                               roomDir,
            uchar                                               doorDir,
            ::WoodlandMansionPieces::FloorRoomCollection&       rooms,
            bool                                                isStairsRoom
        );

        MCAPI void _addRoom2x2(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roomPos,
            ::Rotation                                          rotation,
            uchar                                               roomDir,
            uchar                                               doorDir,
            ::WoodlandMansionPieces::FloorRoomCollection&       rooms
        );

        MCAPI void _addRoom2x2Secret(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roomPos,
            ::Rotation                                          rotation,
            ::WoodlandMansionPieces::FloorRoomCollection&       rooms
        );

        MCAPI void _createRoof(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::BlockPos const&                                   roofOrigin,
            ::Rotation                                          rotation,
            ::WoodlandMansionPieces::SimpleGrid&                grid,
            ::WoodlandMansionPieces::SimpleGrid*                aboveGrid
        );

        MCAPI void _traverseOuterWalls(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::PlacementData&             data,
            ::WoodlandMansionPieces::SimpleGrid&                grid,
            uchar                                               gridDirection,
            int                                                 startX,
            int                                                 startY,
            int                                                 endX,
            int                                                 endY
        );

        MCAPI void _traverseWallPiece(
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::PlacementData&             data
        );

        MCAPI void createMansion(
            ::BlockPos const&                                   origin,
            ::Rotation                                          rotation,
            ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
            ::WoodlandMansionPieces::MansionGrid&               mansion
        );
        // NOLINTEND
    };

    class FirstFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // prevent constructor by default
        FirstFloorRoomCollection& operator=(FirstFloorRoomCollection const&);
        FirstFloorRoomCollection(FirstFloorRoomCollection const&);
        FirstFloorRoomCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~FirstFloorRoomCollection() /*override*/ = default;

        // vIndex: 1
        virtual ::std::string get1x1(::Random& random) /*override*/;

        // vIndex: 2
        virtual ::std::string get1x1Secret(::Random& random) /*override*/;

        // vIndex: 3
        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;

        // vIndex: 4
        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;

        // vIndex: 5
        virtual ::std::string get1x2Secret(::Random& random) /*override*/;

        // vIndex: 6
        virtual ::std::string get2x2(::Random& random) /*override*/;

        // vIndex: 7
        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::string $get1x1(::Random& random);

        MCAPI ::std::string $get1x1Secret(::Random& random);

        MCAPI ::std::string $get1x2SideEntrance(::Random& random, bool isStairsRoom);

        MCAPI ::std::string $get1x2FrontEntrance(::Random& random, bool isStairsRoom);

        MCAPI ::std::string $get1x2Secret(::Random& random);

        MCAPI ::std::string $get2x2(::Random& random);

        MCAPI ::std::string $get2x2Secret(::Random& random);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // prevent constructor by default
        SecondFloorRoomCollection& operator=(SecondFloorRoomCollection const&);
        SecondFloorRoomCollection(SecondFloorRoomCollection const&);
        SecondFloorRoomCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~SecondFloorRoomCollection() /*override*/ = default;

        // vIndex: 1
        virtual ::std::string get1x1(::Random& random) /*override*/;

        // vIndex: 2
        virtual ::std::string get1x1Secret(::Random& random) /*override*/;

        // vIndex: 3
        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;

        // vIndex: 4
        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;

        // vIndex: 5
        virtual ::std::string get1x2Secret(::Random& random) /*override*/;

        // vIndex: 6
        virtual ::std::string get2x2(::Random& random) /*override*/;

        // vIndex: 7
        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::string $get1x1(::Random& random);

        MCAPI ::std::string $get1x1Secret(::Random& random);

        MCAPI ::std::string $get1x2SideEntrance(::Random& random, bool isStairsRoom);

        MCAPI ::std::string $get1x2FrontEntrance(::Random& random, bool isStairsRoom);

        MCAPI ::std::string $get1x2Secret(::Random& random);

        MCAPI ::std::string $get2x2(::Random& random);

        MCAPI ::std::string $get2x2Secret(::Random& random);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {
    public:
        // prevent constructor by default
        ThirdFloorRoomCollection& operator=(ThirdFloorRoomCollection const&);
        ThirdFloorRoomCollection(ThirdFloorRoomCollection const&);
        ThirdFloorRoomCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ThirdFloorRoomCollection() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    WoodlandMansionPieces& operator=(WoodlandMansionPieces const&);
    WoodlandMansionPieces(WoodlandMansionPieces const&);
    WoodlandMansionPieces();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void generateMansion(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   origin,
        ::Rotation                                          rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );
    // NOLINTEND
};
