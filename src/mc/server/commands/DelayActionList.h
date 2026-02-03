#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DelayRequest;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class LevelStorage;
class ServerLevel;
// clang-format on

class DelayActionList {
public:
    // DelayActionList inner types declare
    // clang-format off
    class DelayRequestQueue;
    // clang-format on

    // DelayActionList inner types define
    class DelayRequestQueue : public ::MovePriorityQueue<::DelayRequest, ::std::greater<::DelayRequest>> {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int removeRequestWithAction(
            ::DimensionDataSerializer          dimensionDataSerializer,
            ::LevelStorage&                    levelStorage,
            ::gsl::not_null<::IRequestAction*> actionToRemove
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DelayActionList::DelayRequestQueue> mDelayRequests;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>             mDimensionDataSerializer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DelayActionList() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadRequest(
        ::Dimension&                  dimension,
        ::std::string const&          key,
        ::CompoundTag const&          tag,
        ::ICommandOriginLoader&       loader,
        uint64                        currentTick,
        ::std::vector<::std::string>& invalidRequestsOut
    );

    MCNAPI void _loadRequests(
        ::Dimension&            dimension,
        ::LevelStorage&         levelStorage,
        ::ICommandOriginLoader& loader,
        uint64                  currentTick
    );

    MCNAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::DelayRequest  request,
        ::LevelStorage& levelStorage,
        ::Dimension&    dimension,
        uint64          currentTick,
        bool            allowDuplicates
    );

    MCNAPI void
    _saveRequest(::DelayRequest& request, ::std::string const& dimensionPrefix, ::LevelStorage& levelStorage);

    MCNAPI void tick(::ServerLevel& level, ::Dimension& dimension, uint64 currentTick);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
