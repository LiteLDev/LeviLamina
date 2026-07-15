#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/StunMessageType.h"

namespace webrtc {

class DtlsStunPiggybackController {
public:
    // DtlsStunPiggybackController inner types define
    enum class State : int {
        Tentative = 0,
        Confirmed = 1,
        Pending   = 2,
        Complete  = 3,
        Off       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdb65ce;
    ::ll::UntypedStorage<1, 1>  mUnka909f2;
    ::ll::UntypedStorage<8, 32> mUnk199e2d;
    ::ll::UntypedStorage<8, 32> mUnkbb5977;
    ::ll::UntypedStorage<8, 32> mUnk3699f4;
    ::ll::UntypedStorage<8, 24> mUnka21109;
    ::ll::UntypedStorage<4, 4>  mUnkea224e;
    ::ll::UntypedStorage<1, 1>  mUnkaf7f2d;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsStunPiggybackController& operator=(DtlsStunPiggybackController const&);
    DtlsStunPiggybackController(DtlsStunPiggybackController const&);
    DtlsStunPiggybackController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CapturePacket(::webrtc::ArrayView<uchar const, 18446744073709546905> data);

    MCNAPI explicit DtlsStunPiggybackController(
        ::absl::AnyInvocable<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> dtls_data_callback
    );

    MCNAPI void Flush();

    MCNAPI ::std::optional<::std::vector<uint> const> GetAckToPiggyback(::webrtc::StunMessageType stun_message_type);

    MCNAPI ::std::optional<::std::string_view> GetDataToPiggyback(::webrtc::StunMessageType stun_message_type);

    MCNAPI void ReportDataPiggybacked(
        ::std::optional<::webrtc::ArrayView<uchar, 18446744073709546905>> data,
        ::std::optional<::std::vector<uint>>                              acks
    );

    MCNAPI void SetDtlsFailed();

    MCNAPI void SetDtlsHandshakeComplete(bool is_dtls_client, bool is_dtls13);

    MCNAPI ~DtlsStunPiggybackController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::absl::AnyInvocable<void(::webrtc::ArrayView<uchar const, 18446744073709546905>)> dtls_data_callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
