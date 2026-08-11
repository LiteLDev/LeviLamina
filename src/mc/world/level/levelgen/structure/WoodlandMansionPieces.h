#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
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
    class FloorRoomCollection;
    struct PlacementData;
    class SimpleGrid;
    class WoodlandMansionPiece;
    class FirstFloorRoomCollection;
    class MansionGrid;
    class MansionPiecePlacer;
    class SecondFloorRoomCollection;
    class ThirdFloorRoomCollection;
    // clang-format on

    // WoodlandMansionPieces inner types define
    class FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FloorRoomCollection() = default;

        virtual ::std::string get1x1(::Random& random) = 0;

        virtual ::std::string get1x1Secret(::Random& random) = 0;

        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) = 0;

        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) = 0;

        virtual ::std::string get1x2Secret(::Random& random) = 0;

        virtual ::std::string get2x2(::Random& random) = 0;

        virtual ::std::string get2x2Secret(::Random& random) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct PlacementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Rotation>     mRotation;
        ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;
        ::ll::TypedStorage<8, 32, ::std::string> mWallType;
        // NOLINTEND
    };

    class SimpleGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<int>>> mGrid;
        ::ll::TypedStorage<4, 4, int>                                mWidth;
        ::ll::TypedStorage<4, 4, int>                                mHeight;
        ::ll::TypedStorage<4, 4, int>                                mValueIfOutside;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool edgesTo(int x, int y, int ifValue);
        // NOLINTEND
    };

    class WoodlandMansionPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, ::Mirror>                                           mMirror;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mVindicatorPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mEvokerPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mAllayGroupPositions;
        // NOLINTEND

    public:
        // prevent constructor by default
        WoodlandMansionPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::StructurePieceType getType() const /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;
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
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class FirstFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FirstFloorRoomCollection() /*override*/ = default;

        virtual ::std::string get1x1(::Random& random) /*override*/;

        virtual ::std::string get1x1Secret(::Random& random) /*override*/;

        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;

        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;

        virtual ::std::string get1x2Secret(::Random& random) /*override*/;

        virtual ::std::string get2x2(::Random& random) /*override*/;

        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class MansionGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>> mBaseGrid;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>> mThirdFloorGrid;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::WoodlandMansionPieces::SimpleGrid>>> mFloorRooms;
        ::ll::TypedStorage<4, 4, int>                                                                    mEntranceX;
        ::ll::TypedStorage<4, 4, int>                                                                    mEntranceY;
        ::ll::TypedStorage<8, 8, ::Random&>                                                              mRandom;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionGrid& operator=(MansionGrid const&);
        MansionGrid(MansionGrid const&);
        MansionGrid();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool _cleanEdges(::WoodlandMansionPieces::SimpleGrid& grid);

        MCAPI void
        _identifyRooms(::WoodlandMansionPieces::SimpleGrid& fromGrid, ::WoodlandMansionPieces::SimpleGrid& roomGrid);

        MCAPI void
        _recursiveCorridor(::WoodlandMansionPieces::SimpleGrid& grid, int x, int y, uchar heading, int depth);

        MCAPI uchar get1x2RoomDirection(
            ::WoodlandMansionPieces::SimpleGrid const& grid,
            int                                        x,
            int                                        y,
            int                                        floorNum,
            int                                        roomId
        ) const;
        // NOLINTEND
    };

    class MansionPiecePlacer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<8, 8, ::Random&>                                          mRandom;
        ::ll::TypedStorage<4, 4, int>                                                mStartX;
        ::ll::TypedStorage<4, 4, int>                                                mStartY;
        // NOLINTEND

    public:
        // prevent constructor by default
        MansionPiecePlacer& operator=(MansionPiecePlacer const&);
        MansionPiecePlacer(MansionPiecePlacer const&);
        MansionPiecePlacer();

    public:
        // member functions
        // NOLINTBEGIN
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

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SecondFloorRoomCollection() /*override*/ = default;

        virtual ::std::string get1x1(::Random& random) /*override*/;

        virtual ::std::string get1x1Secret(::Random& random) /*override*/;

        virtual ::std::string get1x2SideEntrance(::Random& random, bool isStairsRoom) /*override*/;

        virtual ::std::string get1x2FrontEntrance(::Random& random, bool isStairsRoom) /*override*/;

        virtual ::std::string get1x2Secret(::Random& random) /*override*/;

        virtual ::std::string get2x2(::Random& random) /*override*/;

        virtual ::std::string get2x2Secret(::Random& random) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class ThirdFloorRoomCollection : public ::WoodlandMansionPieces::SecondFloorRoomCollection {};

    using FloorRoomCollection = ::WoodlandMansionPieces::FloorRoomCollection;

    using MansionGrid = ::WoodlandMansionPieces::MansionGrid;

    using SimpleGrid = ::WoodlandMansionPieces::SimpleGrid;
};
