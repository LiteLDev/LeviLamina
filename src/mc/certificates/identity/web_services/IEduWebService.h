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
    virtual ~IEduWebService() = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace WebServices
