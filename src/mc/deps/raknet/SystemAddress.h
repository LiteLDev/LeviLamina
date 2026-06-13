#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 128> sa_stor;
        ::ll::UntypedStorage<4, 128> addr6;
        ::ll::UntypedStorage<2, 128> addr4;
    } address;
    ushort debugPort;
    ushort systemIndex;
    // NOLINTEND

    LLNDAPI bool operator==(SystemAddress const& other) const;

public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&) = default;


public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FixForIPVersion(::RakNet::SystemAddress const& boundAddressToSocket);

    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI bool FromStringExplicitPort(char const* str, ushort port, int ipVersion);

    MCAPI ::std::string GetIPString() const;

    MCAPI uchar GetIPVersion() const;

    MCAPI ushort GetPort() const;

#ifdef LL_PLAT_S
    MCFOLD ushort GetPortNetworkOrder() const;
#endif

    MCAPI bool IsLinkLocalAddress() const;

    MCAPI bool IsLoopback() const;

    MCAPI void SetPortHostOrder(ushort s);

    MCAPI SystemAddress();

    MCAPI ::std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;

    MCAPI bool operator!=(::RakNet::SystemAddress const& right) const;

    MCAPI ::RakNet::SystemAddress& operator=(::RakNet::SystemAddress const& input);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
