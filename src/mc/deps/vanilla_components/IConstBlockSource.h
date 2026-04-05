#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockPos;
class Dimension;
class GetCollisionShapeInterface;
class LevelChunk;
class Material;
class Vec3;
struct Bounds;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class IConstBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IConstBlockSource() = default;

    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;

    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const = 0;

    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;

    virtual ::Block const& getLiquidBlock(::BlockPos const& pos) const = 0;

    virtual bool hasBlock(::BlockPos const& pos) const = 0;

    virtual bool containsAnyLiquid(::AABB const& box) const = 0;

    virtual bool containsMaterial(::AABB const& box, ::MaterialType material) const = 0;

    virtual bool isInWall(::Vec3 const& pos) const = 0;

    virtual bool isUnderWater(::BlockPos const& pos, ::Block const& block) const = 0;

    virtual ::Material const& getMaterial(::BlockPos const& pos) const = 0;

    virtual ::Material const& getMaterial(int x, int y, int z) const = 0;

    virtual bool hasBorderBlock(::BlockPos const pos) const = 0;

    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const = 0;

    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const = 0;

    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const = 0;

    virtual ::DimensionType getDimensionId() const = 0;

    virtual bool shouldFireEvents(::LevelChunk const& c) const = 0;

    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const = 0;

    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const = 0;

    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const = 0;

    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const = 0;

    virtual float getBrightness(::BlockPos const& pos) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
