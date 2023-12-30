#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/AsyncResolverInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncResolver : public ::rtc::AsyncResolverInterface {
public:
    // AsyncResolver inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // AsyncResolver inner types define
    struct State {
    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1State@AsyncResolver@rtc@@UEAA@XZ
        virtual ~State() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AsyncResolver& operator=(AsyncResolver const&);
    AsyncResolver(AsyncResolver const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AsyncResolver@rtc@@UEAA@XZ
    virtual ~AsyncResolver();

    // vIndex: 1, symbol: ?Start@AsyncResolver@rtc@@UEAAXAEBVSocketAddress@2@@Z
    virtual void Start(class rtc::SocketAddress const&);

    // vIndex: 2, symbol: ?Start@AsyncResolver@rtc@@UEAAXAEBVSocketAddress@2@H@Z
    virtual void Start(class rtc::SocketAddress const&, int);

    // vIndex: 3, symbol: ?GetResolvedAddress@AsyncResolver@rtc@@UEBA_NHPEAVSocketAddress@2@@Z
    virtual bool GetResolvedAddress(int, class rtc::SocketAddress*) const;

    // vIndex: 4, symbol: ?GetError@AsyncResolver@rtc@@UEBAHXZ
    virtual int GetError() const;

    // vIndex: 5, symbol: ?Destroy@AsyncResolver@rtc@@UEAAX_N@Z
    virtual void Destroy(bool);

    // symbol: ??0AsyncResolver@rtc@@QEAA@XZ
    MCAPI AsyncResolver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MaybeSelfDestruct@AsyncResolver@rtc@@AEAAXXZ
    MCAPI void MaybeSelfDestruct();

    // symbol:
    // ?ResolveDone@AsyncResolver@rtc@@AEAAXV?$vector@VIPAddress@rtc@@V?$allocator@VIPAddress@rtc@@@std@@@std@@H@Z
    MCAPI void ResolveDone(std::vector<class rtc::IPAddress>, int);

    // NOLINTEND
};

}; // namespace rtc
