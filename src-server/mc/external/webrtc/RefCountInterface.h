#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountReleaseStatus.h"

namespace webrtc {

class RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void AddRef() const = 0;

    // vIndex: 1
    virtual ::webrtc::RefCountReleaseStatus Release() const = 0;

    // vIndex: 2
    virtual ~RefCountInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
