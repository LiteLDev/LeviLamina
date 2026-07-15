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
#include "mc/external/webrtc/SSLStreamAdapter.h"
#include "mc/external/webrtc/StreamResult.h"
#include "mc/external/webrtc/StreamState.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { class SSLIdentity; }
namespace webrtc { class StreamInterface; }
// clang-format on

namespace webrtc {

class OpenSSLStreamAdapter : public ::webrtc::SSLStreamAdapter {
public:
    // OpenSSLStreamAdapter inner types define
    enum class SSLState : int {
        None       = 0,
        Wait       = 1,
        Connecting = 2,
        Connected  = 3,
        Error      = 4,
        Closed     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk16d6d3;
    ::ll::UntypedStorage<8, 32> mUnk643a68;
    ::ll::UntypedStorage<8, 8>  mUnk1019f2;
    ::ll::UntypedStorage<8, 8>  mUnk614385;
    ::ll::UntypedStorage<8, 8>  mUnk7ca7b7;
    ::ll::UntypedStorage<4, 4>  mUnk1fec66;
    ::ll::UntypedStorage<4, 4>  mUnkd71e7d;
    ::ll::UntypedStorage<4, 4>  mUnke39464;
    ::ll::UntypedStorage<1, 1>  mUnk975961;
    ::ll::UntypedStorage<1, 1>  mUnkca11c0;
    ::ll::UntypedStorage<8, 8>  mUnkf50e69;
    ::ll::UntypedStorage<8, 8>  mUnkdf0e98;
    ::ll::UntypedStorage<8, 8>  mUnkdce34e;
    ::ll::UntypedStorage<8, 8>  mUnkef2ed1;
    ::ll::UntypedStorage<1, 1>  mUnkf67773;
    ::ll::UntypedStorage<8, 24> mUnk65736d;
    ::ll::UntypedStorage<8, 32> mUnk4cc766;
    ::ll::UntypedStorage<8, 32> mUnkd3c949;
    ::ll::UntypedStorage<8, 24> mUnk5d087c;
    ::ll::UntypedStorage<4, 4>  mUnk9649dc;
    ::ll::UntypedStorage<4, 4>  mUnk41afb9;
    ::ll::UntypedStorage<4, 4>  mUnkaf73bb;
    ::ll::UntypedStorage<4, 4>  mUnk5ed65d;
    ::ll::UntypedStorage<4, 4>  mUnk7ddbba;
    ::ll::UntypedStorage<4, 4>  mUnkddd01f;
    ::ll::UntypedStorage<1, 1>  mUnka2d7f4;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLStreamAdapter& operator=(OpenSSLStreamAdapter const&);
    OpenSSLStreamAdapter(OpenSSLStreamAdapter const&);
    OpenSSLStreamAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLStreamAdapter() /*override*/;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity) /*override*/;

    virtual ::webrtc::SSLIdentity* GetIdentityForTesting() const /*override*/;

    virtual void SetServerRole(::webrtc::SSLRole role) /*override*/;

    virtual ::webrtc::SSLPeerCertificateDigestError SetPeerCertificateDigest(
        ::std::string_view                                     digest_alg,
        ::webrtc::ArrayView<uchar const, 18446744073709546905> digest_val
    ) /*override*/;

    virtual ::std::unique_ptr<::webrtc::SSLCertChain> GetPeerSSLCertChain() const /*override*/;

    virtual int StartSSL() /*override*/;

    virtual void SetMode(::webrtc::SSLMode mode) /*override*/;

    virtual void SetMaxProtocolVersion(::webrtc::SSLProtocolVersion version) /*override*/;

    virtual void SetInitialRetransmissionTimeout(int timeout_ms) /*override*/;

    virtual void SetMTU(int mtu) /*override*/;

    virtual ::webrtc::StreamResult
    Read(::webrtc::ArrayView<uchar, 18446744073709546905> data, uint64& read, int& error) /*override*/;

    virtual ::webrtc::StreamResult
    Write(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int& error) /*override*/;

    virtual void Close() /*override*/;

    virtual ::webrtc::StreamState GetState() const /*override*/;

