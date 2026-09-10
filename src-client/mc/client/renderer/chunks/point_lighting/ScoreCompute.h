#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on

namespace PointLighting::UpdatePhases {

struct ScoreCompute {
public:
    // ScoreCompute inner types declare
    // clang-format off
    struct PerHeuristicState;
    // clang-format on

    // ScoreCompute inner types define
    struct PerHeuristicState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<bool(::SubChunkPos const&)>> mFilter;
        ::ll::TypedStorage<8, 8, uint64>                                       mLightContainerFilteredSize;
        ::ll::TypedStorage<8, 8, uint64>                                       mLightContainerOffset;
        ::ll::TypedStorage<4, 4, float>                                        mMaxScore;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>>     mHeuristicScores;
        ::ll::TypedStorage<1, 1, bool>                                         mNormalized;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerHeuristicState();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        PerHeuristicState(::std::function<bool(::SubChunkPos const&)> filter, uint64 const lightContainerFilteredSize);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::function<bool(::SubChunkPos const&)> filter, uint64 const lightContainerFilteredSize);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>> mCurrentScores;
    ::ll::
        TypedStorage<8, 656, ::Bedrock::small_vector<::PointLighting::UpdatePhases::ScoreCompute::PerHeuristicState, 4>>
            mPerHeuristicState;
    // NOLINTEND
};

} // namespace PointLighting::UpdatePhases
