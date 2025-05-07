#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/Enum.h"
#include "mc/certificates/identity/IEduSsoStrategy.h"
#include "mc/certificates/identity/SsoPromptMode.h"
#include "mc/deps/identity/edu_common/EduResourceType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct AccessTokenInfo;
namespace Identity { class IEduAuth; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Json { class Value; }
// clang-format on

namespace Identity::Strategies {

class EduSso : public ::Identity::IEduSsoStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk43468d;
    ::ll::UntypedStorage<8, 16> mUnked046a;
    ::ll::UntypedStorage<8, 8>  mUnk965c33;
    // NOLINTEND

public:
    // prevent constructor by default
    EduSso& operator=(EduSso const&);
    EduSso(EduSso const&);
    EduSso();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Json::Value clientConfig(::Json::Value const&) const /*override*/;

    // vIndex: 2
    virtual ::Identity::_TokenRefreshState::Enum
    refreshToken(::Identity::IEduAuth&, ::AccessTokenInfo const&, int64, ::Identity::EduResourceType, ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>, ::std::function<void()>) /*override*/
        ;

    // vIndex: 3
    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) /*override*/;

    // vIndex: 4
    virtual ::Identity::SsoPromptMode
    signIn(::Identity::IEduAuth&, int64, ::std::function<void()>, ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>) /*override*/
        ;

    // vIndex: 5
    virtual void signInSuccess(::std::string const&) /*override*/;

    // vIndex: 6
    virtual void demoSignInSuccess() /*override*/;

    // vIndex: 7
    virtual void resetAuthentication(::Identity::IEduAuth&, bool) /*override*/;

    // vIndex: 8
    virtual bool isDemoConversion() const /*override*/;

    // vIndex: 9
    virtual void
    signInGraph(::Identity::IEduAuth&, ::std::string const&, ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>) /*override*/
        ;

    // vIndex: 0
    virtual ~EduSso() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity::Strategies
