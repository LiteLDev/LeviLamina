#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IUdpSocket; }
// clang-format on

namespace NetherNet {

class IUdpSocketFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUdpSocketFactory() = default;

    virtual ::std::unique_ptr<::NetherNet::IUdpSocket>
    createUdpSocket(::std::string const& localAddress, ushort minPort, ushort maxPort) = 0;
    // NOLINTEND
};

} // namespace NetherNet
