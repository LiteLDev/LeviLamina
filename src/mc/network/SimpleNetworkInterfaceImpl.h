#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/INetherNetTransportInterface.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class INetherNetTransportInterface; }
// clang-format on

namespace NetherNet {

class SimpleNetworkInterfaceImpl : public ::NetherNet::INetherNetTransportInterface {
public:
    // prevent constructor by default
    SimpleNetworkInterfaceImpl& operator=(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimpleNetworkInterfaceImpl@NetherNet@@UEAA@XZ
    virtual ~SimpleNetworkInterfaceImpl() = default;

    // NOLINTEND
};

}; // namespace NetherNet
