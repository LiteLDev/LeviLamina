#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/network/services/signaling/MessagePerformance.h"

// auto generated forward declare list
// clang-format off
class MessagePerformance;
namespace NetherNet { struct NetworkID; }
namespace mce { class UUID; }
// clang-format on

class MessageTracker {
public:
    // MessageTracker inner types declare
    // clang-format off
    struct MessageStatus;
    // clang-format on

    // MessageTracker inner types define
    struct MessageStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke1b276;
        ::ll::UntypedStorage<8, 16> mUnkc4ec43;
        ::ll::UntypedStorage<8, 16> mUnkff686d;
        ::ll::UntypedStorage<8, 64> mUnk8f7071;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::MessageTracker::MessageStatus& operator=(::MessageTracker::MessageStatus&&);

        MCNAPI ~MessageStatus();
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
    ::ll::UntypedStorage<8, 16> mUnk3969f8;
    ::ll::UntypedStorage<8, 80> mUnkc507e5;
    ::ll::UntypedStorage<8, 56> mUnke23a24;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageTracker& operator=(MessageTracker const&);
    MessageTracker(MessageTracker const&);
    MessageTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::MessagePerformance> _clear();

    MCNAPI void _complete(
        ::NetherNet::ESessionError        result,
        ::mce::UUID                       key,
        ::MessageTracker::MessageStatus&& value,
        ::MessagePerformance::Status      status
    );

    MCNAPI void _continueTracking(::mce::UUID key, ::MessageTracker::MessageStatus&& value);

    MCNAPI void _tryGetValue(
        ::std::string const&                                                    messageId,
        ::std::function<void(::mce::UUID, ::MessageTracker::MessageStatus&&)>&& fn
    );

    MCNAPI void add(::std::string const& messageId, ::std::function<void(::NetherNet::ESessionError)>&& onComplete);

    MCNAPI void messageAccepted(::std::string const& messageId);

    MCNAPI void messageError(::std::string const& messageId, ::NetherNet::ESessionError error);

    MCNAPI void messageSent(
        ::NetherNet::NetworkID to,
        ::std::string const&   message,
        ::std::string const&   messageId,
        ::std::error_code      error
    );

    MCNAPI ~MessageTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
