#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RNS2_Berkley.h"
#include "mc/deps/raknet/RNS2_Windows_Linux_360.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows : public ::RakNet::RNS2_Berkley, public ::RakNet::RNS2_Windows_Linux_360 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka92e53;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2_Windows& operator=(RNS2_Windows const&);
    RNS2_Windows(RNS2_Windows const&);
    RNS2_Windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RNS2_Windows() /*override*/ = default;

    // vIndex: 3
    virtual ::RakNet::RNS2BindResult Bind(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line) /*override*/;

    // vIndex: 1
    virtual int Send(::RakNet::RNS2_SendParameters* sendParameters, char const* file, uint line) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::RakNet::RNS2BindResult $Bind(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCAPI int $Send(::RakNet::RNS2_SendParameters* sendParameters, char const* file, uint line);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
