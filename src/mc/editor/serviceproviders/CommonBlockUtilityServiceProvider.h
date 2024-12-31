#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ChunkPos;
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityServiceProvider {
public:
    // prevent constructor by default
    CommonBlockUtilityServiceProvider& operator=(CommonBlockUtilityServiceProvider const&);
    CommonBlockUtilityServiceProvider(CommonBlockUtilityServiceProvider const&);
    CommonBlockUtilityServiceProvider();

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

} // namespace Editor::BlockUtils
