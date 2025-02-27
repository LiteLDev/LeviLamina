#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/biome/OceanTempCategory.h"
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
struct OceanRuinConfiguration;
// clang-format on

class OceanRuinPieces {
public:
    // OceanRuinPieces inner types declare
    // clang-format off
    class OceanRuinPiece;
    // clang-format on

    // OceanRuinPieces inner types define
    class OceanRuinPiece : public ::TemplateStructurePiece {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkedc396;
        ::ll::UntypedStorage<8, 32> mUnke834c0;
        ::ll::UntypedStorage<4, 4>  mUnkeae53e;
        ::ll::UntypedStorage<4, 4>  mUnk3c1b82;
        ::ll::UntypedStorage<1, 1>  mUnk82275a;
        ::ll::UntypedStorage<1, 1>  mUnkd02750;
        ::ll::UntypedStorage<4, 12> mUnk1647b1;
        ::ll::UntypedStorage<8, 8>  mUnka09d74;
        // NOLINTEND

    public:
        // prevent constructor by default
        OceanRuinPiece& operator=(OceanRuinPiece const&);
        OceanRuinPiece(OceanRuinPiece const&);
        OceanRuinPiece();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ::StructurePieceType getType() const /*override*/;

        // vIndex: 4
        virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

        // vIndex: 13
        virtual void _handleDataMarker(
            ::std::string const& markerId,
            ::BlockPos const&    position,
            ::BlockSource&       region,
            ::Random&            random,
            ::BoundingBox const& chunkBB
        ) /*override*/;

        // vIndex: 0
        virtual ~OceanRuinPiece() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI OceanRuinPiece(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
            ::std::string                                     templateName,
            ::BlockPos const&                                 origin,
            ::Rotation                                        rotation,
            float                                             integrity,
            bool                                              isLarge,
            ::OceanTempCategory                               type
        );

        MCAPI int _getHeight(::BlockPos& pos, ::BlockSource& region, ::BlockPos const& corner);

        MCAPI void _loadTemplate();
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
            bool                                              isLarge,
            ::OceanTempCategory                               type
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

        MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

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

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addClusterRuins(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::Random&                                           random,
        ::Rotation const&                                   rotation,
        ::BlockPos const&                                   parentPos,
        ::OceanRuinConfiguration const&                     configuration,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces
    );

    MCAPI static void _addPiece(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::OceanRuinConfiguration const&                     configuration,
        bool                                                isLarge,
        float                                               baseIntegrity
    );

    MCAPI static ::std::vector<::BlockPos> _allPositions(::Random& random, int cornerX, int cornerY, int cornerZ);

    MCAPI static void addPieces(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>   structureManager,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        ::OceanRuinConfiguration const&                     configuration
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view& BIG_RUIN_LOOT();

    MCAPI static ::std::string_view& RUIN_LOOT();

    MCAPI static ::std::string_view& STRUCTURE_BIG_RUIN1_BRICK();

    MCAPI static ::std::string_view& STRUCTURE_BIG_RUIN8_BRICK();

    MCAPI static ::std::string_view& STRUCTURE_RUIN_2_BRICK();

    MCAPI static ::std::string_view& STRUCTURE_RUIN_3_BRICK();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> bigRuinsBrick();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> bigRuinsCracked();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> bigRuinsMossy();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> bigWarmRuins();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> ruinsBrick();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> ruinsCracked();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> ruinsMossy();

    MCAPI static ::std::add_lvalue_reference_t<::std::string_view[]> warmRuins();
    // NOLINTEND
};
