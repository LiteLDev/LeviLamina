#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfSenderObserverInterface {
public:
    // prevent constructor by default
    DtmfSenderObserverInterface& operator=(DtmfSenderObserverInterface const&);
    DtmfSenderObserverInterface(DtmfSenderObserverInterface const&);
    DtmfSenderObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnToneChange(::std::string const&, ::std::string const&);

    // vIndex: 0
    virtual void OnToneChange(::std::string const&);

    // vIndex: 2
    virtual ~DtmfSenderObserverInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnToneChange(::std::string const&, ::std::string const&);

    MCAPI void $OnToneChange(::std::string const&);
    // NOLINTEND
};

} // namespace webrtc
