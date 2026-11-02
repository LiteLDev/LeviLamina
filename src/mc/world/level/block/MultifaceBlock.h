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
    virtual ~MultifaceBlock() /*override*/ = default;

    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual bool isMultifaceBlock() const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultifaceBlock(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );

    MCNAPI bool
    _canSpread(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos, uchar startingFace) const;

    MCNAPI void removeFace(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                faceDirection,
        bool                 canSpawnParticles
    ) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _getNumSides(::Block const& block);

    MCNAPI static bool _hasAnyFace(::Block const& block);

    MCNAPI static ::Block const& getBlockForPlacementWorldGen(
        ::Block const&       oldBlock,
        ::Block const&       placementBlock,
        ::IBlockWorldGenAPI& region,
        ::BlockPos const&    placementPos,
        uchar                placementDirection
    );

#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<uchar> getFacingListFromMask(uchar faceDirectionBits);
#endif

    MCNAPI static bool hasFace(::Block const& block, uchar faceDirection);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MULTIFACE_ALL();

    MCAPI static int const& MULTIFACE_DOWN();

    MCAPI static int const& MULTIFACE_EAST();

    MCAPI static int const& MULTIFACE_NORTH();

    MCNAPI static int const& MULTIFACE_SIDES();

    MCAPI static int const& MULTIFACE_SOUTH();

    MCAPI static int const& MULTIFACE_UP();

    MCAPI static int const& MULTIFACE_WEST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCNAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCNAPI bool $isMultifaceBlock() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
