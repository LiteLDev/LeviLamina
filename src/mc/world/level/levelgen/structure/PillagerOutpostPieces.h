#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LevelChunk;
class Random;
class StructureManager;
// clang-format on

class PillagerOutpostPieces {
public:
    // PillagerOutpostPieces inner types declare
    // clang-format off
    class PillagerOutpostPiece;
    // clang-format on

    // PillagerOutpostPieces inner types define
    class PillagerOutpostPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mPillagerPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mAllayGroupPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mCaptainPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                         mIronGolemPositions;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mTemplateName;
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
        ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPosition;
        ::ll::TypedStorage<4, 4, float>                                              mIntegrity;
        ::ll::TypedStorage<1, 1, ::Rotation>                                         mRotation;
        ::ll::TypedStorage<1, 1, bool>                                               mIsSatellite;
        ::ll::TypedStorage<1, 1, bool>                                               mHeightSet;
        ::ll::TypedStorage<4, 4, int>                                                mMaxNumberOfAllays;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

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
};
