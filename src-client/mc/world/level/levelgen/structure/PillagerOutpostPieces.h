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
class Dimension;
class LevelChunk;
class Random;
class StructureManager;
class StructurePiece;
struct ActorDefinitionIdentifier;
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
        // prevent constructor by default
        PillagerOutpostPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 4
        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        // vIndex: 5
        virtual void
        postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        // vIndex: 12
        virtual void addHardcodedSpawnAreas(::LevelChunk& chunk) const /*override*/;

        // vIndex: 13
        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;

        // vIndex: 0
        virtual ~PillagerOutpostPiece() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PillagerOutpostPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isSatellite,
            ::Dimension&                                      dimension
        );

        MCAPI void _addMobsFromPositions(
            ::BoundingBox const&               chunkBB,
            ::ActorDefinitionIdentifier const& definition,
            ::BlockSource&                     region,
            ::std::vector<::BlockPos> const&   entityPositions
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isSatellite,
            ::Dimension&                                      dimension
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
        MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;

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
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::Dimension&                                        dimension
    );

    MCAPI static void _addScatteredPieces(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::Random&                                           random,
        ::Rotation const&                                   rotation,
        ::BlockPos const&                                   parentPos,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Dimension&                                        dimension
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::std::string_view, 7>& MSC_FEATURES();

    MCAPI static ::std::string_view& PILLAGER_LOOT();

    MCAPI static ::std::string_view& STRUCTURE_WATCHTOWER();

    MCAPI static ::std::string_view& STRUCTURE_WATCHTOWER_OVERGROWN();
    // NOLINTEND
};
