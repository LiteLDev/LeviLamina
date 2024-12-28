#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RakNetSocket2.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_BerkleyBindParameters; }
// clang-format on

namespace RakNet {

class IRNS2_Berkley : public ::RakNet::RakNetSocket2 {
public:
    // prevent constructor by default
    IRNS2_Berkley& operator=(IRNS2_Berkley const&);
    IRNS2_Berkley(IRNS2_Berkley const&);
    IRNS2_Berkley();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::RakNet::RNS2BindResult Bind(::RakNet::RNS2_BerkleyBindParameters*, char const*, uint) = 0;

    // vIndex: 0
    virtual ~IRNS2_Berkley() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
