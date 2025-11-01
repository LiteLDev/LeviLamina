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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke402d0;
    ::ll::UntypedStorage<8, 8> mUnkdebab3;
    ::ll::UntypedStorage<8, 8> mUnk39b177;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportDescriptionFactory& operator=(TransportDescriptionFactory const&);
    TransportDescriptionFactory(TransportDescriptionFactory const&);
    TransportDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::cricket::TransportDescription> CreateAnswer(::cricket::TransportDescription const* offer, ::cricket::TransportOptions const& options, bool require_transport_attributes, ::cricket::TransportDescription const* current_description, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI ::std::unique_ptr<::cricket::TransportDescription> CreateOffer(::cricket::TransportOptions const& options, ::cricket::TransportDescription const* current_description, ::cricket::IceCredentialsIterator* ice_credentials) const;

    MCNAPI bool SetSecurityInfo(::cricket::TransportDescription* desc, ::cricket::ConnectionRole role) const;

    MCNAPI explicit TransportDescriptionFactory(::webrtc::FieldTrialsView const& field_trials);

    MCNAPI ~TransportDescriptionFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
