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
    MCAPI bool AddSecondarySsrc(::std::string const&, uint, uint);

    MCAPI void GenerateSsrcs(int, bool, bool, ::rtc::UniqueRandomIdGenerator*);

    MCAPI StreamParams();

    MCAPI StreamParams(::cricket::StreamParams&&);

    MCAPI StreamParams(::cricket::StreamParams const&);

    MCAPI ::std::string first_stream_id() const;

    MCAPI bool has_ssrc(uint) const;

    MCAPI ::cricket::StreamParams& operator=(::cricket::StreamParams const&);

    MCAPI void set_stream_ids(::std::vector<::std::string> const&);

    MCAPI ::std::vector<::std::string> stream_ids() const;

    MCAPI ~StreamParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::StreamParams&&);

    MCAPI void* $ctor(::cricket::StreamParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
