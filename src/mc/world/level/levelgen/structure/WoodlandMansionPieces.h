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
// clang-format on

class WoodlandMansionPieces {
public:
    // WoodlandMansionPieces inner types declare
    // clang-format off
    class FloorRoomCollection;
    class MansionPiecePlacer;
    struct PlacementData;
    class SimpleGrid;
    class MansionGrid;
    class WoodlandMansionPiece;
    class FirstFloorRoomCollection;
    class SecondFloorRoomCollection;
    class ThirdFloorRoomCollection;
    // clang-format on

    // WoodlandMansionPieces inner types define
    class FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FloorRoomCollection() = default;

        virtual ::std::string get1x1(::Random&) = 0;

        virtual ::std::string get1x1Secret(::Random&) = 0;

        virtual ::std::string get1x2SideEntrance(::Random&, bool) = 0;

        virtual ::std::string get1x2FrontEntrance(::Random&, bool) = 0;

        virtual ::std::string get1x2Secret(::Random&) = 0;

        virtual ::std::string get2x2(::Random&) = 0;

        virtual ::std::string get2x2Secret(::Random&) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

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
        // virtual functions
        // NOLINTBEGIN
        virtual ::StructurePieceType getType() const /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void _handleDataMarker(
            ::std::string const&,
            ::BlockPos const&,
            ::BlockSource&,
            ::Random&,
            ::BoundingBox const&
        ) /*override*/;
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

        virtual ::std::string get1x1(::Random&) /*override*/;

        virtual ::std::string get1x1Secret(::Random&) /*override*/;

        virtual ::std::string get1x2SideEntrance(::Random&, bool) /*override*/;

        virtual ::std::string get1x2FrontEntrance(::Random&, bool) /*override*/;

        virtual ::std::string get1x2Secret(::Random&) /*override*/;

        virtual ::std::string get2x2(::Random&) /*override*/;

        virtual ::std::string get2x2Secret(::Random&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class SecondFloorRoomCollection : public ::WoodlandMansionPieces::FloorRoomCollection {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SecondFloorRoomCollection() /*override*/ = default;

        virtual ::std::string get1x1(::Random&) /*override*/;

        virtual ::std::string get1x1Secret(::Random&) /*override*/;

        virtual ::std::string get1x2SideEntrance(::Random&, bool) /*override*/;

        virtual ::std::string get1x2FrontEntrance(::Random&, bool) /*override*/;

        virtual ::std::string get1x2Secret(::Random&) /*override*/;

        virtual ::std::string get2x2(::Random&) /*override*/;

        virtual ::std::string get2x2Secret(::Random&) /*override*/;
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
