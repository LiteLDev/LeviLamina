#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class SrtpTransport {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CreateSrtpSessions();

    MCAPI void EnableExternalAuth();

    MCAPI bool GetSrtpOverhead(int*) const;

    MCAPI void MaybeUpdateWritableState();

    MCAPI bool ProtectRtcp(void*, int, int, int*);

    MCAPI bool ProtectRtp(void*, int, int, int*);

    MCAPI void ResetParams();

    MCAPI bool
    SetRtcpParams(int, uchar const*, int, ::std::vector<int> const&, int, uchar const*, int, ::std::vector<int> const&);

    MCAPI bool
    SetRtpParams(int, uchar const*, int, ::std::vector<int> const&, int, uchar const*, int, ::std::vector<int> const&);

    MCAPI SrtpTransport(bool, ::webrtc::FieldTrialsView const&);

    MCAPI bool UnprotectRtcp(void*, int, int*);

    MCAPI bool UnprotectRtp(void*, int, int*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
