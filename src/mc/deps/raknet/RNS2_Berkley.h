#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk55931b;
    ::ll::UntypedStorage<8, 64> mUnk7a66ff;
    ::ll::UntypedStorage<4, 4>  mUnka056d9;
    ::ll::UntypedStorage<1, 1>  mUnk5cd8af;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2_Berkley& operator=(RNS2_Berkley const&);
    RNS2_Berkley(RNS2_Berkley const&);
    RNS2_Berkley();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RNS2_Berkley() /*override*/ = default;

    virtual void SetMulticastInterface(int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
