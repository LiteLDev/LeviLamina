#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

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
    class FirstFloorRoomCollection {

    public:
        // prevent constructor by default
        FirstFloorRoomCollection& operator=(FirstFloorRoomCollection const&) = delete;
        FirstFloorRoomCollection(FirstFloorRoomCollection const&)            = delete;
        FirstFloorRoomCollection()                                           = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?get1x1\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x1(class Random&); // NOLINT
        /**
         * @vftbl 2
         * @symbol
         * ?get1x1Secret\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x1Secret(class Random&); // NOLINT
        /**
         * @vftbl 3
         * @symbol
         * ?get1x2SideEntrance\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@_N\@Z
         */
        virtual std::string get1x2SideEntrance(class Random&, bool); // NOLINT
        /**
         * @vftbl 4
         * @symbol
         * ?get1x2FrontEntrance\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@_N\@Z
         */
        virtual std::string get1x2FrontEntrance(class Random&, bool); // NOLINT
        /**
         * @vftbl 5
         * @symbol
         * ?get1x2Secret\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x2Secret(class Random&); // NOLINT
        /**
         * @vftbl 6
         * @symbol
         * ?get2x2\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get2x2(class Random&); // NOLINT
        /**
         * @vftbl 7
         * @symbol
         * ?get2x2Secret\@FirstFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get2x2Secret(class Random&); // NOLINT
    };

    class FloorRoomCollection {

    public:
        // prevent constructor by default
        FloorRoomCollection& operator=(FloorRoomCollection const&) = delete;
        FloorRoomCollection(FloorRoomCollection const&)            = delete;
        FloorRoomCollection()                                      = delete;
    };

    class MansionGrid {

    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&) = delete;
        MansionGrid(MansionGrid const&)            = delete;
        MansionGrid()                              = delete;

    public:
        /**
         * @symbol ??0MansionGrid\@WoodlandMansionPieces\@\@QEAA\@AEAVRandom\@\@\@Z
         */
        MCAPI MansionGrid(class Random&); // NOLINT
        /**
         * @symbol ?get1x2RoomDirection\@MansionGrid\@WoodlandMansionPieces\@\@QEBAEAEBVSimpleGrid\@2\@HHHH\@Z
         */
        MCAPI unsigned char
        get1x2RoomDirection(class WoodlandMansionPieces::SimpleGrid const&, int, int, int, int) const; // NOLINT

        // private:
        /**
         * @symbol ?_cleanEdges\@MansionGrid\@WoodlandMansionPieces\@\@AEAA_NAEAVSimpleGrid\@2\@\@Z
         */
        MCAPI bool _cleanEdges(class WoodlandMansionPieces::SimpleGrid&); // NOLINT
        /**
         * @symbol ?_identifyRooms\@MansionGrid\@WoodlandMansionPieces\@\@AEAAXAEAVSimpleGrid\@2\@0\@Z
         */
        MCAPI void
        _identifyRooms(class WoodlandMansionPieces::SimpleGrid&, class WoodlandMansionPieces::SimpleGrid&); // NOLINT
        /**
         * @symbol ?_recursiveCorridor\@MansionGrid\@WoodlandMansionPieces\@\@AEAAXAEAVSimpleGrid\@2\@HHEH\@Z
         */
        MCAPI void _recursiveCorridor(class WoodlandMansionPieces::SimpleGrid&, int, int, unsigned char, int); // NOLINT
        /**
         * @symbol ?_setupThirdFloor\@MansionGrid\@WoodlandMansionPieces\@\@AEAAXXZ
         */
        MCAPI void _setupThirdFloor(); // NOLINT

    private:
    };

    class MansionPiecePlacer {

    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&) = delete;
        MansionPiecePlacer(MansionPiecePlacer const&)            = delete;
        MansionPiecePlacer()                                     = delete;

    public:
        /**
         * @symbol
         * ?createMansion\@MansionPiecePlacer\@WoodlandMansionPieces\@\@QEAAXAEBVBlockPos\@\@W4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVMansionGrid\@2\@\@Z
         */
        MCAPI void
        createMansion(class BlockPos const&, enum class Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class WoodlandMansionPieces::MansionGrid&); // NOLINT

        // private:
        /**
         * @symbol
         * ?_addRoom1x1\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@EAEAVFloorRoomCollection\@2\@\@Z
         */
        MCAPI void
        _addRoom1x1(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, enum class Rotation, unsigned char, class WoodlandMansionPieces::FloorRoomCollection&); // NOLINT
        /**
         * @symbol
         * ?_addRoom1x2\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@EEAEAVFloorRoomCollection\@2\@_N\@Z
         */
        MCAPI void _addRoom1x2(
            std::vector<std::unique_ptr<class StructurePiece>>&,
            class BlockPos const&,
            enum class Rotation,
            unsigned char,
            unsigned char,
            class WoodlandMansionPieces::FloorRoomCollection&,
            bool
        ); // NOLINT
        /**
         * @symbol
         * ?_addRoom2x2\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@EEAEAVFloorRoomCollection\@2\@\@Z
         */
        MCAPI void
        _addRoom2x2(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, enum class Rotation, unsigned char, unsigned char, class WoodlandMansionPieces::FloorRoomCollection&); // NOLINT
        /**
         * @symbol
         * ?_addRoom2x2Secret\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@AEAVFloorRoomCollection\@2\@\@Z
         */
        MCAPI void
        _addRoom2x2Secret(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, enum class Rotation, class WoodlandMansionPieces::FloorRoomCollection&); // NOLINT
        /**
         * @symbol
         * ?_createRoof\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@AEAVSimpleGrid\@2\@PEAV72\@\@Z
         */
        MCAPI void
        _createRoof(std::vector<std::unique_ptr<class StructurePiece>>&, class BlockPos const&, enum class Rotation, class WoodlandMansionPieces::SimpleGrid&, class WoodlandMansionPieces::SimpleGrid*); // NOLINT
        /**
         * @symbol
         * ?_traverseOuterWalls\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAUPlacementData\@2\@AEAVSimpleGrid\@2\@EHHHH\@Z
         */
        MCAPI void _traverseOuterWalls(
            std::vector<std::unique_ptr<class StructurePiece>>&,
            struct WoodlandMansionPieces::PlacementData&,
            class WoodlandMansionPieces::SimpleGrid&,
            unsigned char,
            int,
            int,
            int,
            int
        ); // NOLINT
        /**
         * @symbol
         * ?_traverseWallPiece\@MansionPiecePlacer\@WoodlandMansionPieces\@\@AEAAXAEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAUPlacementData\@2\@\@Z
         */
        MCAPI void
        _traverseWallPiece(std::vector<std::unique_ptr<class StructurePiece>>&, struct WoodlandMansionPieces::PlacementData&); // NOLINT

    private:
    };

    struct PlacementData {

    public:
        // prevent constructor by default
        PlacementData& operator=(PlacementData const&) = delete;
        PlacementData(PlacementData const&)            = delete;
        PlacementData()                                = delete;

    public:
        /**
         * @symbol ??1PlacementData\@WoodlandMansionPieces\@\@QEAA\@XZ
         */
        MCAPI ~PlacementData(); // NOLINT
    };

    class SecondFloorRoomCollection {

    public:
        // prevent constructor by default
        SecondFloorRoomCollection& operator=(SecondFloorRoomCollection const&) = delete;
        SecondFloorRoomCollection(SecondFloorRoomCollection const&)            = delete;
        SecondFloorRoomCollection()                                            = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?get1x1\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x1(class Random&); // NOLINT
        /**
         * @vftbl 2
         * @symbol
         * ?get1x1Secret\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x1Secret(class Random&); // NOLINT
        /**
         * @vftbl 3
         * @symbol
         * ?get1x2SideEntrance\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@_N\@Z
         */
        virtual std::string get1x2SideEntrance(class Random&, bool); // NOLINT
        /**
         * @vftbl 4
         * @symbol
         * ?get1x2FrontEntrance\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@_N\@Z
         */
        virtual std::string get1x2FrontEntrance(class Random&, bool); // NOLINT
        /**
         * @vftbl 5
         * @symbol
         * ?get1x2Secret\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get1x2Secret(class Random&); // NOLINT
        /**
         * @vftbl 6
         * @symbol
         * ?get2x2\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get2x2(class Random&); // NOLINT
        /**
         * @vftbl 7
         * @symbol
         * ?get2x2Secret\@SecondFloorRoomCollection\@WoodlandMansionPieces\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@\@Z
         */
        virtual std::string get2x2Secret(class Random&); // NOLINT
    };

    class SimpleGrid {

    public:
        // prevent constructor by default
        SimpleGrid& operator=(SimpleGrid const&) = delete;
        SimpleGrid(SimpleGrid const&)            = delete;
        SimpleGrid()                             = delete;

    public:
        /**
         * @symbol ?edgesTo\@SimpleGrid\@WoodlandMansionPieces\@\@QEAA_NHHH\@Z
         */
        MCAPI bool edgesTo(int, int, int); // NOLINT
        /**
         * @symbol ?set\@SimpleGrid\@WoodlandMansionPieces\@\@QEAAXHHHHH\@Z
         */
        MCAPI void set(int, int, int, int, int); // NOLINT
    };

    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {

    public:
        // prevent constructor by default
        ThirdFloorRoomCollection& operator=(ThirdFloorRoomCollection const&) = delete;
        ThirdFloorRoomCollection(ThirdFloorRoomCollection const&)            = delete;
        ThirdFloorRoomCollection()                                           = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
    };

    class WoodlandMansionPiece : public ::TemplateStructurePiece {

    public:
        // prevent constructor by default
        WoodlandMansionPiece& operator=(WoodlandMansionPiece const&) = delete;
        WoodlandMansionPiece(WoodlandMansionPiece const&)            = delete;
        WoodlandMansionPiece()                                       = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 2
         * @symbol ?getType\@WoodlandMansionPiece\@WoodlandMansionPieces\@\@UEBA?AW4StructurePieceType\@\@XZ
         */
        virtual enum class StructurePieceType getType() const; // NOLINT
        /**
         * @vftbl 5
         * @symbol
         * ?postProcessMobsAt\@WoodlandMansionPiece\@WoodlandMansionPieces\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
        /**
         * @vftbl 13
         * @symbol
         * ?_handleDataMarker\@WoodlandMansionPiece\@WoodlandMansionPieces\@\@MEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        virtual void
        _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOODLANDMANSIONPIECES_WOODLANDMANSIONPIECE
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~WoodlandMansionPiece(); // NOLINT
#endif
        /**
         * @symbol
         * ??0WoodlandMansionPiece\@WoodlandMansionPieces\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@W4Mirror\@\@\@Z
         */
        MCAPI WoodlandMansionPiece(
            class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>,
            std::string const&,
            class BlockPos const&,
            enum class Rotation,
            enum class Mirror
        ); // NOLINT
        /**
         * @symbol
         * ??0WoodlandMansionPiece\@WoodlandMansionPieces\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4Rotation\@\@\@Z
         */
        MCAPI WoodlandMansionPiece(
            class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>,
            std::string const&,
            class BlockPos const&,
            enum class Rotation
        ); // NOLINT

        // private:
        /**
         * @symbol
         * ?_addChest\@WoodlandMansionPiece\@WoodlandMansionPieces\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
         */
        MCAPI void
        _addChest(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
        /**
         * @symbol ?_loadTemplate\@WoodlandMansionPiece\@WoodlandMansionPieces\@\@AEAAXXZ
         */
        MCAPI void _loadTemplate(); // NOLINT

    private:
    };

public:
    // prevent constructor by default
    WoodlandMansionPieces& operator=(WoodlandMansionPieces const&) = delete;
    WoodlandMansionPieces(WoodlandMansionPieces const&)            = delete;
    WoodlandMansionPieces()                                        = delete;

public:
    /**
     * @symbol
     * ?generateMansion\@WoodlandMansionPieces\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBVBlockPos\@\@W4Rotation\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static void
    generateMansion(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const&, enum class Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&); // NOLINT
};
