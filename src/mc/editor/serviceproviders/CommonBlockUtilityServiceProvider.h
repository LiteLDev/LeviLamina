#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class CompoundBlockVolume;
class Dimension;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockMask { class BlockMaskList; }
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonBlockUtilityServiceProvider() = default;

    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const& aabb) const = 0;

    virtual bool isChunkLoaded(::ChunkPos const& pos) const = 0;

    virtual bool isChunkFullyLoaded(::ChunkPos const& pos) const = 0;

    virtual bool areChunksLoaded(::std::set<::ChunkPos> const& chunks) const = 0;

    virtual bool isAreaLoaded(::AABB const& aabb) const = 0;

    virtual ::Editor::RelativeVolumeListBlockVolume trimVolumeToFitContents(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume,
        bool                                      retainMarqueeAfterTrimming,
        bool                                      ignoreLiquid,
        bool                                      ignoreNoCollision,
        ::Editor::BlockMask::BlockMaskList const& blockMask
    ) = 0;

    virtual ::Editor::RelativeVolumeListBlockVolume findObscuredBlocksWithinVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume
    ) = 0;

    virtual ::Editor::RelativeVolumeListBlockVolume shrinkWrapVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const
    ) = 0;

    virtual bool isLocationInsideDimensionBounds(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::Editor::RelativeVolumeListBlockVolume const*,
            ::Vec3 const*,
            ::BoundingBox const*,
            ::BlockPos const*> const test
    ) = 0;

    virtual ::CompoundBlockVolume getContiguousSelection(
        int const                                            size,
        ::Facing::Name const&                                selectionDirection,
        ::Vec3 const&                                        startingLocation,
        bool const                                           isFace,
        int const                                            fullSelectionToleranceLevel,
        bool const                                           checkForAdjacentFaceBlocks,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList
    ) const = 0;

    virtual bool areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::Block const&                                       blockToTest,
        ::Block const&                                       blockToFollow,
        ::std::vector<::std::string> const&                  allowList
    ) const = 0;

    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const& selectionDirection) const = 0;

    virtual ::Vec3 getDimensionMinLocation() const = 0;

    virtual ::Vec3 getDimensionMaxLocation() const = 0;

    virtual ::BoundingBox getDimensionLocationBoundingBox() const = 0;

    virtual ::AABB getBoundForContiguousSelection(
        ::Vec3 const&         initialLocation,
        ::Facing::Name const& selectionDirection,
        int const             size,
        bool const            isFace
    ) const = 0;

    virtual bool isBlockExposedInDirection(
        ::Dimension const&    dimension,
        ::Vec3 const&         targetLocation,
        ::Facing::Name const& direction
    ) const = 0;

    virtual bool isSameBlockType(::Block const& blockA, ::Block const& blockB) const = 0;

    virtual bool isSameBlockAndProperties(::Block const& blockA, ::Block const& blockB) const = 0;

    virtual bool
    isBlockTypeInSelectionList(::Block const& block, ::std::vector<::std::string> const& allowList) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::BlockUtils
