#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfProviderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool CanInsertDtmf() = 0;

    // vIndex: 1
    virtual bool InsertDtmf(int, int) = 0;

    // vIndex: 2
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

}
