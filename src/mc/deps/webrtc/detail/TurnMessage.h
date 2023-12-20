#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/StunAttributeValueType.h"
#include "mc/deps/webrtc/detail/StunMessage.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
// clang-format on

namespace cricket {

class TurnMessage : public ::cricket::StunMessage {
public:
    // prevent constructor by default
    TurnMessage& operator=(TurnMessage const&);
    TurnMessage(TurnMessage const&);
    TurnMessage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TurnMessage@cricket@@UEAA@XZ
    virtual ~TurnMessage();

    // vIndex: 1, symbol: ?CreateNew@TurnMessage@cricket@@MEBAPEAVStunMessage@2@XZ
    virtual class cricket::StunMessage* CreateNew() const;

    // vIndex: 2, symbol: ?GetAttributeValueType@TurnMessage@cricket@@MEBA?AW4StunAttributeValueType@2@H@Z
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int) const;

    // NOLINTEND
};

}; // namespace cricket
