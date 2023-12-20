#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequestManager; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace cricket {

class StunRequest {
public:
    // prevent constructor by default
    StunRequest& operator=(StunRequest const&);
    StunRequest(StunRequest const&);
    StunRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StunRequest@cricket@@UEAA@XZ
    virtual ~StunRequest();

    // vIndex: 1, symbol: ?OnResponse@StunRequest@cricket@@MEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@StunRequest@cricket@@MEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@StunRequest@cricket@@MEAAXXZ
    virtual void OnTimeout();

    // vIndex: 4, symbol: ?OnSent@StunRequest@cricket@@MEAAXXZ
    virtual void OnSent();

    // vIndex: 5, symbol: ?resend_delay@StunRequest@cricket@@MEAAHXZ
    virtual int resend_delay();

    // symbol: ?Elapsed@StunRequest@cricket@@QEBAHXZ
    MCAPI int Elapsed() const;

    // symbol:
    // ??0StunRequest@cricket@@QEAA@AEAVStunRequestManager@1@V?$unique_ptr@VStunMessage@cricket@@U?$default_delete@VStunMessage@cricket@@@std@@@std@@@Z
    MCAPI StunRequest(class cricket::StunRequestManager&, std::unique_ptr<class cricket::StunMessage>);

    // symbol: ?msg@StunRequest@cricket@@QEBAPEBVStunMessage@2@XZ
    MCAPI class cricket::StunMessage const* msg() const;

    // symbol: ?type@StunRequest@cricket@@QEAAHXZ
    MCAPI int type();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Send@StunRequest@cricket@@IEAAXVTimeDelta@webrtc@@@Z
    MCAPI void Send(class webrtc::TimeDelta);

    // symbol: ?set_timed_out@StunRequest@cricket@@IEAAXXZ
    MCAPI void set_timed_out();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SendDelayed@StunRequest@cricket@@AEAAXVTimeDelta@webrtc@@@Z
    MCAPI void SendDelayed(class webrtc::TimeDelta);

    // symbol: ?SendInternal@StunRequest@cricket@@AEAAXXZ
    MCAPI void SendInternal();

    // NOLINTEND
};

}; // namespace cricket
