#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/OpenSSLAdapter.h"
#include "mc/external/webrtc/SSLAdapterFactory.h"
#include "mc/external/webrtc/SSLMode.h"
#include "mc/external/webrtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertificateVerifier; }
namespace webrtc { class SSLIdentity; }
namespace webrtc { class Socket; }
// clang-format on

namespace webrtc {

class OpenSSLAdapterFactory : public ::webrtc::SSLAdapterFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk58c2f3;
    ::ll::UntypedStorage<4, 4> mUnk823901;
    ::ll::UntypedStorage<1, 1> mUnkbc28b2;
    ::ll::UntypedStorage<8, 8> mUnk15306c;
    ::ll::UntypedStorage<8, 8> mUnk721341;
    ::ll::UntypedStorage<8, 8> mUnkdb85ea;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLAdapterFactory& operator=(OpenSSLAdapterFactory const&);
    OpenSSLAdapterFactory(OpenSSLAdapterFactory const&);
    OpenSSLAdapterFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLAdapterFactory() /*override*/ = default;

    virtual void SetMode(::webrtc::SSLMode) /*override*/;

    virtual void SetCertVerifier(::webrtc::SSLCertificateVerifier*) /*override*/;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity>) /*override*/;

    virtual void SetRole(::webrtc::SSLRole) /*override*/;

    virtual void SetIgnoreBadCert(bool) /*override*/;

    virtual ::webrtc::OpenSSLAdapter* CreateAdapter(::webrtc::Socket*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
