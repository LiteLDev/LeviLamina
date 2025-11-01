#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtmfSenderInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtmfProviderInterface; }
namespace webrtc { class DtmfSenderObserverInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class DtmfSender : public ::webrtc::DtmfSenderInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd6bd47;
    ::ll::UntypedStorage<8, 8> mUnk21b030;
    ::ll::UntypedStorage<8, 8> mUnkbf0747;
    ::ll::UntypedStorage<8, 32> mUnk6cc6ab;
    ::ll::UntypedStorage<4, 4> mUnk608050;
    ::ll::UntypedStorage<4, 4> mUnk1254b5;
    ::ll::UntypedStorage<4, 4> mUnk272c56;
    ::ll::UntypedStorage<8, 8> mUnk5ce99e;
    // NOLINTEND

public:
    // prevent constructor by default
    DtmfSender& operator=(DtmfSender const&);
    DtmfSender(DtmfSender const&);
    DtmfSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void RegisterObserver(::webrtc::DtmfSenderObserverInterface* observer) /*override*/;

    // vIndex: 4
    virtual void UnregisterObserver() /*override*/;

    // vIndex: 5
    virtual bool CanInsertDtmf() /*override*/;

    // vIndex: 6
    virtual bool InsertDtmf(::std::string const& tones, int duration, int inter_tone_gap, int comma_delay) /*override*/;

    // vIndex: 8
    virtual ::std::string tones() const /*override*/;

    // vIndex: 9
    virtual int duration() const /*override*/;

    // vIndex: 10
    virtual int inter_tone_gap() const /*override*/;

    // vIndex: 11
    virtual int comma_delay() const /*override*/;

    // vIndex: 2
    virtual ~DtmfSender() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DoInsertDtmf();

    MCNAPI DtmfSender(::webrtc::TaskQueueBase* signaling_thread, ::webrtc::DtmfProviderInterface* provider);

    MCNAPI void OnDtmfProviderDestroyed();

    MCNAPI void QueueInsertDtmf(uint delay_ms);

    MCNAPI void StopSending();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::DtmfSender> Create(::webrtc::TaskQueueBase* signaling_thread, ::webrtc::DtmfProviderInterface* provider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase* signaling_thread, ::webrtc::DtmfProviderInterface* provider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $RegisterObserver(::webrtc::DtmfSenderObserverInterface* observer);

    MCNAPI void $UnregisterObserver();

    MCNAPI bool $CanInsertDtmf();

    MCNAPI bool $InsertDtmf(::std::string const& tones, int duration, int inter_tone_gap, int comma_delay);

    MCNAPI ::std::string $tones() const;

    MCNAPI int $duration() const;

    MCNAPI int $inter_tone_gap() const;

    MCNAPI int $comma_delay() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
