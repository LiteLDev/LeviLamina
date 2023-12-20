#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ConnectionRole.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceCredentialsIterator; }
namespace cricket { struct TransportDescription; }
namespace cricket { struct TransportOptions; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class TransportDescriptionFactory {
public:
    // prevent constructor by default
    TransportDescriptionFactory& operator=(TransportDescriptionFactory const&);
    TransportDescriptionFactory(TransportDescriptionFactory const&);
    TransportDescriptionFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateAnswer@TransportDescriptionFactory@cricket@@QEBA?AV?$unique_ptr@UTransportDescription@cricket@@U?$default_delete@UTransportDescription@cricket@@@std@@@std@@PEBUTransportDescription@2@AEBUTransportOptions@2@_N0PEAVIceCredentialsIterator@2@@Z
    MCAPI std::unique_ptr<struct cricket::TransportDescription>
    CreateAnswer(struct cricket::TransportDescription const*, struct cricket::TransportOptions const&, bool, struct cricket::TransportDescription const*, class cricket::IceCredentialsIterator*)
        const;

    // symbol:
    // ?CreateOffer@TransportDescriptionFactory@cricket@@QEBA?AV?$unique_ptr@UTransportDescription@cricket@@U?$default_delete@UTransportDescription@cricket@@@std@@@std@@AEBUTransportOptions@2@PEBUTransportDescription@2@PEAVIceCredentialsIterator@2@@Z
    MCAPI std::unique_ptr<struct cricket::TransportDescription>
    CreateOffer(struct cricket::TransportOptions const&, struct cricket::TransportDescription const*, class cricket::IceCredentialsIterator*)
        const;

    // symbol: ??0TransportDescriptionFactory@cricket@@QEAA@AEBVFieldTrialsView@webrtc@@@Z
    MCAPI explicit TransportDescriptionFactory(class webrtc::FieldTrialsView const&);

    // symbol: ??1TransportDescriptionFactory@cricket@@QEAA@XZ
    MCAPI ~TransportDescriptionFactory();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?SetSecurityInfo@TransportDescriptionFactory@cricket@@AEBA_NPEAUTransportDescription@2@W4ConnectionRole@2@@Z
    MCAPI bool SetSecurityInfo(struct cricket::TransportDescription*, ::cricket::ConnectionRole) const;

    // NOLINTEND
};

}; // namespace cricket
