#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class ChunkPos;
class CompoundBlockVolume;
class Dimension;
class Vec3;
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommonBlockUtilityServiceProvider() = default;

    // vIndex: 1
    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const&) const = 0;

    // vIndex: 2
    virtual bool isChunkLoaded(::ChunkPos const&) const = 0;

    // vIndex: 3
    virtual bool isChunkFullyLoaded(::ChunkPos const&) const = 0;

    // vIndex: 4
    virtual bool areChunksLoaded(::std::set<::ChunkPos> const&) const = 0;

    // vIndex: 5
    virtual bool isAreaLoaded(::AABB const&) const = 0;

    // vIndex: 6
    virtual ::CompoundBlockVolume
    getContiguousSelection(int const, ::Facing::Name const&, ::Vec3 const&, bool const, int const, bool const, ::Editor::BlockUtils::ContiguousSelectionType const&, ::std::vector<::std::string> const&)
        const = 0;

    // vIndex: 7
    virtual bool
    areBlocksContiguous(::Editor::BlockUtils::ContiguousSelectionType const&, ::Block const&, ::Block const&, ::std::vector<::std::string> const&)
        const = 0;

    // vIndex: 8
    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const&) const = 0;

    // vIndex: 9
    virtual ::AABB
    getBoundForContiguousSelection(::Vec3 const&, ::Facing::Name const&, int const, bool const) const = 0;

    // vIndex: 10
    virtual bool isBlockExposedInDirection(::Dimension const&, ::Vec3 const&, ::Facing::Name const&) const = 0;

    // vIndex: 11
    virtual bool isSameBlockType(::Block const&, ::Block const&) const = 0;

    // vIndex: 12
    virtual bool isSameBlockAndProperties(::Block const&, ::Block const&) const = 0;

    // vIndex: 13
    virtual bool isBlockTypeInSelectionList(::Block const&, ::std::vector<::std::string> const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::BlockUtils
