#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunAttributeValueType.h"
#include "mc/external/webrtc/StunMessage.h"

namespace webrtc {

class TurnMessage : public ::webrtc::StunMessage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StunAttributeValueType GetAttributeValueType(int type) const /*override*/;

    virtual ::webrtc::StunMessage* CreateNew() const /*override*/;

    virtual ~TurnMessage() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::StunAttributeValueType $GetAttributeValueType(int type) const;

    MCNAPI ::webrtc::StunMessage* $CreateNew() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
