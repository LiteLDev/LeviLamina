#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct srtp_event_data_t;
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class SrtpSession {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool DoSetKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI void DumpPacket(void const*, int, bool);

    MCNAPI void EnableExternalAuth();

    MCNAPI int GetSrtpOverhead() const;

    MCNAPI void HandleEvent(::srtp_event_data_t const*);

    MCNAPI bool IsExternalAuthEnabled() const;

    MCNAPI bool ProtectRtcp(void*, int, int, int*);

    MCNAPI bool ProtectRtp(void*, int, int, int*);

    MCNAPI bool RemoveSsrcFromSession(uint);

    MCNAPI bool SetKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI bool SetRecv(int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI bool SetSend(int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI explicit SrtpSession(::webrtc::FieldTrialsView const&);

    MCNAPI bool UnprotectRtcp(void*, int, int*);

    MCNAPI bool UnprotectRtp(void*, int, int*);

    MCNAPI bool UpdateKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI bool UpdateRecv(int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI bool UpdateSend(int, uchar const*, uint64, ::std::vector<int> const&);

    MCNAPI ~SrtpSession();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void HandleEventThunk(::srtp_event_data_t*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
