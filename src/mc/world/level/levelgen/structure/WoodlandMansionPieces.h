#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
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
        // vIndex: 0, symbol: ??1FloorRoomCollection@@@UEAA@XZ
        virtual ~FloorRoomCollection();

        // vIndex: 1, symbol:
        // ?get1x1@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1(class Random&) = 0;

        // vIndex: 2, symbol:
        // ?get1x1Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1Secret(class Random&) = 0;

        // vIndex: 3, symbol:
        // ?get1x2SideEntrance@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2SideEntrance(class Random&, bool) = 0;

        // vIndex: 4, symbol:
        // ?get1x2FrontEntrance@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2FrontEntrance(class Random&, bool) = 0;

        // vIndex: 5, symbol:
        // ?get1x2Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x2Secret(class Random&) = 0;

        // vIndex: 6, symbol:
        // ?get2x2@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2(class Random&) = 0;

        // vIndex: 7, symbol:
        // ?get2x2Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2Secret(class Random&) = 0;

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
        // vIndex: 0, symbol: ??1FirstFloorRoomCollection@@@UEAA@XZ
        virtual ~FirstFloorRoomCollection();

        // vIndex: 1, symbol:
        // ?get1x1@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1(class Random&);

        // vIndex: 2, symbol:
        // ?get1x1Secret@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1Secret(class Random&);

        // vIndex: 3, symbol:
        // ?get1x2SideEntrance@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2SideEntrance(class Random&, bool);

        // vIndex: 4, symbol:
        // ?get1x2FrontEntrance@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2FrontEntrance(class Random&, bool);

        // vIndex: 5, symbol:
        // ?get1x2Secret@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x2Secret(class Random&);

        // vIndex: 6, symbol:
        // ?get2x2@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2(class Random&);

        // vIndex: 7, symbol:
        // ?get2x2Secret@FirstFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2Secret(class Random&);

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
        // symbol: ??0MansionGrid@WoodlandMansionPieces@@QEAA@AEAVRandom@@@Z
        MCAPI explicit MansionGrid(class Random&);

        // symbol: ?get1x2RoomDirection@MansionGrid@WoodlandMansionPieces@@QEBAEAEBVSimpleGrid@2@HHHH@Z
        MCAPI uchar get1x2RoomDirection(class WoodlandMansionPieces::SimpleGrid const&, int, int, int, int) const;

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?_cleanEdges@MansionGrid@WoodlandMansionPieces@@AEAA_NAEAVSimpleGrid@2@@Z
        MCAPI bool _cleanEdges(class WoodlandMansionPieces::SimpleGrid&);

        // symbol: ?_identifyRooms@MansionGrid@WoodlandMansionPieces@@AEAAXAEAVSimpleGrid@2@0@Z
        MCAPI void _identifyRooms(class WoodlandMansionPieces::SimpleGrid&, class WoodlandMansionPieces::SimpleGrid&);

        // symbol: ?_recursiveCorridor@MansionGrid@WoodlandMansionPieces@@AEAAXAEAVSimpleGrid@2@HHEH@Z
        MCAPI void _recursiveCorridor(class WoodlandMansionPieces::SimpleGrid&, int, int, uchar, int);

        // symbol: ?_setupThirdFloor@MansionGrid@WoodlandMansionPieces@@AEAAXXZ
        MCAPI void _setupThirdFloor();

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
        // symbol: ??1PlacementData@WoodlandMansionPieces@@QEAA@XZ
        MCAPI ~PlacementData();

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
        // vIndex: 0, symbol: ??1SecondFloorRoomCollection@@@UEAA@XZ
        virtual ~SecondFloorRoomCollection();

        // vIndex: 1, symbol:
        // ?get1x1@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1(class Random&);

        // vIndex: 2, symbol:
        // ?get1x1Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x1Secret(class Random&);

        // vIndex: 3, symbol:
        // ?get1x2SideEntrance@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2SideEntrance(class Random&, bool);

        // vIndex: 4, symbol:
        // ?get1x2FrontEntrance@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@_N@Z
        virtual std::string get1x2FrontEntrance(class Random&, bool);

        // vIndex: 5, symbol:
        // ?get1x2Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get1x2Secret(class Random&);

        // vIndex: 6, symbol:
        // ?get2x2@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2(class Random&);

        // vIndex: 7, symbol:
        // ?get2x2Secret@SecondFloorRoomCollection@WoodlandMansionPieces@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRandom@@@Z
        virtual std::string get2x2Secret(class Random&);

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
        // symbol: ?edgesTo@SimpleGrid@WoodlandMansionPieces@@QEAA_NHHH@Z
        MCAPI bool edgesTo(int, int, int);

        // symbol: ?set@SimpleGrid@WoodlandMansionPieces@@QEAAXHHHHH@Z
        MCAPI void set(int, int, int, int, int);

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
        // symbol:
        // ?createMansion@MansionPiecePlacer@WoodlandMansionPieces@@QEAAXAEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVMansionGrid@2@@Z
        MCAPI void
        createMansion(class BlockPos const&, ::Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class WoodlandMansionPieces::MansionGrid&);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?_addRoom1x1@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBlockPos@@W4Rotation@@EAEAVFloorRoomCollection@2@@Z
        MCAPI void
        _addRoom1x1(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, ::Rotation, uchar, class WoodlandMansionPieces::FloorRoomCollection&);

        // symbol:
        // ?_addRoom1x2@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBlockPos@@W4Rotation@@EEAEAVFloorRoomCollection@2@_N@Z
        MCAPI void _addRoom1x2(
            std::vector<std::unique_ptr<class StructurePiece>>&,
            class BlockPos const&,
            ::Rotation,
            uchar,
            uchar,
            class WoodlandMansionPieces::FloorRoomCollection&,
            bool
        );

        // symbol:
        // ?_addRoom2x2@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBlockPos@@W4Rotation@@EEAEAVFloorRoomCollection@2@@Z
        MCAPI void
        _addRoom2x2(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, ::Rotation, uchar, uchar, class WoodlandMansionPieces::FloorRoomCollection&);

        // symbol:
        // ?_addRoom2x2Secret@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBlockPos@@W4Rotation@@AEAVFloorRoomCollection@2@@Z
        MCAPI void
        _addRoom2x2Secret(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, ::Rotation, class WoodlandMansionPieces::FloorRoomCollection&);

        // symbol:
        // ?_createRoof@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVBlockPos@@W4Rotation@@AEAVSimpleGrid@2@PEAV72@@Z
        MCAPI void
        _createRoof(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, ::Rotation, class WoodlandMansionPieces::SimpleGrid&, class WoodlandMansionPieces::SimpleGrid*);

        // symbol:
        // ?_traverseOuterWalls@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAUPlacementData@2@AEAVSimpleGrid@2@EHHHH@Z
        MCAPI void _traverseOuterWalls(
            std::vector<std::unique_ptr<class StructurePiece>>&,
            struct WoodlandMansionPieces::PlacementData&,
            class WoodlandMansionPieces::SimpleGrid&,
            uchar,
            int,
            int,
            int,
            int
        );

        // symbol:
        // ?_traverseWallPiece@MansionPiecePlacer@WoodlandMansionPieces@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAUPlacementData@2@@Z
        MCAPI void
        _traverseWallPiece(std::vector<std::unique_ptr<class StructurePiece>>&, struct WoodlandMansionPieces::PlacementData&);

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
        // vIndex: 0, symbol: ??1ThirdFloorRoomCollection@@@UEAA@XZ
        virtual ~ThirdFloorRoomCollection();

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
        // vIndex: 0, symbol: ??1WoodlandMansionPiece@WoodlandMansionPieces@@UEAA@XZ
        virtual ~WoodlandMansionPiece();

        // vIndex: 2, symbol: ?getType@WoodlandMansionPiece@WoodlandMansionPieces@@UEBA?AW4StructurePieceType@@XZ
        virtual ::StructurePieceType getType() const;

        // vIndex: 5, symbol:
        // ?postProcessMobsAt@WoodlandMansionPiece@WoodlandMansionPieces@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

        // vIndex: 13, symbol:
        // ?_handleDataMarker@WoodlandMansionPiece@WoodlandMansionPieces@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);

        // symbol:
        // ??0WoodlandMansionPiece@WoodlandMansionPieces@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@@Z
        MCAPI WoodlandMansionPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>,
            std::string const&,
            class BlockPos const&,
            ::Rotation
        );

        // symbol:
        // ??0WoodlandMansionPiece@WoodlandMansionPieces@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@W4Mirror@@@Z
        MCAPI WoodlandMansionPiece(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>,
            std::string const&,
            class BlockPos const&,
            ::Rotation,
            ::Mirror
        );

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?_addChest@WoodlandMansionPiece@WoodlandMansionPieces@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
        MCAPI void
        _addChest(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&);

        // symbol: ?_loadTemplate@WoodlandMansionPiece@WoodlandMansionPieces@@AEAAXXZ
        MCAPI void _loadTemplate();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WoodlandMansionPieces& operator=(WoodlandMansionPieces const&);
    WoodlandMansionPieces(WoodlandMansionPieces const&);
    WoodlandMansionPieces();

public:
    // NOLINTBEGIN
    // symbol:
    // ?generateMansion@WoodlandMansionPieces@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    MCAPI static void
    generateMansion(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class BlockPos const&, ::Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // NOLINTEND
};
