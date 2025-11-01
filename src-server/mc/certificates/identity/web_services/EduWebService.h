#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/web_services/IEduWebService.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
struct ServicePack;
namespace WebServices::EduSignin { struct SigninError; }
namespace WebServices::EduSignin { struct SigninResponse; }
// clang-format on

namespace WebServices {

class EduWebService : public ::WebServices::IEduWebService, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3d9fcd;
    ::ll::UntypedStorage<8, 64> mUnk1bb14b;
    ::ll::UntypedStorage<8, 64> mUnk3498df;
    ::ll::UntypedStorage<8, 32> mUnk11b994;
    ::ll::UntypedStorage<8, 8> mUnk3d0bad;
    // NOLINTEND

public:
    // prevent constructor by default
    EduWebService& operator=(EduWebService const&);
    EduWebService(EduWebService const&);
    EduWebService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EduWebService() /*override*/ = default;

    // vIndex: 1
    virtual void setEula() /*override*/;

    // vIndex: 2
    virtual void setPurchaseReceipt(::std::string const&, ::std::function<void(bool)> const&, ::std::string const&) /*override*/;

    // vIndex: 3
    virtual void setSkin(::std::string const&) /*override*/;

    // vIndex: 4
    virtual void signinForDemo(::std::function<void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>) /*override*/;

    // vIndex: 5
    virtual void signin(::std::function<void(::std::variant<::WebServices::EduSignin::SigninResponse, ::WebServices::EduSignin::SigninError>)>, ::std::string const&) /*override*/;

    // vIndex: 6
    virtual void sendInitialPackRequest(::std::function<void(::std::vector<::ServicePack>)>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
