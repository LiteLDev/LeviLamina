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
    // prevent constructor by default
    DtmfSenderInterface& operator=(DtmfSenderInterface const&);
    DtmfSenderInterface(DtmfSenderInterface const&);
    DtmfSenderInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void RegisterObserver(::webrtc::DtmfSenderObserverInterface*) = 0;

    // vIndex: 4
    virtual void UnregisterObserver() = 0;

    // vIndex: 5
    virtual bool CanInsertDtmf() = 0;

    // vIndex: 7
    virtual bool InsertDtmf(::std::string const&, int, int);

    // vIndex: 6
    virtual bool InsertDtmf(::std::string const&, int, int, int);

    // vIndex: 8
    virtual ::std::string tones() const = 0;

    // vIndex: 9
    virtual int duration() const = 0;

    // vIndex: 10
    virtual int inter_tone_gap() const = 0;

    // vIndex: 11
    virtual int comma_delay() const;

    // vIndex: 2
    virtual ~DtmfSenderInterface() /*override*/ = default;
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
