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
    // member functions
    // NOLINTBEGIN
    MCAPI bool equalsTypeData(::NetworkIdentifier const& other) const;

    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

    MCAPI ::std::string getNetherNetOrRakNetIDAsString() const;

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

namespace std {
template <>
struct hash<NetworkIdentifier> {
    size_t operator()(NetworkIdentifier const& d) const noexcept { return d.getHash(); }
};
} // namespace std