    virtual ::std::optional<::std::string_view> GetTlsCipherSuiteName() const /*override*/;

    virtual bool GetSslCipherSuite(int* cipher_suite) const /*override*/;

    virtual ::webrtc::SSLProtocolVersion GetSslVersion() const /*override*/;

    virtual bool GetSslVersionBytes(int* version) const /*override*/;

    virtual bool ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material) /*override*/;

    virtual ushort GetPeerSignatureAlgorithm() const /*override*/;

    virtual bool SetDtlsSrtpCryptoSuites(::std::vector<int> const& ciphers) /*override*/;

    virtual bool GetDtlsSrtpCryptoSuite(int* crypto_suite) const /*override*/;

    virtual bool IsTlsConnected() /*override*/;

    virtual int GetRetransmissionCount() const /*override*/;

    virtual bool SetSslGroupIds(::std::vector<ushort> const& groups) /*override*/;

    virtual ushort GetSslGroupId() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int BeginSSL();

    MCNAPI void Cleanup(uchar alert);

    MCNAPI int ContinueSSL();

    MCNAPI void Error(::std::string_view context, int err, uchar alert, bool signal);

    MCNAPI void MaybeSetTimeout();

    MCNAPI void OnEvent(int events, int err);

    MCNAPI OpenSSLStreamAdapter(
        ::std::unique_ptr<::webrtc::StreamInterface>            stream,
        ::absl::AnyInvocable<void(::webrtc::SSLHandshakeError)> handshake_error,
        ::webrtc::FieldTrialsView const*                        field_trials
    );

    MCNAPI bool VerifyPeerCertificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int SSLVerifyCallback(::x509_store_ctx_st* store, void* arg);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::webrtc::StreamInterface>            stream,
        ::absl::AnyInvocable<void(::webrtc::SSLHandshakeError)> handshake_error,
        ::webrtc::FieldTrialsView const*                        field_trials
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity);

    MCNAPI ::webrtc::SSLIdentity* $GetIdentityForTesting() const;

    MCNAPI void $SetServerRole(::webrtc::SSLRole role);

    MCNAPI ::webrtc::SSLPeerCertificateDigestError $SetPeerCertificateDigest(
        ::std::string_view                                     digest_alg,
        ::webrtc::ArrayView<uchar const, 18446744073709546905> digest_val
    );

    MCNAPI ::std::unique_ptr<::webrtc::SSLCertChain> $GetPeerSSLCertChain() const;

    MCNAPI int $StartSSL();

    MCNAPI void $SetMode(::webrtc::SSLMode mode);

    MCNAPI void $SetMaxProtocolVersion(::webrtc::SSLProtocolVersion version);

    MCNAPI void $SetInitialRetransmissionTimeout(int timeout_ms);

    MCNAPI void $SetMTU(int mtu);

    MCNAPI ::webrtc::StreamResult
    $Read(::webrtc::ArrayView<uchar, 18446744073709546905> data, uint64& read, int& error);

    MCNAPI ::webrtc::StreamResult
    $Write(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int& error);

    MCNAPI void $Close();

    MCNAPI ::webrtc::StreamState $GetState() const;

    MCNAPI ::std::optional<::std::string_view> $GetTlsCipherSuiteName() const;

    MCNAPI bool $GetSslCipherSuite(int* cipher_suite) const;

    MCNAPI ::webrtc::SSLProtocolVersion $GetSslVersion() const;

    MCNAPI bool $GetSslVersionBytes(int* version) const;

    MCNAPI bool $ExportSrtpKeyingMaterial(::webrtc::BufferT<uchar, 1>& keying_material);

    MCNAPI ushort $GetPeerSignatureAlgorithm() const;

    MCNAPI bool $SetDtlsSrtpCryptoSuites(::std::vector<int> const& ciphers);

    MCNAPI bool $GetDtlsSrtpCryptoSuite(int* crypto_suite) const;

    MCNAPI bool $IsTlsConnected();

    MCNAPI int $GetRetransmissionCount() const;

    MCNAPI bool $SetSslGroupIds(::std::vector<ushort> const& groups);

    MCNAPI ushort $GetSslGroupId() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
