#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class SrtpTransport {
public:
    // prevent constructor by default
    SrtpTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateSrtpSessions();

    MCNAPI void EnableExternalAuth();

    MCNAPI bool GetSrtpOverhead(int*) const;

    MCNAPI void MaybeUpdateWritableState();

    MCNAPI bool ProtectRtcp(void*, int, int, int*);

    MCNAPI bool ProtectRtp(void*, int, int, int*);

    MCNAPI void ResetParams();

    MCNAPI bool
    SetRtcpParams(int, uchar const*, int, ::std::vector<int> const&, int, uchar const*, int, ::std::vector<int> const&);

    MCNAPI bool
    SetRtpParams(int, uchar const*, int, ::std::vector<int> const&, int, uchar const*, int, ::std::vector<int> const&);

    MCNAPI SrtpTransport(bool, ::webrtc::FieldTrialsView const&);

    MCNAPI bool UnprotectRtcp(void*, int, int*);

    MCNAPI bool UnprotectRtp(void*, int, int*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
