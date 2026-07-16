#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/UsedIds.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct Codec; }
// clang-format on

namespace webrtc {

class UsedPayloadTypes : public ::webrtc::UsedIds<::webrtc::Codec> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool IsIdUsed(int new_id) /*override*/;

    virtual ~UsedPayloadTypes() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UsedPayloadTypes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace webrtc
