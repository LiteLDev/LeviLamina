#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/web_services/EduRole.h"
#include "mc/certificates/identity/web_services/IEduWebService.h"
#include "mc/certificates/identity/web_services/SigninContext.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
class ResponseVerifier;
struct EDUConfigData;
struct ServicePack;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

namespace WebServices {

class EduWebService : public ::WebServices::IEduWebService, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc8518d;
    ::ll::UntypedStorage<8, 64> mUnk94a7fb;
    ::ll::UntypedStorage<8, 64> mUnk3498df;
    ::ll::UntypedStorage<8, 32> mUnkc05d61;
    ::ll::UntypedStorage<8, 8>  mUnkc67318;
    // NOLINTEND

public:
    // prevent constructor by default
    EduWebService& operator=(EduWebService const&);
    EduWebService(EduWebService const&);
    EduWebService();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~EduWebService() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~EduWebService() /*override*/;
#endif

    virtual void setEula() /*override*/;

#ifdef LL_PLAT_S
    virtual void
    setPurchaseReceipt(::std::string const&, ::std::function<void(bool)> const&, ::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void setSkin(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void setSkin(::std::string const& newSkin) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
    ) /*override*/;
#else // LL_PLAT_C
    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>,
        ::std::string const&
    ) /*override*/;
#else // LL_PLAT_C
    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)>) /*override*/;
#else // LL_PLAT_C
    virtual void
    sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduWebService(
        ::std::unique_ptr<::ResponseVerifier>                             verifier,
        ::std::function<::std::string const()>                            getEduIdentityToken,
        ::std::function<::std::optional<::EDUConfigData>(::Json::Value&)> clientConfigParser,
        ::std::string const&                                              appSessionId
    );

    MCNAPI void _authenticateWithService(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                                     callback,
        ::Json::Value                unverifiedJson,
        ::WebServices::SigninContext context
    );

    MCNAPI void _authenticateWithService(
        ::Bedrock::Http::Response response,
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                                     callback,
        ::WebServices::SigninContext context
    );

    MCNAPI ::Bedrock::Http::Request
    getRequest(::std::string_view url, ::std::string apiVersion, bool includeAuth, ::Json::Value&& body);

    MCNAPI ::WebServices::EduSignin::EduRole getRole(::std::string const& str);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ResponseVerifier>                             verifier,
        ::std::function<::std::string const()>                            getEduIdentityToken,
        ::std::function<::std::optional<::EDUConfigData>(::Json::Value&)> clientConfigParser,
        ::std::string const&                                              appSessionId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setEula();

    MCNAPI void $setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    );

    MCNAPI void $setSkin(::std::string const& newSkin);

    MCNAPI void $signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    );

    MCNAPI void $signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    );

    MCNAPI void $sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEduWebService();

    MCNAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};

} // namespace WebServices
