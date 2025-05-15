#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpDemuxerCriteria {
public:
    // prevent constructor by default
    RtpDemuxerCriteria();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpDemuxerCriteria(::std::string_view, ::std::string_view);

    MCNAPI ::std::string ToString() const;

    MCNAPI ~RtpDemuxerCriteria();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
