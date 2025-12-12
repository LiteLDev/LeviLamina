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

    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const&) const = 0;

    virtual bool isChunkLoaded(::ChunkPos const&) const = 0;

    virtual bool isChunkFullyLoaded(::ChunkPos const&) const = 0;

    virtual bool areChunksLoaded(::std::set<::ChunkPos> const&) const = 0;

    virtual bool isAreaLoaded(::AABB const&) const = 0;

    virtual ::Editor::RelativeVolumeListBlockVolume trimVolumeToFitContents(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const,
        bool,
        bool,
        bool,
        ::Editor::BlockMask::BlockMaskList const&
    ) = 0;

    virtual ::Editor::RelativeVolumeListBlockVolume findObscuredBlocksWithinVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const
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
            ::BlockPos const*> const
    ) = 0;

    virtual ::CompoundBlockVolume getContiguousSelection(
        int const,
        ::Facing::Name const&,
        ::Vec3 const&,
        bool const,
        int const,
        bool const,
        ::Editor::BlockUtils::ContiguousSelectionType const&,
        ::std::vector<::std::string> const&
    ) const = 0;

    virtual bool areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const&,
        ::Block const&,
        ::Block const&,
        ::std::vector<::std::string> const&
    ) const = 0;

    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const&) const = 0;

    virtual ::Vec3 getDimensionMinLocation() const = 0;

    virtual ::Vec3 getDimensionMaxLocation() const = 0;

    virtual ::BoundingBox getDimensionLocationBoundingBox() const = 0;

    virtual ::AABB
    getBoundForContiguousSelection(::Vec3 const&, ::Facing::Name const&, int const, bool const) const = 0;

    virtual bool isBlockExposedInDirection(::Dimension const&, ::Vec3 const&, ::Facing::Name const&) const = 0;

    virtual bool isSameBlockType(::Block const&, ::Block const&) const = 0;

    virtual bool isSameBlockAndProperties(::Block const&, ::Block const&) const = 0;

    virtual bool isBlockTypeInSelectionList(::Block const&, ::std::vector<::std::string> const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::BlockUtils
