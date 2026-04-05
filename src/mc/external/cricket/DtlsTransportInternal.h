#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/PacketTransportInternal.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace webrtc { class RTCError; }
// clang-format on

namespace cricket {

class DtlsTransportInternal : public ::rtc::PacketTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk76842d;
    ::ll::UntypedStorage<8, 32> mUnk4da7eb;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransportInternal& operator=(DtlsTransportInternal const&);
    DtlsTransportInternal(DtlsTransportInternal const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DtlsTransportInternal() /*override*/;

    virtual ::webrtc::DtlsTransportState dtls_state() const = 0;

    virtual int component() const = 0;

    virtual bool IsDtlsActive() const = 0;

    virtual bool GetDtlsRole(::rtc::SSLRole* role) const = 0;

    virtual bool SetDtlsRole(::rtc::SSLRole role) = 0;

    virtual bool GetSslVersionBytes(int* version) const = 0;

    virtual bool GetSrtpCryptoSuite(int* cipher) = 0;

    virtual bool GetSslCipherSuite(int* cipher) = 0;

    virtual ushort GetSslPeerSignatureAlgorithm() const = 0;

    virtual ::webrtc::scoped_refptr<::rtc::RTCCertificate> GetLocalCertificate() const = 0;

    virtual bool SetLocalCertificate(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& certificate) = 0;

    virtual ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain() const = 0;

    virtual bool ExportKeyingMaterial(
        ::std::string_view label,
        uchar const*       context,
        uint64             context_len,
        bool               use_context,
        uchar*             result,
        uint64             result_len
    ) = 0;

    virtual bool SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len) = 0;

    virtual ::webrtc::RTCError SetRemoteParameters(
        ::std::string_view              digest_alg,
        uchar const*                    digest,
        uint64                          digest_len,
        ::std::optional<::rtc::SSLRole> role
    ) = 0;

    virtual ::cricket::IceTransportInternal* ice_transport() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DtlsTransportInternal();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
