#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ITcpListener; }
namespace NetherNet { class IUdpSocket; }
// clang-format on

namespace NetherNet {

class ISocketFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISocketFactory() = default;

    virtual ::std::unique_ptr<::NetherNet::IUdpSocket>
    createUdpSocket(::std::string const& localAddress, ushort minPort, ushort maxPort) = 0;

    virtual ::std::unique_ptr<::NetherNet::ITcpListener>
    listen(::std::string const& localAddress, ushort minPort, ushort maxPort) = 0;
    // NOLINTEND
};

} // namespace NetherNet
