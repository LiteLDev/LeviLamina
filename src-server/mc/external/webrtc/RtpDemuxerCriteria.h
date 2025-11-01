#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpDemuxerCriteria {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk58e583;
    ::ll::UntypedStorage<8, 32> mUnk3ea728;
    ::ll::UntypedStorage<8, 32> mUnk204006;
    ::ll::UntypedStorage<8, 32> mUnk565f96;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpDemuxerCriteria& operator=(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpDemuxerCriteria(::std::string_view mid, ::std::string_view rsid);

    MCNAPI ::std::string ToString() const;

    MCNAPI ~RtpDemuxerCriteria();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view mid, ::std::string_view rsid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
