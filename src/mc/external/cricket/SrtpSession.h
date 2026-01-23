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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk85709a;
    ::ll::UntypedStorage<8, 8> mUnk32e315;
    ::ll::UntypedStorage<4, 4> mUnk4e2076;
    ::ll::UntypedStorage<4, 4> mUnk1a0fbc;
    ::ll::UntypedStorage<1, 1> mUnkbe8f80;
    ::ll::UntypedStorage<4, 4> mUnkd3686b;
    ::ll::UntypedStorage<1, 1> mUnk3ac801;
    ::ll::UntypedStorage<1, 1> mUnkf52cd8;
    ::ll::UntypedStorage<4, 4> mUnk7cd8d2;
    ::ll::UntypedStorage<1, 1> mUnkd0ee88;
    // NOLINTEND

public:
    // prevent constructor by default
    SrtpSession& operator=(SrtpSession const&);
    SrtpSession(SrtpSession const&);
    SrtpSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    DoSetKey(int type, int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI void DumpPacket(void const* buf, int len, bool outbound);

    MCNAPI void EnableExternalAuth();

    MCNAPI int GetSrtpOverhead() const;

    MCNAPI bool ProtectRtcp(void* p, int in_len, int max_len, int* out_len);

    MCNAPI bool ProtectRtp(void* p, int in_len, int max_len, int* out_len);

    MCNAPI bool RemoveSsrcFromSession(uint ssrc);

    MCNAPI bool
    SetKey(int type, int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI bool SetRecv(int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI bool SetSend(int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI explicit SrtpSession(::webrtc::FieldTrialsView const& field_trials);

    MCNAPI bool UnprotectRtcp(void* p, int in_len, int* out_len);

    MCNAPI bool UnprotectRtp(void* p, int in_len, int* out_len);

    MCNAPI bool UpdateRecv(int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI bool UpdateSend(int crypto_suite, uchar const* key, uint64 len, ::std::vector<int> const& extension_ids);

    MCNAPI ~SrtpSession();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void HandleEventThunk(::srtp_event_data_t* ev);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
