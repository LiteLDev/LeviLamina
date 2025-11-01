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
    // vIndex: 0
    virtual ~IConstBlockSource() = default;

    // vIndex: 2
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    // vIndex: 1
    virtual ::Block const& getBlock(::BlockPos const&, uint) const = 0;

    // vIndex: 3
    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const = 0;

    // vIndex: 4
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    // vIndex: 5
    virtual ::Block const& getLiquidBlock(::BlockPos const&) const = 0;

    // vIndex: 6
    virtual bool hasBlock(::BlockPos const&) const = 0;

    // vIndex: 7
    virtual bool containsAnyLiquid(::AABB const&) const = 0;

    // vIndex: 8
    virtual bool containsMaterial(::AABB const&, ::MaterialType) const = 0;

    // vIndex: 9
    virtual bool isInWall(::Vec3 const&) const = 0;

    // vIndex: 10
    virtual bool isUnderWater(::BlockPos const&, ::Block const&) const = 0;

    // vIndex: 12
    virtual ::Material const& getMaterial(::BlockPos const&) const = 0;

    // vIndex: 11
    virtual ::Material const& getMaterial(int, int, int) const = 0;

    // vIndex: 13
    virtual bool hasBorderBlock(::BlockPos const) const = 0;

    // vIndex: 16
    virtual bool hasChunksAt(::Bounds const&, bool) const = 0;

    // vIndex: 15
    virtual bool hasChunksAt(::BlockPos const&, int, bool) const = 0;

    // vIndex: 14
    virtual bool hasChunksAt(::AABB const&, bool) const = 0;

    // vIndex: 17
    virtual ::DimensionType getDimensionId() const = 0;

    // vIndex: 18
    virtual bool shouldFireEvents(::LevelChunk const&) const = 0;

    // vIndex: 19
    virtual void fetchAABBs(::std::vector<::AABB>&, ::AABB const&, bool) const = 0;

    // vIndex: 20
    virtual void fetchCollisionShapes(::std::vector<::AABB>&, ::AABB const&, bool, ::optional_ref<::GetCollisionShapeInterface const>, ::std::vector<::AABB>*) const = 0;

    // vIndex: 21
    virtual void fetchCollisionShapesAndBlocks(::std::vector<::BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<::GetCollisionShapeInterface const>, ::std::vector<::AABB>*) const = 0;

    // vIndex: 22
    virtual ::AABB getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<::GetCollisionShapeInterface const>) const = 0;

    // vIndex: 23
    virtual float getBrightness(::BlockPos const&) const = 0;

    // vIndex: 24
    virtual float getVisualLiquidHeight(::Vec3 const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
