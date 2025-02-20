#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"

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
    LLNDAPI std::string getIPAndPort() const;

public:
    // member variables
    // NOLINTBEGIN
    uint64                       mNetherNetIdValue;
    ::RakNet::RakNetGUID         mGuid;
    ::ll::UntypedStorage<8, 128> mSock;
    ::NetworkIdentifier::Type    mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getAddress() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI uint64 getHash() const;

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
};
