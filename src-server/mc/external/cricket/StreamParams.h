#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class UniqueRandomIdGenerator; }
// clang-format on

namespace cricket {

struct StreamParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb5c891;
    ::ll::UntypedStorage<8, 24> mUnk7afffa;
    ::ll::UntypedStorage<8, 24> mUnk9a92a5;
    ::ll::UntypedStorage<8, 32> mUnk47ccd6;
    ::ll::UntypedStorage<8, 24> mUnk284e47;
    ::ll::UntypedStorage<8, 24> mUnk48385b;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddSecondarySsrc(::std::string const& semantics, uint primary_ssrc, uint secondary_ssrc);

    MCNAPI void GenerateSsrcs(int num_layers, bool generate_fid, bool generate_fec_fr, ::rtc::UniqueRandomIdGenerator* ssrc_generator);

    MCNAPI StreamParams();

    MCNAPI StreamParams(::cricket::StreamParams&&);

    MCNAPI StreamParams(::cricket::StreamParams const&);

    MCNAPI ::std::string first_stream_id() const;

    MCNAPI bool has_ssrc(uint ssrc) const;

    MCNAPI ::cricket::StreamParams& operator=(::cricket::StreamParams const&);

    MCNAPI void set_stream_ids(::std::vector<::std::string> const& stream_ids);

    MCNAPI ::std::vector<::std::string> stream_ids() const;

    MCNAPI ~StreamParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::StreamParams&&);

    MCNAPI void* $ctor(::cricket::StreamParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
