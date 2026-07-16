#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/PacketTransportInternal.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInternal; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class RTCError; }
namespace webrtc { class SSLCertChain; }
// clang-format on

namespace webrtc {

class DtlsTransportInternal : public ::webrtc::PacketTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc9908b;
    ::ll::UntypedStorage<8, 32> mUnkf7beac;
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

    virtual bool GetDtlsRole(::webrtc::SSLRole* role) const = 0;

    virtual bool SetDtlsRole(::webrtc::SSLRole role) = 0;

    virtual bool GetSslVersionBytes(int* version) const = 0;

    virtual ushort GetSslGroupId() const = 0;

    virtual bool GetSrtpCryptoSuite(int* cipher) const = 0;

    virtual bool GetSslCipherSuite(int* cipher) const = 0;

    virtual ::std::optional<::std::string_view> GetTlsCipherSuiteName() const = 0;

    virtual ushort GetSslPeerSignatureAlgorithm() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::RTCCertificate> GetLocalCertificate() const = 0;

    virtual bool SetLocalCertificate(::webrtc::scoped_refptr<::webrtc::RTCCertificate> const& certificate) = 0;

    virtual ::std::unique_ptr<::webrtc::SSLCertChain> GetRemoteSSLCertChain() const = 0;

    virtual bool ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material) = 0;

    virtual bool SetRemoteFingerprint(::std::string_view digest_alg, uchar const* digest, uint64 digest_len) = 0;

    virtual ::webrtc::RTCError SetRemoteParameters(
        ::std::string_view                 digest_alg,
        uchar const*                       digest,
        uint64                             digest_len,
        ::std::optional<::webrtc::SSLRole> role
    ) = 0;

    virtual ::webrtc::IceTransportInternal* ice_transport() = 0;
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

} // namespace webrtc
