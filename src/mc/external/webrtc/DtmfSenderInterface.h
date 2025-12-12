#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtmfSenderObserverInterface; }
// clang-format on

namespace webrtc {

class DtmfSenderInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void RegisterObserver(::webrtc::DtmfSenderObserverInterface*) = 0;

    virtual void UnregisterObserver() = 0;

    virtual bool CanInsertDtmf() = 0;

    virtual bool InsertDtmf(::std::string const& tones, int duration, int inter_tone_gap);

    virtual bool InsertDtmf(::std::string const&, int, int, int);

    virtual ::std::string tones() const = 0;

    virtual int duration() const = 0;

    virtual int inter_tone_gap() const = 0;

    virtual int comma_delay() const;

    virtual ~DtmfSenderInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $InsertDtmf(::std::string const& tones, int duration, int inter_tone_gap);


    // NOLINTEND
};

} // namespace webrtc
