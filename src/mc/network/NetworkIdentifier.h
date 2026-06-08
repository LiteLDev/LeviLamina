#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"

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
    ::NetherNet::NetworkID       mNetherNetId;
    ::RakNet::RakNetGUID         mGuid;
    ::ll::UntypedStorage<8, 128> mSock;
    ::NetworkIdentifier::Type    mType;
    // NOLINTEND

public:
    LLNDAPI std::string getIPAndPort() const;

    [[nodiscard]] bool operator==(::NetworkIdentifier const& other) const { return equalsTypeData(other); }

public:
    NetworkIdentifier(::NetworkIdentifier const& other) = default;
    NetworkIdentifier()                                 = default;

public:
    // member functions
    // NOLINTBEGIN
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

namespace std {
template <>
struct hash<NetworkIdentifier> {
    size_t operator()(NetworkIdentifier const& d) const noexcept { return d.getHash(); }
};
} // namespace std
