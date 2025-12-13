#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttributeValueType.h"
#include "mc/external/cricket/StunMessage.h"

namespace cricket {

class RelayMessage : public ::cricket::StunMessage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int type) const /*override*/;

    virtual ::cricket::StunMessage* CreateNew() const /*override*/;

    virtual ~RelayMessage() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
