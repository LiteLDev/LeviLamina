#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class UniqueRandomIdGenerator; }
// clang-format on

namespace webrtc {

struct StreamParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5c04ff;
    ::ll::UntypedStorage<8, 24> mUnkbb8777;
    ::ll::UntypedStorage<8, 24> mUnk10906b;
    ::ll::UntypedStorage<8, 32> mUnk3f695d;
    ::ll::UntypedStorage<8, 24> mUnked8e82;
    ::ll::UntypedStorage<8, 24> mUnkca5055;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddSecondarySsrc(::std::string const& semantics, uint primary_ssrc, uint secondary_ssrc);

    MCNAPI void GenerateSsrcs(
        int                                num_layers,
        bool                               generate_fid,
        bool                               generate_fec_fr,
        ::webrtc::UniqueRandomIdGenerator* ssrc_generator
    );

    MCNAPI StreamParams();

    MCNAPI StreamParams(::webrtc::StreamParams&&);

    MCNAPI StreamParams(::webrtc::StreamParams const&);

    MCNAPI ::std::string first_stream_id() const;

    MCNAPI ::webrtc::StreamParams& operator=(::webrtc::StreamParams const&);

    MCNAPI void set_stream_ids(::std::vector<::std::string> const& stream_ids);

    MCNAPI ::std::vector<::std::string> stream_ids() const;

    MCNAPI ~StreamParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::StreamParams&&);

    MCNAPI void* $ctor(::webrtc::StreamParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
