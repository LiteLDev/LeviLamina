#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncResolverInterface {
public:
    // prevent constructor by default
    AsyncResolverInterface& operator=(AsyncResolverInterface const&);
    AsyncResolverInterface(AsyncResolverInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AsyncResolverInterface@rtc@@UEAA@XZ
    virtual ~AsyncResolverInterface();

    // vIndex: 1, symbol: ?Start@AsyncResolver@rtc@@UEAAXAEBVSocketAddress@2@@Z
    virtual void Start(class rtc::SocketAddress const&) = 0;

    // vIndex: 2, symbol: ?Start@AsyncResolver@rtc@@UEAAXAEBVSocketAddress@2@H@Z
    virtual void Start(class rtc::SocketAddress const&, int) = 0;

    // vIndex: 3, symbol: ?GetResolvedAddress@AsyncResolver@rtc@@UEBA_NHPEAVSocketAddress@2@@Z
    virtual bool GetResolvedAddress(int, class rtc::SocketAddress*) const = 0;

    // vIndex: 4, symbol: ?GetError@AsyncResolver@rtc@@UEBAHXZ
    virtual int GetError() const = 0;

    // vIndex: 5, symbol: ?Destroy@AsyncResolver@rtc@@UEAAX_N@Z
    virtual void Destroy(bool) = 0;

    // symbol: ??0AsyncResolverInterface@rtc@@QEAA@XZ
    MCAPI AsyncResolverInterface();

    // NOLINTEND
};

}; // namespace rtc
