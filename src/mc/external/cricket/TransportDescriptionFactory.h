#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ConnectionRole.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateAnswer(::cricket::TransportDescription const*, ::cricket::TransportOptions const&, bool, ::cricket::TransportDescription const*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateOffer(::cricket::TransportOptions const&, ::cricket::TransportDescription const*, ::cricket::IceCredentialsIterator*)
        const;

    MCNAPI bool SetSecurityInfo(::cricket::TransportDescription*, ::cricket::ConnectionRole) const;

    MCNAPI explicit TransportDescriptionFactory(::webrtc::FieldTrialsView const&);

    MCNAPI ~TransportDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
