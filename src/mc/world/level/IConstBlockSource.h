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

    // vIndex: 3
    virtual ::Block const& getBlock(int, int, int) const = 0;

    // vIndex: 2
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    // vIndex: 1
    virtual ::Block const& getBlock(::BlockPos const&, uint) const = 0;

    // vIndex: 4
    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const = 0;

    // vIndex: 5
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    // vIndex: 6
    virtual ::Block const& getLiquidBlock(::BlockPos const&) const = 0;

    // vIndex: 7
    virtual bool hasBlock(::BlockPos const&) const = 0;

    // vIndex: 8
    virtual bool containsAnyLiquid(::AABB const&) const = 0;

    // vIndex: 9
    virtual bool containsMaterial(::AABB const&, ::MaterialType) const = 0;

    // vIndex: 10
    virtual bool isUnderWater(::Vec3 const&, ::Block const&) const = 0;

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
    virtual void fetchAABBs(::std::vector<::AABB>&, ::AABB const&, bool) const = 0;

    // vIndex: 19
    virtual void
    fetchCollisionShapes(::std::vector<::AABB>&, ::AABB const&, bool, ::optional_ref<::GetCollisionShapeInterface const>, ::std::vector<::AABB>*)
        const = 0;

    // vIndex: 20
    virtual void
    fetchCollisionShapesAndBlocks(::std::vector<::BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<::GetCollisionShapeInterface const>, ::std::vector<::AABB>*)
        const = 0;

    // vIndex: 21
    virtual ::AABB
    getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<::GetCollisionShapeInterface const>) const = 0;

    // vIndex: 22
    virtual float getBrightness(::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool checkMaterial(::AABB const& box, ::MaterialType material) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
