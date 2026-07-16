#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/SessionDescriptionInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidate; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class SessionDescription; }
// clang-format on

namespace webrtc {

class JsepSessionDescription : public ::webrtc::SessionDescriptionInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka6f262;
    ::ll::UntypedStorage<8, 32> mUnk45b0d1;
    ::ll::UntypedStorage<8, 32> mUnkf608db;
    ::ll::UntypedStorage<4, 4>  mUnk429f56;
    ::ll::UntypedStorage<8, 24> mUnk9b3179;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepSessionDescription& operator=(JsepSessionDescription const&);
    JsepSessionDescription(JsepSessionDescription const&);
    JsepSessionDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsepSessionDescription() /*override*/ = default;

    virtual ::std::unique_ptr<::webrtc::SessionDescriptionInterface> Clone() const /*override*/;

    virtual ::webrtc::SessionDescription const* description() const /*override*/;

    virtual ::webrtc::SessionDescription* description() /*override*/;

    virtual ::std::string session_id() const /*override*/;

    virtual ::std::string session_version() const /*override*/;

    virtual ::webrtc::SdpType GetType() const /*override*/;

    virtual ::std::string type() const /*override*/;

    virtual bool AddCandidate(::webrtc::IceCandidate const* candidate) /*override*/;

    virtual bool RemoveCandidate(::webrtc::IceCandidate const* candidate) /*override*/;

    virtual uint64 number_of_mediasections() const /*override*/;

    virtual ::webrtc::IceCandidateCollection const* candidates(uint64 mediasection_index) const /*override*/;

    virtual bool ToString(::std::string* out) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool GetMediasectionIndex(::webrtc::IceCandidate const* candidate, uint64* index) const;

    MCNAPI bool Initialize(
        ::std::unique_ptr<::webrtc::SessionDescription> description,
        ::std::string const&                            session_id,
        ::std::string const&                            session_version
    );

    MCNAPI JsepSessionDescription(
        ::webrtc::SdpType                               type,
        ::std::unique_ptr<::webrtc::SessionDescription> description,
        ::std::string_view                              session_id,
        ::std::string_view                              session_version
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::SdpType                               type,
        ::std::unique_ptr<::webrtc::SessionDescription> description,
        ::std::string_view                              session_id,
        ::std::string_view                              session_version
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface> $Clone() const;

    MCNAPI ::webrtc::SessionDescription const* $description() const;

    MCNAPI ::webrtc::SessionDescription* $description();

    MCNAPI ::std::string $session_id() const;

    MCNAPI ::std::string $session_version() const;

    MCNAPI ::webrtc::SdpType $GetType() const;

    MCNAPI ::std::string $type() const;

    MCNAPI bool $AddCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI bool $RemoveCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI uint64 $number_of_mediasections() const;

    MCNAPI ::webrtc::IceCandidateCollection const* $candidates(uint64 mediasection_index) const;

    MCNAPI bool $ToString(::std::string* out) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
