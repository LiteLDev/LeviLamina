#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"

// auto generated forward declare list
// clang-format off
struct srtp_event_data_t;
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class SrtpSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4f0701;
    ::ll::UntypedStorage<8, 8> mUnk879b48;
    ::ll::UntypedStorage<4, 4> mUnkef9227;
    ::ll::UntypedStorage<4, 4> mUnke9bc91;
    ::ll::UntypedStorage<1, 1> mUnkaa34a3;
    ::ll::UntypedStorage<4, 4> mUnk8ec134;
    ::ll::UntypedStorage<1, 1> mUnk5cf2c4;
    ::ll::UntypedStorage<1, 1> mUnk811372;
    ::ll::UntypedStorage<4, 4> mUnk734f3d;
    ::ll::UntypedStorage<1, 1> mUnkc30cc4;
    // NOLINTEND

public:
    // prevent constructor by default
    SrtpSession& operator=(SrtpSession const&);
    SrtpSession(SrtpSession const&);
    SrtpSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool DoSetKey(
        int                                type,
        int                                crypto_suite,
        ::webrtc::BufferT<uchar, 1> const& key,
        ::std::vector<int> const&          extension_ids
    );

    MCNAPI void DumpPacket(::webrtc::CopyOnWriteBuffer const& buffer, bool outbound);

    MCNAPI void EnableExternalAuth();

    MCNAPI int GetSrtpOverhead() const;

    MCNAPI bool ProtectRtcp(::webrtc::CopyOnWriteBuffer& buffer);

    MCNAPI bool ProtectRtp(::webrtc::CopyOnWriteBuffer& buffer);

    MCNAPI bool RemoveSsrcFromSession(uint ssrc);

    MCNAPI bool
    SetKey(int type, int crypto_suite, ::webrtc::BufferT<uchar, 1> const& key, ::std::vector<int> const& extension_ids);

    MCNAPI bool
    SetReceive(int crypto_suite, ::webrtc::BufferT<uchar, 1> const& key, ::std::vector<int> const& extension_ids);

    MCNAPI bool
    SetSend(int crypto_suite, ::webrtc::BufferT<uchar, 1> const& key, ::std::vector<int> const& extension_ids);

    MCNAPI explicit SrtpSession(::webrtc::FieldTrialsView const& field_trials);

    MCNAPI bool UnprotectRtcp(::webrtc::CopyOnWriteBuffer& buffer);

    MCNAPI bool UnprotectRtp(::webrtc::CopyOnWriteBuffer& buffer);

    MCNAPI bool
    UpdateReceive(int crypto_suite, ::webrtc::BufferT<uchar, 1> const& key, ::std::vector<int> const& extension_ids);

    MCNAPI bool
    UpdateSend(int crypto_suite, ::webrtc::BufferT<uchar, 1> const& key, ::std::vector<int> const& extension_ids);

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

} // namespace webrtc
