#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverResult {
public:
    // prevent constructor by default
    AsyncDnsResolverResult& operator=(AsyncDnsResolverResult const&);
    AsyncDnsResolverResult(AsyncDnsResolverResult const&);
    AsyncDnsResolverResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncDnsResolverResult() = default;

    // vIndex: 1
    virtual bool GetResolvedAddress(int, ::rtc::SocketAddress*) const = 0;

    // vIndex: 2
    virtual int GetError() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
