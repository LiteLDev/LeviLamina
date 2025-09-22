#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IBlockWorldGenAPI;
class IConstBlockSource;
class Material;
class MultifaceSpreader;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class MultifaceBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MultifaceSpreader const>> mSpreader;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultifaceBlock() /*override*/ = default;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    // vIndex: 4
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 43
    virtual bool isMultifaceBlock() const /*override*/;

    // vIndex: 30
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 50
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MultifaceBlock(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );

    MCAPI bool
    _canSpread(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos, uchar startingFace) const;

    MCAPI void _removeBlock(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    pos,
        bool                 canSpawnParticles
    ) const;

    MCAPI void removeFace(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                faceDirection,
        bool                 canSpawnParticles
    ) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _hasAnyFace(::Block const& block);

    MCAPI static ::Block const& getBlockForPlacement(
        ::Block const&    oldBlock,
        ::Block const&    placementBlock,
        ::BlockSource&    region,
        ::BlockPos const& placementPos,
        uchar             placementDirection
    );

    MCAPI static ::Block const& getBlockForPlacementOrFillMoreFaces(
        ::Block const&    oldBlock,
        ::Block const&    placementBlock,
        ::BlockSource&    region,
        ::BlockPos const& placementPos,
        uchar             placementDirection
    );

    MCAPI static ::Block const& getBlockForPlacementWorldGen(
        ::Block const&       oldBlock,
        ::Block const&       placementBlock,
        ::IBlockWorldGenAPI& region,
        ::BlockPos const&    placementPos,
        uchar                placementDirection
    );

    MCAPI static bool hasFace(::Block const& block, uchar faceDirection);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MULTIFACE_ALL();

    MCAPI static int const& MULTIFACE_DOWN();

    MCAPI static int const& MULTIFACE_EAST();

    MCAPI static int const& MULTIFACE_NORTH();

    MCAPI static int const& MULTIFACE_SIDES();

    MCAPI static int const& MULTIFACE_SOUTH();

    MCAPI static int const& MULTIFACE_UP();

    MCAPI static int const& MULTIFACE_WEST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCFOLD bool $isMultifaceBlock() const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
