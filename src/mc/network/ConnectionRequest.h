#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ILevel;
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct PlayerPartyInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
// clang-format on

class ConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
    ConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectionRequest() /*override*/;

    virtual bool _isAuthTypeWellFormed() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);

    MCNAPI bool clientIsEditorCapable() const;

    MCNAPI ::EditorConnectionJoinIntent getClientEditorConnectionIntent() const;

    MCAPI ::std::string getDeviceModel() const;

    MCNAPI ::std::string getEduJoinerToHostNonce() const;

    MCNAPI ::std::string getEduSessionToken() const;

    MCNAPI ::std::string getEduTokenChain() const;

    MCNAPI ::std::optional<::PlayerPartyInfo> getPartyInfo() const;

    MCNAPI bool isEduMode() const;

    MCNAPI ::Bedrock::Result<::EditorConnectionJoinIntent>
    validateEditorConnectionJoinIntentAgainstServerPolicy(::gsl::not_null<::ILevel*> level) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::ConnectionRequest create(
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::ConnectionAuthInfo const&               authInfo,
        ::std::string const&                      selfSignedId,
        ::std::string const&                      serverAddress,
        uint64                                    clientRandomId,
        ::ConnectionSkinInfo const&               skinInfo,
        ::std::string const&                      deviceId,
        ::InputMode                               currentInputMode,
        int                                       guiScale,
        ::std::string const&                      languageCode,
        bool                                      clientIsEditorCapable,
        ::EditorConnectionJoinIntent              clientEditorConnectionIntent,
        bool                                      isEduMode,
        ::std::optional<::WebToken>               eduTokenChain,
        ::std::string                             eduSessionToken,
        ::std::string                             eduJoinerToHostNonce,
        ::edu::Role                               classRole,
        ::std::string const&                      platformId,
        ::std::string const&                      thirdPartyName,
        ::std::string const&                      platformOnlineId,
        ::std::string const&                      platformOfflineId,
        ::std::optional<::PlayerPartyInfo> const& partyInfo,
        bool                                      compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const&     options,
        ::std::optional<::Social::Nonce> const&   nonce
    );
#endif

    MCNAPI static ::ConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isAuthTypeWellFormed() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
