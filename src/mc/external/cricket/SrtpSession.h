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
    MCAPI bool DoSetKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI void DumpPacket(void const*, int, bool);

    MCAPI void EnableExternalAuth();

    MCAPI int GetSrtpOverhead() const;

    MCAPI void HandleEvent(::srtp_event_data_t const*);

    MCAPI bool IsExternalAuthEnabled() const;

    MCAPI bool ProtectRtcp(void*, int, int, int*);

    MCAPI bool ProtectRtp(void*, int, int, int*);

    MCAPI bool RemoveSsrcFromSession(uint);

    MCAPI bool SetKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI bool SetRecv(int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI bool SetSend(int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI explicit SrtpSession(::webrtc::FieldTrialsView const&);

    MCAPI bool UnprotectRtcp(void*, int, int*);

    MCAPI bool UnprotectRtp(void*, int, int*);

    MCAPI bool UpdateKey(int, int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI bool UpdateRecv(int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI bool UpdateSend(int, uchar const*, uint64, ::std::vector<int> const&);

    MCAPI ~SrtpSession();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void HandleEventThunk(::srtp_event_data_t*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
