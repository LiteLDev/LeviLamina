#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"

// auto generated forward declare list
// clang-format off
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct PlayerPartyInfo;
struct SyncedClientOptionsComponent;
namespace Social { struct Nonce; }
// clang-format on

class ConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
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
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ::std::string getDeviceModel() const;

    MCAPI ::std::string getEduJoinerToHostNonce() const;

    MCAPI ::std::string getEduSessionToken() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCAPI ::std::optional<::Social::Nonce> getNonce() const;

    MCAPI ::std::optional<::PlayerPartyInfo> getPartyInfo() const;

    MCAPI bool isEduMode() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ConnectionRequest create(
        ::ConnectionAuthInfo const&               authInfo,
        ::std::string const&                      selfSignedId,
        ::std::string const&                      serverAddress,
        uint64                                    clientRandomId,
        ::ConnectionSkinInfo const&               skinInfo,
        ::std::string const&                      deviceId,
        ::InputMode                               currentInputMode,
        int                                       guiScale,
        ::std::string const&                      languageCode,
        bool                                      isEditorMode,
        bool                                      isEduMode,
        ::std::unique_ptr<::WebToken>             eduTokenChain,
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

    MCAPI static ::ConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConnectionRequest const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isAuthTypeWellFormed() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
