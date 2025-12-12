#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfSenderObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnToneChange(::std::string const&, ::std::string const&);

    virtual void OnToneChange(::std::string const&);

    virtual ~DtmfSenderObserverInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
