#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/AsyncJoinAllow.h"
#include "mc/network/AsyncJoinDeny.h"
#include "mc/network/SourceClientHash.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class ConnectionRequest;
class NetworkIdentifier;
class SubClientConnectionRequest;
class TaskGroup;
// clang-format on

class AsyncJoinTaskManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AsyncJoinTaskManager inner types declare
    // clang-format off
    struct PendingVerdictEntry;
    // clang-format on

    // AsyncJoinTaskManager inner types define
    struct PendingVerdictEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::Bedrock::Threading::Async<::std::vector<::Bedrock::Threading::SharedAsync<
                ::std::variant<::std::monostate, ::AsyncJoinAllow, ::AsyncJoinDeny>>>>>
                                                     pendingVerdict;
        ::ll::TypedStorage<1, 1, bool>               disconnected;
        ::ll::TypedStorage<8, 8, ::SourceClientHash> sourceClientHash;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingVerdictEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            uint64,
            ::brstd::move_only_function<void(
                ::NetworkIdentifier const&,
                ::std::variant<
                    ::std::reference_wrapper<::ConnectionRequest const>,
                    ::std::reference_wrapper<::SubClientConnectionRequest const>> const&,
                ::SubClientId,
                ::std::shared_ptr<::AsyncVerdictPromise>
            )>>>
                                                  mAsyncJoinCallbacks;
    ::ll::TypedStorage<8, 8, uint64>              mNextAsyncJoinCallbackId;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mAsyncJoinCallbacksMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::AsyncJoinTaskManager::PendingVerdictEntry>>
                                                                                     mPendingVerdicts;
    ::ll::TypedStorage<8, 8, uint64>                                                 mNextVerdictID;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>        mAsyncJoinTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                             mVerdictTimeout;
    ::ll::TypedStorage<8, 56, ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny>> mDefaultVerdict;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinTaskManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncJoinTaskManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AsyncJoinTaskManager(
        ::std::unique_ptr<::TaskGroup>                        taskGroup,
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> defaultJoinVerdict
    );

    MCAPI ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> _handleAllVerdictsTaskCompletion(
        ::SubClientId                                                                    subClientId,
        uint64                                                                           verdictId,
        ::std::vector<::Bedrock::Threading::SharedAsync<
            ::std::variant<::std::monostate, ::AsyncJoinAllow, ::AsyncJoinDeny>>> const& results
    );

    MCAPI ::Bedrock::Threading::Async<::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny>> handleAsyncJoinCallbacks(
        ::NetworkIdentifier const& source,
        ::std::variant<
            ::std::reference_wrapper<::ConnectionRequest const>,
            ::std::reference_wrapper<::SubClientConnectionRequest const>> const& request,
        ::SubClientId                                                            subClientId
    );

    MCAPI ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::std::variant<
                ::std::reference_wrapper<::ConnectionRequest const>,
                ::std::reference_wrapper<::SubClientConnectionRequest const>> const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                        taskGroup,
        ::nonstd::expected<::AsyncJoinAllow, ::AsyncJoinDeny> defaultJoinVerdict
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
