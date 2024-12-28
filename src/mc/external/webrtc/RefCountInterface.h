#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountReleaseStatus.h"

namespace webrtc {

class RefCountInterface {
public:
    // prevent constructor by default
    RefCountInterface& operator=(RefCountInterface const&);
    RefCountInterface(RefCountInterface const&);
    RefCountInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void AddRef() const = 0;

    // vIndex: 1
    virtual ::webrtc::RefCountReleaseStatus Release() const = 0;

    // vIndex: 2
    virtual ~RefCountInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
