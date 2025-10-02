#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    using LoggingFunctor = ::std::function<void(::std::string const&)>;

    using Time = ::std::chrono::seconds;

    using Ip = ::std::array<::std::byte, 16>;

    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 16, ::std::array<::std::byte, 16>> ip;
        ::ll::TypedStorage<8, 8, ::std::chrono::seconds>         banTime;
        ::ll::TypedStorage<2, 2, ushort>                         count;
        // NOLINTEND
    };

    using BanCallback = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> banExpiryDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> appHandshakeGracePeriod;
    ::ll::TypedStorage<8, 10240, ::std::array<::std::optional<::RakNet::ShadowBanList::Entry>, 256>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                           mBanCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ushort addBan(::RakNet::SystemAddress const& addr, ::std::chrono::seconds time);
    // NOLINTEND
};

} // namespace RakNet
