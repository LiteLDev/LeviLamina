#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/TemplateStructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
        ::ll::UntypedStorage<8, 24> mUnk19384d;
        ::ll::UntypedStorage<8, 24> mUnk9c3a70;
        ::ll::UntypedStorage<8, 24> mUnk1cf17c;
        ::ll::UntypedStorage<8, 24> mUnk8e44fd;
        ::ll::UntypedStorage<8, 32> mUnk6659ff;
        ::ll::UntypedStorage<8, 24> mUnk828c14;
        ::ll::UntypedStorage<4, 12> mUnk72a175;
        ::ll::UntypedStorage<4, 4>  mUnk584b15;
        ::ll::UntypedStorage<1, 1>  mUnk90a343;
        ::ll::UntypedStorage<1, 1>  mUnkf2db00;
        ::ll::UntypedStorage<1, 1>  mUnkc7c04c;
        ::ll::UntypedStorage<4, 4>  mUnk8945b9;
        // NOLINTEND

    public:
        // prevent constructor by default
        PillagerOutpostPiece& operator=(PillagerOutpostPiece const&);
        PillagerOutpostPiece(PillagerOutpostPiece const&);
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
        MCNAPI PillagerOutpostPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isSatellite,
            ::Dimension&                                      dimension
        );

        MCNAPI void _addMobsFromPositions(
            ::BoundingBox const&               chunkBB,
            ::ActorDefinitionIdentifier const& definition,
            ::BlockSource&                     region,
            ::std::vector<::BlockPos> const&   entityPositions
        );

        MCNAPI void _loadTemplate();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
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
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

        MCNAPI void $addHardcodedSpawnAreas(::LevelChunk& chunk) const;

        MCNAPI void $_handleDataMarker(
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
    MCNAPI static void _addPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::Dimension&                                        dimension
    );

    MCNAPI static void _addScatteredPieces(
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
    MCNAPI static ::std::array<::std::string_view, 7>& MSC_FEATURES();

    MCNAPI static ::std::string_view& PILLAGER_LOOT();

    MCNAPI static ::std::string_view& STRUCTURE_WATCHTOWER();

    MCNAPI static ::std::string_view& STRUCTURE_WATCHTOWER_OVERGROWN();
    // NOLINTEND
};
