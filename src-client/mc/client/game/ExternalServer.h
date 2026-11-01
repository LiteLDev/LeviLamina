#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/AsynchronousIPResolver.h"

struct ExternalServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                        id;
    ::ll::TypedStorage<4, 4, int>                                        port;
    ::ll::TypedStorage<4, 4, int>                                        protocol;
    ::ll::TypedStorage<4, 4, int>                                        players;
    ::ll::TypedStorage<4, 4, int>                                        maxPlayers;
    ::ll::TypedStorage<8, 32, ::std::string>                             name;
    ::ll::TypedStorage<8, 32, ::std::string>                             title;
    ::ll::TypedStorage<8, 32, ::std::string>                             version;
    ::ll::TypedStorage<8, 32, ::std::string>                             address;
    ::ll::TypedStorage<8, 8, int64>                                      lastAccessedTime;
    ::ll::TypedStorage<8, 72, ::std::optional<::AsynchronousIPResolver>> mFutureIP;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServer& operator=(ExternalServer const&);
    ExternalServer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalServer(::ExternalServer const&);

    MCNAPI
    ExternalServer(int id, ::std::string const& name, ::std::string const& address, int port, int64 lastJoinTime);

    MCNAPI ::AsynchronousIPResolver const& getFutureIP() const;

    MCNAPI ~ExternalServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExternalServer const&);

    MCNAPI void* $ctor(int id, ::std::string const& name, ::std::string const& address, int port, int64 lastJoinTime);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
