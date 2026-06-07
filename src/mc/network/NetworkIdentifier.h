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
    MCAPI NetworkIdentifier();

    MCAPI explicit NetworkIdentifier(::sockaddr_in6 const& address);

    MCAPI explicit NetworkIdentifier(::sockaddr_in const& address);

    MCAPI explicit NetworkIdentifier(::RakNet::RakNetGUID const& guid);

    MCAPI explicit NetworkIdentifier(::NetherNet::NetworkID const& nethernetId);

    MCAPI bool equalsTypeData(::NetworkIdentifier const& other) const;

    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getNetherNetIDAsString() const;

    MCFOLD ::NetherNet::NetworkID const& getNetherNetId() const;
#endif

    MCAPI ::std::string getNetherNetOrRakNetIDAsString() const;

    MCFOLD ::RakNet::RakNetGUID const& getRakNetGUID() const;

    MCFOLD ::sockaddr_in const& getSocketAddress() const;

    MCFOLD ::sockaddr_in6 const& getSocketAddress6() const;

    MCFOLD ::NetworkIdentifier::Type getType() const;

#ifdef LL_PLAT_C
    MCAPI bool isType(::NetworkIdentifier::Type type) const;
#endif

    MCAPI bool isUnassigned() const;

#ifdef LL_PLAT_C
    MCAPI bool operator!=(::NetworkIdentifier const& other) const;
#endif

    MCAPI bool operator==(::NetworkIdentifier const& other) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string calculateCorrelationId(::NetherNet::NetworkID const& netherNetId);
#endif

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

    MCAPI void* $ctor(::sockaddr_in6 const& address);

    MCAPI void* $ctor(::sockaddr_in const& address);

    MCAPI void* $ctor(::RakNet::RakNetGUID const& guid);

    MCAPI void* $ctor(::NetherNet::NetworkID const& nethernetId);
    // NOLINTEND
};
