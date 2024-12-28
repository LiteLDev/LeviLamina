#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/world/level/chunk/QueueRequestResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DelayRequest;
class Dimension;
class DimensionDataSerializer;
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
        // prevent constructor by default
        DelayRequestQueue& operator=(DelayRequestQueue const&);
        DelayRequestQueue(DelayRequestQueue const&);
        DelayRequestQueue();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI int removeRequestWithAction(
            ::DimensionDataSerializer          dimensionDataSerializer,
            ::LevelStorage&                    levelStorage,
            ::gsl::not_null<::IRequestAction*> actionToRemove
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkeceaf4;
    ::ll::UntypedStorage<4, 4>  mUnk7cbe33;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayActionList& operator=(DelayActionList const&);
    DelayActionList(DelayActionList const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DelayActionList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DelayActionList();

    MCAPI void _loadRequest(
        ::Dimension&                  dimension,
        ::std::string const&          key,
        ::CompoundTag const&          tag,
        ::ICommandOriginLoader&       loader,
        uint64                        currentTick,
        ::std::vector<::std::string>& invalidRequestsOut
    );

    MCAPI void _loadRequests(
        ::Dimension&            dimension,
        ::LevelStorage&         levelStorage,
        ::ICommandOriginLoader& loader,
        uint64                  currentTick
    );

    MCAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::DelayRequest  request,
        ::LevelStorage& levelStorage,
        ::Dimension&    dimension,
        uint64          currentTick,
        bool            allowDuplicates
    );

    MCAPI void
    _saveRequest(::DelayRequest& request, ::std::string const& dimensionPrefix, ::LevelStorage& levelStorage);

    MCAPI int clearRequestWithAction(::LevelStorage& levelStorage, ::gsl::not_null<::IRequestAction*> actionToRemove);

    MCAPI void
    loadRequests(::Dimension& dimension, ::LevelStorage& storage, ::ICommandOriginLoader& loader, uint64 currentTick);

    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        ::DelayRequest request,
        ::Dimension&   dimension,
        uint64         currentTick,
        bool           allowDuplicates
    );

    MCAPI void tick(::ServerLevel& level, ::Dimension& dimension, uint64 currentTick);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
