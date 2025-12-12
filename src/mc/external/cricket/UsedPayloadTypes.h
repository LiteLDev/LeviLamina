#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/UsedIds.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct Codec; }
// clang-format on

namespace cricket {

class UsedPayloadTypes : public ::cricket::UsedIds<::cricket::Codec> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool IsIdUsed(int new_id) /*override*/;

    virtual ~UsedPayloadTypes() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $IsIdUsed(int new_id);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
