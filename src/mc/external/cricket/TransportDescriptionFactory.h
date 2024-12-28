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
    // prevent constructor by default
    TransportDescriptionFactory& operator=(TransportDescriptionFactory const&);
    TransportDescriptionFactory(TransportDescriptionFactory const&);
    TransportDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateAnswer(::cricket::TransportDescription const*, ::cricket::TransportOptions const&, bool, ::cricket::TransportDescription const*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI ::std::unique_ptr<::cricket::TransportDescription>
    CreateOffer(::cricket::TransportOptions const&, ::cricket::TransportDescription const*, ::cricket::IceCredentialsIterator*)
        const;

    MCAPI bool SetSecurityInfo(::cricket::TransportDescription*, ::cricket::ConnectionRole) const;

    MCAPI explicit TransportDescriptionFactory(::webrtc::FieldTrialsView const&);

    MCAPI ~TransportDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
