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
    virtual bool GetSslCipherSuite(int*);

    // vIndex: 16
    virtual ::rtc::SSLProtocolVersion GetSslVersion() const = 0;

    // vIndex: 17
    virtual bool GetSslVersionBytes(int*) const = 0;

    // vIndex: 18
    virtual bool ExportKeyingMaterial(::std::string_view, uchar const*, uint64, bool, uchar*, uint64);

    // vIndex: 19
    virtual ushort GetPeerSignatureAlgorithm() const = 0;

    // vIndex: 20
    virtual bool SetDtlsSrtpCryptoSuites(::std::vector<int> const&);

    // vIndex: 21
    virtual bool GetDtlsSrtpCryptoSuite(int*);

    // vIndex: 22
    virtual bool IsTlsConnected() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::rtc::SSLStreamAdapter>
        Create(::std::unique_ptr<::rtc::StreamInterface>, ::absl::AnyInvocable<void(::rtc::SSLHandshakeError)>);

    MCAPI static ::std::string SslCipherSuiteToName(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $GetSslCipherSuite(int*);

    MCAPI bool $ExportKeyingMaterial(::std::string_view, uchar const*, uint64, bool, uchar*, uint64);

    MCAPI bool $SetDtlsSrtpCryptoSuites(::std::vector<int> const&);

    MCAPI bool $GetDtlsSrtpCryptoSuite(int*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
