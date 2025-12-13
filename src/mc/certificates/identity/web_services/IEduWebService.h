#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EDUConfigData;
struct ServicePack;
namespace Json { class Value; }
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

namespace WebServices {

struct IEduWebService {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IEduWebService() = default;
#else // LL_PLAT_C
    virtual ~IEduWebService();
#endif

    virtual void setEula() = 0;

    virtual void setPurchaseReceipt(::std::string const&, ::std::function<void(bool)> const&, ::std::string const&) = 0;

    virtual void setSkin(::std::string const&) = 0;

    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
    ) = 0;

    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>,
        ::std::string const&
    ) = 0;

    virtual void sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)>) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void commonSigninBody(::Json::Value& body, ::std::string const& appSessionId);

    MCNAPI_C static void setupDemoIdentity(::Json::Value& body);
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

} // namespace WebServices
