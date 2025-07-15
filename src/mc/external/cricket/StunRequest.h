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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk89e87e;
    ::ll::UntypedStorage<8, 8> mUnk910cb8;
    ::ll::UntypedStorage<8, 8> mUnka0487a;
    ::ll::UntypedStorage<4, 4> mUnk7deb95;
    ::ll::UntypedStorage<1, 1> mUnkbc8af7;
    ::ll::UntypedStorage<8, 8> mUnk310b10;
    ::ll::UntypedStorage<1, 1> mUnkbce873;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRequest& operator=(StunRequest const&);
    StunRequest(StunRequest const&);
    StunRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StunRequest();

    // vIndex: 1
    virtual bool CheckSkip();

    // vIndex: 2
    virtual void OnResponse(::cricket::StunMessage* response);

    // vIndex: 3
    virtual void OnErrorResponse(::cricket::StunMessage* response);

    // vIndex: 4
    virtual void OnSkip();

    // vIndex: 5
    virtual void OnTimeout();

    // vIndex: 6
    virtual void OnSent();

    // vIndex: 7
    virtual int resend_delay();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int Elapsed() const;

    MCNAPI void Send(::webrtc::TimeDelta delay);

    MCNAPI void SendDelayed(::webrtc::TimeDelta delay);

    MCNAPI void SendInternal();

    MCNAPI StunRequest(::cricket::StunRequestManager& manager, ::std::unique_ptr<::cricket::StunMessage> message);

    MCNAPI ::cricket::StunMessage const* msg() const;

    MCNAPI void set_timed_out();

    MCNAPI int type();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::StunRequestManager& manager, ::std::unique_ptr<::cricket::StunMessage> message);
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

    MCNAPI void $OnResponse(::cricket::StunMessage* response);

    MCNAPI void $OnErrorResponse(::cricket::StunMessage* response);

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

} // namespace cricket
