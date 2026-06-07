#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakPeer.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // ShadowBanList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ShadowBanList inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 16> mUnkf16431;
        ::ll::UntypedStorage<8, 8>  mUnke80799;
        ::ll::UntypedStorage<2, 2>  mUnk309783;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    };

    using BanCallback = ::std::function<void(::std::string const&)>;

    using Ip = ::std::array<::std::byte, 16>;

    using LoggingFunctor = ::std::function<void(::std::string const&)>;

    using Time = ::std::chrono::seconds;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> banExpiryDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> appHandshakeGracePeriod;
    ::ll::TypedStorage<8, 10240, ::std::array<::std::optional<::RakNet::ShadowBanList::Entry>, 256>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                           mBanCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowBanList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShadowBanList(
        ::std::function<void(::std::string const&)> addBanCallback,
        ::std::chrono::seconds                      banExpiryDuration,
        ::std::chrono::seconds                      appHandshakeGracePeriod
    );

    MCAPI ushort addBan(::RakNet::SystemAddress const& addr, ::std::chrono::seconds time);

    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* shouldDisconnectConnection(
        ::RakNet::SystemAddress                             srcAddr,
        ::std::chrono::seconds                              now,
        ::gsl::span<::RakNet::RakPeer::RemoteSystemStruct*> remotes
    );

    MCAPI bool tryUnban(::RakNet::SystemAddress const& addr);

    MCAPI uint64 updateBans(::std::chrono::seconds now);

    MCAPI ~ShadowBanList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<void(::std::string const&)> addBanCallback,
        ::std::chrono::seconds                      banExpiryDuration,
        ::std::chrono::seconds                      appHandshakeGracePeriod
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
