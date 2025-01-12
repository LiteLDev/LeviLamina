#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ServerHello {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfa542c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerHello& operator=(ServerHello const&);
    ServerHello(ServerHello const&);
    ServerHello();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::NetherNet::NetworkID GetId() const;

    MCAPI explicit ServerHello(::NetherNet::NetworkID localId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::NetherNet::NetworkID localId);
    // NOLINTEND
};

} // namespace NetherNet
