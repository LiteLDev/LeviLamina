#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace NetherNet {

struct GlobalTransportFactory : public ::webrtc::RefCountInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk30b53d;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalTransportFactory& operator=(GlobalTransportFactory const&);
    GlobalTransportFactory(GlobalTransportFactory const&);
    GlobalTransportFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~GlobalTransportFactory() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
