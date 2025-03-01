#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class SubChunkPos;
class SubChunkRequestSubscriber;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class SubChunkRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::DimensionType, ::SubChunkPos>>> mQueuedRequests;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::DimensionType,
            ::std::unordered_map<::SubChunkPos, ::std::vector<::SubChunkRequestSubscriber*>>>>
        mActiveSubChunkRequests;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::DimensionType,
            ::std::unordered_map<::SubChunkPos, ::std::chrono::steady_clock::time_point>>>
                                                           mActiveSubChunkRequestStartTimes;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mQueuedRequestsMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mActiveRequestsMutex;
    // NOLINTEND
};
