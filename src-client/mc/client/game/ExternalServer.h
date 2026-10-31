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
    MCAPI ExternalServer(::ExternalServer const&);

    MCAPI ExternalServer(int id, ::std::string const& name, ::std::string const& address, int port, int64 lastJoinTime);

    MCAPI ::AsynchronousIPResolver const& getFutureIP() const;

    MCAPI ~ExternalServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ExternalServer const&);

    MCAPI void* $ctor(int id, ::std::string const& name, ::std::string const& address, int port, int64 lastJoinTime);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
