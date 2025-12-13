#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLMode.h"
#include "mc/external/rtc/SSLPeerCertificateDigestError.h"
#include "mc/external/rtc/SSLProtocolVersion.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/rtc/StreamInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLIdentity; }
// clang-format on

namespace rtc {

class SSLStreamAdapter : public ::rtc::StreamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a6527;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLStreamAdapter& operator=(SSLStreamAdapter const&);
    SSLStreamAdapter(SSLStreamAdapter const&);
    SSLStreamAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SSLStreamAdapter() /*override*/;

    // vIndex: 6
    virtual void SetIdentity(::std::unique_ptr<::rtc::SSLIdentity>) = 0;

    // vIndex: 7
    virtual ::rtc::SSLIdentity* GetIdentityForTesting() const = 0;

    // vIndex: 8
    virtual void SetServerRole(::rtc::SSLRole) = 0;

    // vIndex: 9
    virtual void SetMode(::rtc::SSLMode) = 0;

    // vIndex: 10
    virtual void SetMaxProtocolVersion(::rtc::SSLProtocolVersion) = 0;

    // vIndex: 11
    virtual void SetInitialRetransmissionTimeout(int) = 0;

    // vIndex: 12
    virtual int StartSSL() = 0;

    // vIndex: 13
    virtual bool
    SetPeerCertificateDigest(::std::string_view, uchar const*, uint64, ::rtc::SSLPeerCertificateDigestError*) = 0;

    // vIndex: 14
    virtual ::std::unique_ptr<::rtc::SSLCertChain> GetPeerSSLCertChain() const = 0;

    // vIndex: 15
    virtual bool GetSslCipherSuite(int* cipher_suite);

    // vIndex: 16
    virtual ::rtc::SSLProtocolVersion GetSslVersion() const = 0;

    // vIndex: 17
    virtual bool GetSslVersionBytes(int*) const = 0;

    // vIndex: 18
    virtual bool ExportKeyingMaterial(
        ::std::string_view label,
        uchar const*       context,
        uint64             context_len,
        bool               use_context,
        uchar*             result,
        uint64             result_len
    );

    // vIndex: 19
    virtual ushort GetPeerSignatureAlgorithm() const = 0;

    // vIndex: 20
    virtual bool SetDtlsSrtpCryptoSuites(::std::vector<int> const& crypto_suites);

    // vIndex: 21
    virtual bool GetDtlsSrtpCryptoSuite(int* crypto_suite);

    // vIndex: 22
    virtual bool IsTlsConnected() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::rtc::SSLStreamAdapter> Create(
        ::std::unique_ptr<::rtc::StreamInterface>            stream,
        ::absl::AnyInvocable<void(::rtc::SSLHandshakeError)> handshake_error
    );

    MCNAPI static ::std::string SslCipherSuiteToName(int cipher_suite);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $GetSslCipherSuite(int* cipher_suite);

    MCNAPI bool $ExportKeyingMaterial(
        ::std::string_view label,
        uchar const*       context,
        uint64             context_len,
        bool               use_context,
        uchar*             result,
        uint64             result_len
    );

    MCNAPI bool $SetDtlsSrtpCryptoSuites(::std::vector<int> const& crypto_suites);

    MCNAPI bool $GetDtlsSrtpCryptoSuite(int* crypto_suite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
