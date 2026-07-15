#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/SSLHandshakeError.h"
#include "mc/external/webrtc/SSLMode.h"
#include "mc/external/webrtc/SSLPeerCertificateDigestError.h"
#include "mc/external/webrtc/SSLProtocolVersion.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/StreamInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { class SSLIdentity; }
// clang-format on

namespace webrtc {

class SSLStreamAdapter : public ::webrtc::StreamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8b60a6;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLStreamAdapter& operator=(SSLStreamAdapter const&);
    SSLStreamAdapter(SSLStreamAdapter const&);
    SSLStreamAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLStreamAdapter() /*override*/;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity) = 0;

    virtual ::webrtc::SSLIdentity* GetIdentityForTesting() const = 0;

    virtual void SetServerRole(::webrtc::SSLRole role) = 0;

    virtual void SetMode(::webrtc::SSLMode mode) = 0;

    virtual void SetMaxProtocolVersion(::webrtc::SSLProtocolVersion version) = 0;

    virtual void SetInitialRetransmissionTimeout(int timeout_ms) = 0;

    virtual void SetMTU(int mtu) = 0;

    virtual int StartSSL() = 0;

    virtual ::webrtc::SSLPeerCertificateDigestError SetPeerCertificateDigest(
        ::std::string_view                                     digest_alg,
        ::webrtc::ArrayView<uchar const, 18446744073709546905> digest_val
    ) = 0;

    virtual bool SetPeerCertificateDigest(
        ::std::string_view                       digest_alg,
        uchar const*                             digest_val,
        uint64                                   digest_len,
        ::webrtc::SSLPeerCertificateDigestError* error
    );

    virtual ::std::unique_ptr<::webrtc::SSLCertChain> GetPeerSSLCertChain() const = 0;

    virtual bool GetSslCipherSuite(int* cipher_suite) const = 0;

    virtual ::std::optional<::std::string_view> GetTlsCipherSuiteName() const = 0;

    virtual ::webrtc::SSLProtocolVersion GetSslVersion() const = 0;

    virtual bool GetSslVersionBytes(int* version) const = 0;

    virtual bool ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material) = 0;

    virtual ushort GetPeerSignatureAlgorithm() const = 0;

    virtual bool SetDtlsSrtpCryptoSuites(::std::vector<int> const& ciphers) = 0;

    virtual bool GetDtlsSrtpCryptoSuite(int* crypto_suite) const = 0;

    virtual bool IsTlsConnected() = 0;

    virtual int GetRetransmissionCount() const = 0;

    virtual bool SetSslGroupIds(::std::vector<ushort> const& groups) = 0;

    virtual ushort GetSslGroupId() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::SSLStreamAdapter> Create(
        ::std::unique_ptr<::webrtc::StreamInterface>            stream,
        ::absl::AnyInvocable<void(::webrtc::SSLHandshakeError)> handshake_error,
        ::webrtc::FieldTrialsView const*                        field_trials
    );

    MCNAPI static ::std::vector<ushort>
    GetDefaultEphemeralKeyExchangeCipherGroups(::webrtc::FieldTrialsView const* field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $SetPeerCertificateDigest(
        ::std::string_view                       digest_alg,
        uchar const*                             digest_val,
        uint64                                   digest_len,
        ::webrtc::SSLPeerCertificateDigestError* error
    );


    // NOLINTEND
};

} // namespace webrtc
