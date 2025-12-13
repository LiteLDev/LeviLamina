#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/SessionDescriptionInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class SessionDescription; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class JsepSessionDescription : public ::webrtc::SessionDescriptionInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9fe00b;
    ::ll::UntypedStorage<8, 32> mUnke3092f;
    ::ll::UntypedStorage<8, 32> mUnka36c00;
    ::ll::UntypedStorage<4, 4>  mUnk429f56;
    ::ll::UntypedStorage<8, 24> mUnk88d7a1;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepSessionDescription& operator=(JsepSessionDescription const&);
    JsepSessionDescription(JsepSessionDescription const&);
    JsepSessionDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsepSessionDescription() /*override*/;

    virtual ::std::unique_ptr<::webrtc::SessionDescriptionInterface> Clone() const /*override*/;

    virtual ::cricket::SessionDescription* description() /*override*/;

    virtual ::cricket::SessionDescription const* description() const /*override*/;

    virtual ::std::string session_id() const /*override*/;

    virtual ::std::string session_version() const /*override*/;

    virtual ::webrtc::SdpType GetType() const /*override*/;

    virtual ::std::string type() const /*override*/;

    virtual bool AddCandidate(::webrtc::IceCandidateInterface const* candidate) /*override*/;

    virtual uint64 RemoveCandidates(::std::vector<::cricket::Candidate> const& candidates) /*override*/;

    virtual uint64 number_of_mediasections() const /*override*/;

    virtual ::webrtc::IceCandidateCollection const* candidates(uint64 mediasection_index) const /*override*/;

    virtual bool ToString(::std::string* out) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool GetMediasectionIndex(::webrtc::IceCandidateInterface const* candidate, uint64* index);

    MCNAPI int GetMediasectionIndex(::cricket::Candidate const& candidate);

    MCNAPI bool Initialize(
        ::std::unique_ptr<::cricket::SessionDescription> description,
        ::std::string const&                             session_id,
        ::std::string const&                             session_version
    );

    MCNAPI explicit JsepSessionDescription(::webrtc::SdpType type);

    MCNAPI JsepSessionDescription(
        ::webrtc::SdpType                                type,
        ::std::unique_ptr<::cricket::SessionDescription> description,
        ::std::string_view                               session_id,
        ::std::string_view                               session_version
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SdpType type);

    MCNAPI void* $ctor(
        ::webrtc::SdpType                                type,
        ::std::unique_ptr<::cricket::SessionDescription> description,
        ::std::string_view                               session_id,
        ::std::string_view                               session_version
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface> $Clone() const;

    MCNAPI ::cricket::SessionDescription* $description();

    MCNAPI ::cricket::SessionDescription const* $description() const;

    MCNAPI ::std::string $session_id() const;

    MCNAPI ::std::string $session_version() const;

    MCNAPI ::webrtc::SdpType $GetType() const;

    MCNAPI ::std::string $type() const;

    MCNAPI bool $AddCandidate(::webrtc::IceCandidateInterface const* candidate);

    MCNAPI uint64 $RemoveCandidates(::std::vector<::cricket::Candidate> const& candidates);

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
