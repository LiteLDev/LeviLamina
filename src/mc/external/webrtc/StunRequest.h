#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunRequestManager; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc34d62;
    ::ll::UntypedStorage<8, 8>  mUnk29f66e;
    ::ll::UntypedStorage<8, 8>  mUnk81e988;
    ::ll::UntypedStorage<8, 8>  mUnk62cb0c;
    ::ll::UntypedStorage<4, 4>  mUnk1c8a21;
    ::ll::UntypedStorage<1, 1>  mUnk9ce65a;
    ::ll::UntypedStorage<8, 8>  mUnk3040dc;
    ::ll::UntypedStorage<1, 1>  mUnk96ad03;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRequest& operator=(StunRequest const&);
    StunRequest(StunRequest const&);
    StunRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StunRequest();

    virtual bool CheckSkip();

    virtual void OnResponse(::webrtc::StunMessage* response);

    virtual void OnErrorResponse(::webrtc::StunMessage* response);

    virtual void OnSkip();

    virtual void OnTimeout();

    virtual void OnSent();

    virtual int resend_delay();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta Elapsed() const;

    MCNAPI void Send(::webrtc::TimeDelta delay);

    MCNAPI void SendDelayed(::webrtc::TimeDelta delay);

    MCNAPI void SendInternal();

    MCNAPI StunRequest(
        ::webrtc::Environment const&             env,
        ::webrtc::StunRequestManager&            manager,
        ::std::unique_ptr<::webrtc::StunMessage> message
    );

    MCNAPI ::webrtc::StunMessage const* msg() const;

    MCNAPI void set_timed_out();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&             env,
        ::webrtc::StunRequestManager&            manager,
        ::std::unique_ptr<::webrtc::StunMessage> message
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $CheckSkip();

    MCNAPI void $OnResponse(::webrtc::StunMessage* response);

    MCNAPI void $OnErrorResponse(::webrtc::StunMessage* response);

    MCNAPI void $OnSkip();

    MCNAPI void $OnTimeout();

    MCNAPI void $OnSent();

    MCNAPI int $resend_delay();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
