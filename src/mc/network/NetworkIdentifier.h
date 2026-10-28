#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"

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
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>   mNetherNetId;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     mGuid;
    ::ll::TypedStorage<8, 128, ::sockaddr_storage>      mSock;
    ::ll::TypedStorage<4, 4, ::NetworkIdentifier::Type> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool equalsTypeData(::NetworkIdentifier const& other) const;

    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

    MCAPI bool isUnassigned() const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string calculateCorrelationId(::RakNet::RakNetGUID const& rakId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::NetworkIdentifier& INVALID_ID();
    // NOLINTEND
};
