#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfProviderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool CanInsertDtmf() = 0;

    virtual bool InsertDtmf(int, int) = 0;

    virtual ~DtmfProviderInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

} // namespace webrtc
