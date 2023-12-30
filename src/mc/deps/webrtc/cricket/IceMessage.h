#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunAttributeValueType.h"
#include "mc/deps/webrtc/cricket/StunMessage.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
// clang-format on

namespace cricket {

class IceMessage : public ::cricket::StunMessage {
public:
    // prevent constructor by default
    IceMessage& operator=(IceMessage const&);
    IceMessage(IceMessage const&);
    IceMessage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IceMessage@cricket@@UEAA@XZ
    virtual ~IceMessage() = default;

    // vIndex: 1, symbol: ?CreateNew@IceMessage@cricket@@MEBAPEAVStunMessage@2@XZ
    virtual class cricket::StunMessage* CreateNew() const;

    // vIndex: 2, symbol: ?GetAttributeValueType@IceMessage@cricket@@MEBA?AW4StunAttributeValueType@2@H@Z
    virtual ::cricket::StunAttributeValueType GetAttributeValueType(int) const;

    // NOLINTEND
};

}; // namespace cricket
