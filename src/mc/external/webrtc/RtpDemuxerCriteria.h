#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpDemuxerCriteria {
public:
    // prevent constructor by default
    RtpDemuxerCriteria& operator=(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria(RtpDemuxerCriteria const&);
    RtpDemuxerCriteria();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtpDemuxerCriteria(::std::string_view, ::std::string_view);

    MCAPI ::std::string ToString() const;

    MCAPI ~RtpDemuxerCriteria();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
