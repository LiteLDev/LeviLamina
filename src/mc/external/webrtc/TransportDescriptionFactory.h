#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ConnectionRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCredentialsIterator; }
namespace webrtc { struct TransportDescription; }
namespace webrtc { struct TransportOptions; }
// clang-format on

namespace webrtc {

class TransportDescriptionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5459fd;
    ::ll::UntypedStorage<8, 8> mUnkf5f226;
    ::ll::UntypedStorage<8, 8> mUnk9e4eea;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportDescriptionFactory& operator=(TransportDescriptionFactory const&);
    TransportDescriptionFactory(TransportDescriptionFactory const&);
    TransportDescriptionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::TransportDescription> CreateAnswer(
        ::webrtc::TransportDescription const* offer,
        ::webrtc::TransportOptions const&     options,
        bool                                  require_transport_attributes,
        ::webrtc::TransportDescription const* current_description,
        ::webrtc::IceCredentialsIterator*     ice_credentials
    ) const;

    MCNAPI ::std::unique_ptr<::webrtc::TransportDescription> CreateOffer(
        ::webrtc::TransportOptions const&     options,
        ::webrtc::TransportDescription const* current_description,
        ::webrtc::IceCredentialsIterator*     ice_credentials
    ) const;

    MCNAPI bool SetSecurityInfo(::webrtc::TransportDescription* desc, ::webrtc::ConnectionRole role) const;

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

} // namespace webrtc
