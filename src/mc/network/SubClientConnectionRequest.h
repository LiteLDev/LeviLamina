#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"

// auto generated forward declare list
// clang-format off
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
// clang-format on

class SubClientConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
    SubClientConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubClientConnectionRequest() /*override*/;

    virtual bool _isAuthTypeWellFormed() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubClientConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::SubClientConnectionRequest create(
        ::ConnectionAuthInfo const&             authInfo,
        ::std::string const&                    deviceId,
        ::std::string const&                    selfSignedId,
        uint64                                  clientRandomId,
        ::std::string const&                    platformId,
        ::ConnectionSkinInfo const&             skinInfo,
        ::InputMode                             currentInputMode,
        ::std::string const&                    thirdPartyName,
        ::std::string const&                    platformOnlineId,
        ::std::string const&                    platformOfflineId,
        bool                                    compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const&   options,
        ::std::optional<::Social::Nonce> const& nonce
    );
#endif

    MCAPI static ::SubClientConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
