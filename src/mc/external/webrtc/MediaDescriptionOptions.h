#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SimulcastLayerList; }
namespace webrtc { struct RidDescription; }
// clang-format on

namespace webrtc {

struct MediaDescriptionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1e1c65;
    ::ll::UntypedStorage<8, 32> mUnke5b192;
    ::ll::UntypedStorage<4, 4>  mUnk3f708c;
    ::ll::UntypedStorage<1, 1>  mUnk34dd3c;
    ::ll::UntypedStorage<1, 3>  mUnk759ba0;
    ::ll::UntypedStorage<8, 24> mUnk892686;
    ::ll::UntypedStorage<8, 24> mUnk7cc921;
    ::ll::UntypedStorage<8, 24> mUnk7e818f;
    ::ll::UntypedStorage<8, 24> mUnka63dfa;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaDescriptionOptions& operator=(MediaDescriptionOptions const&);
    MediaDescriptionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAudioSender(::std::string const& track_id, ::std::vector<::std::string> const& stream_ids);

    MCNAPI void AddSenderInternal(
        ::std::string const&                           track_id,
        ::std::vector<::std::string> const&            stream_ids,
        ::std::vector<::webrtc::RidDescription> const& rids,
        ::webrtc::SimulcastLayerList const&            simulcast_layers,
        int                                            num_sim_layers
    );

    MCNAPI void AddVideoSender(
        ::std::string const&                           track_id,
        ::std::vector<::std::string> const&            stream_ids,
        ::std::vector<::webrtc::RidDescription> const& rids,
        ::webrtc::SimulcastLayerList const&            simulcast_layers,
        int                                            num_sim_layers
    );

    MCNAPI MediaDescriptionOptions(::webrtc::MediaDescriptionOptions&&);

    MCNAPI MediaDescriptionOptions(::webrtc::MediaDescriptionOptions const&);

    MCNAPI MediaDescriptionOptions(
        ::webrtc::MediaType               type,
        ::std::string const&              mid,
        ::webrtc::RtpTransceiverDirection direction,
        bool                              stopped
    );

    MCNAPI ::webrtc::MediaDescriptionOptions& operator=(::webrtc::MediaDescriptionOptions&&);

    MCNAPI ~MediaDescriptionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::MediaDescriptionOptions&&);

    MCNAPI void* $ctor(::webrtc::MediaDescriptionOptions const&);

    MCNAPI void* $ctor(
        ::webrtc::MediaType               type,
        ::std::string const&              mid,
        ::webrtc::RtpTransceiverDirection direction,
        bool                              stopped
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
