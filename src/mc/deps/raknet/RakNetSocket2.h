#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2Type.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct RNS2_SendParameters; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RakNetSocket2 : public ::std::enable_shared_from_this<::RakNet::RakNetSocket2> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk45c154;
    ::ll::UntypedStorage<4, 4>   mUnk71ae1a;
    ::ll::UntypedStorage<4, 4>   mUnkf42590;
    ::ll::UntypedStorage<8, 136> mUnk164a1f;
    ::ll::UntypedStorage<4, 4>   mUnk923992;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetSocket2& operator=(RakNetSocket2 const&);
    RakNetSocket2(RakNetSocket2 const&);
    RakNetSocket2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetSocket2() = default;

    // vIndex: 1
    virtual int Send(::RakNet::RNS2_SendParameters*, char const*, uint) = 0;

    // vIndex: 2
    virtual void SetMulticastInterface(int interfaceIndex);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RakNet::SystemAddress GetBoundAddress() const;

    MCFOLD ::RakNet::RNS2Type GetSocketType() const;

    MCFOLD uint GetUserConnectionSocketIndex() const;

    MCAPI bool IsBerkleySocket() const;

    MCAPI void SetUserConnectionSocketIndex(uint i);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void GetMyAdapters(::RakNet::NetworkAdapter* const adapters);

    MCAPI static void GetMyIP(::RakNet::SystemAddress* const addresses);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $SetMulticastInterface(int interfaceIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
