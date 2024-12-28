#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
// clang-format on

class NetworkIdentifier {
public:
    // NetworkIdentifier inner types define
    enum class Type : int {
        RakNet    = 0,
        Address   = 1,
        Address6  = 2,
        NetherNet = 3,
        Invalid   = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                    mNetherNetIdValue;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     mGuid;
    ::ll::TypedStorage<8, 128, ::sockaddr_storage>      mSock;
    ::ll::TypedStorage<4, 4, ::NetworkIdentifier::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkIdentifier& operator=(NetworkIdentifier const&);
    NetworkIdentifier(NetworkIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkIdentifier();

    MCAPI explicit NetworkIdentifier(::sockaddr_in const& address);

    MCAPI explicit NetworkIdentifier(::sockaddr_in6 const& address);

    MCAPI explicit NetworkIdentifier(::RakNet::RakNetGUID const& guid);

    MCAPI explicit NetworkIdentifier(uint64 nethernetId);

    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

    MCAPI ::RakNet::RakNetGUID const& getRakNetGUID() const;

    MCAPI ::sockaddr_in const& getSocketAddress() const;

    MCAPI ::sockaddr_in6 const& getSocketAddress6() const;

    MCAPI ::NetworkIdentifier::Type getType() const;

    MCAPI bool isUnassigned() const;

    MCAPI bool operator==(::NetworkIdentifier const& other) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string calculateCorrelationId(uint64 netherNetId);

    MCAPI static ::std::string calculateCorrelationId(::RakNet::RakNetGUID const& rakId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::NetworkIdentifier& INVALID_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::sockaddr_in const& address);

    MCAPI void* $ctor(::sockaddr_in6 const& address);

    MCAPI void* $ctor(::RakNet::RakNetGUID const& guid);

    MCAPI void* $ctor(uint64 nethernetId);
    // NOLINTEND
};
