#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class PacketSender;
class SubChunkPacket;
class SubChunkPos;
class SubChunkRequestSubscriber;
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
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>          mQueuedRequestsMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mActiveRequestsMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void completeSubChunkRequest(::SubChunkPacket const& packet);

    MCAPI_C bool containsRequesterAtRequest(
        ::DimensionType const&       dimensionType,
        ::SubChunkPos const&         subChunkPosition,
        ::SubChunkRequestSubscriber* requester
    ) const;

    MCAPI_C bool
    isPositionInProgress(::DimensionType const& dimensionType, ::SubChunkPos const& subChunkPosition) const;

    MCAPI_C void queueSubChunkRequest(
        ::DimensionType const&       dimensionType,
        ::SubChunkPos const&         subChunkPosition,
        ::SubChunkRequestSubscriber* requester
    );

    MCAPI_C void sendSubChunkRequests(
        ::PacketSender*        sender,
        ::SubChunkPos const&   playerSubChunkPosition,
        ::DimensionType const& playerDimension
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
