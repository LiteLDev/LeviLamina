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
    virtual ~IEduWebService();

    virtual void setEula() = 0;

    virtual void setPurchaseReceipt(
        ::std::string const&               receipt,
        ::std::function<void(bool)> const& callback,
        ::std::string const&               anonimizedOId
    ) = 0;

    virtual void setSkin(::std::string const& newSkin) = 0;

    virtual void signinForDemo(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
            callback
    ) = 0;

    virtual void signin(
        ::std::function<
            void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>
                             callback,
        ::std::string const& delegationKey
    ) = 0;

    virtual void sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)> packReturnCallback) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace WebServices
