#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class DynDNS {
public:
    // DynDNS inner types define
    enum class ConnectPhase : int {
        ConnectingToCheckip = 0,
        WaitingForCheckipResponse = 1,
        ConnectingToDyndns = 2,
        WaitingForDyndnsResponse = 3,
        Idle = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf2974a;
    ::ll::UntypedStorage<8, 8> mUnk19e4c6;
    ::ll::UntypedStorage<8, 136> mUnk5358bf;
    ::ll::UntypedStorage<4, 4> mUnkd697c9;
    ::ll::UntypedStorage<8, 8> mUnkefeab4;
    ::ll::UntypedStorage<8, 8> mUnkc3496a;
    ::ll::UntypedStorage<8, 136> mUnk9b0b63;
    ::ll::UntypedStorage<8, 8> mUnk26117b;
    ::ll::UntypedStorage<4, 4> mUnk3348d7;
    ::ll::UntypedStorage<1, 32> mUnkcdc5b7;
    // NOLINTEND

public:
    // prevent constructor by default
    DynDNS& operator=(DynDNS const&);
    DynDNS(DynDNS const&);
    DynDNS();

};

}
