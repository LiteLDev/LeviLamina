#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class ConnectionRequest;
class NetworkIdentifier;
class SubClientConnectionRequest;
struct AsyncJoinError;
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
        ::ll::UntypedStorage<8, 16> mUnk6b540f;
        ::ll::UntypedStorage<1, 1>  mUnk94d63a;
        ::ll::UntypedStorage<8, 8>  mUnkc03172;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingVerdictEntry& operator=(PendingVerdictEntry const&);
        PendingVerdictEntry(PendingVerdictEntry const&);
        PendingVerdictEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingVerdictEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5d42fa;
    ::ll::UntypedStorage<8, 8>  mUnk23c46a;
    ::ll::UntypedStorage<8, 8>  mUnkcf985a;
    ::ll::UntypedStorage<8, 64> mUnk4c473a;
    ::ll::UntypedStorage<8, 8>  mUnkd1bcc2;
    ::ll::UntypedStorage<8, 8>  mUnka0782c;
    ::ll::UntypedStorage<8, 8>  mUnkdeee51;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinTaskManager& operator=(AsyncJoinTaskManager const&);
    AsyncJoinTaskManager(AsyncJoinTaskManager const&);
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
    MCNAPI ::nonstd::expected<void, ::AsyncJoinError> _handleAllVerdictsTaskCompletion(
        ::SubClientId                                                                                       subClientId,
        uint64                                                                                              verdictId,
        ::std::vector<::Bedrock::Threading::SharedAsync<::nonstd::expected<void, ::AsyncJoinError>>> const& results
    );

    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<void, ::AsyncJoinError>> handleAsyncJoinCallbacks(
        ::NetworkIdentifier const& source,
        ::std::variant<
            ::std::reference_wrapper<::ConnectionRequest const>,
            ::std::reference_wrapper<::SubClientConnectionRequest const>> const& request,
        ::SubClientId                                                            subClientId
    );

    MCNAPI ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
