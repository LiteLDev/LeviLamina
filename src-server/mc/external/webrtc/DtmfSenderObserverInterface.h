#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfSenderObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnToneChange(::std::string const&, ::std::string const&);

    // vIndex: 0
    virtual void OnToneChange(::std::string const&);

    // vIndex: 2
    virtual ~DtmfSenderObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
