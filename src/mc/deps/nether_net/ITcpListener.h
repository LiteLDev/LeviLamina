#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class ITcpSocket; }
// clang-format on

namespace NetherNet {

class ITcpListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITcpListener() = default;

    virtual void
    setAcceptHandler(::brstd::move_only_function<void(::std::unique_ptr<::NetherNet::ITcpSocket>) const> handler) = 0;

    virtual ushort getLocalPort() const = 0;
    // NOLINTEND
};

} // namespace NetherNet
