#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ClientHello {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9c7398;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientHello& operator=(ClientHello const&);
    ClientHello(ClientHello const&);
    ClientHello();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientHello(::NetherNet::NetworkID localId);

    MCAPI ::NetherNet::NetworkID GetId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::NetworkID localId);
    // NOLINTEND
};

} // namespace NetherNet
