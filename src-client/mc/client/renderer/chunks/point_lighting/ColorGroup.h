#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/PassState.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting::Detail { struct TransitioningStaticLight; }
// clang-format on

namespace PointLighting::Detail {

struct ColorGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mColorARGB;
    ::ll::TypedStorage<4, 4, float> mSharedLerp;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::BlockPos,
            ::PointLighting::Detail::TransitioningStaticLight,
            ::std::less<::BlockPos>,
            ::std::vector<::BlockPos>,
            ::std::vector<::PointLighting::Detail::TransitioningStaticLight>>>
        mLights;
    ::ll::TypedStorage<8, 24, ::brstd::flat_set<::BlockPos, ::std::less<::BlockPos>, ::std::vector<::BlockPos>>>
        mTransitioningLights;
    ::ll::TypedStorage<8, 24, ::brstd::flat_set<::BlockPos, ::std::less<::BlockPos>, ::std::vector<::BlockPos>>>
        mUnacquiredLights;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mDirtySubChunks;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::SubChunkPos,
            ::brstd::bitset<27, uint>,
            ::std::less<::SubChunkPos>,
            ::std::vector<::SubChunkPos>,
            ::std::vector<::brstd::bitset<27, uint>>>>
                                                                 mWrittenFootprint;
    ::ll::TypedStorage<4, 4, ::PointLighting::Detail::PassState> mPassState;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mInFlightSubChunks;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mPassOrigins;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mPassOldCells;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mPassNewCells;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::SubChunkPos, ::std::less<::SubChunkPos>, ::std::vector<::SubChunkPos>>>
            mPassClaimedNeighbors;
    // NOLINTEND
};

} // namespace PointLighting::Detail
