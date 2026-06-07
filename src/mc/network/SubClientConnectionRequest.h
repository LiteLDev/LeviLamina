#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"

// auto generated forward declare list
// clang-format off
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct SyncedClientOptionsComponent;
// clang-format on

class SubClientConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&);
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
    MCNAPI SubClientConnectionRequest(::SubClientConnectionRequest const& other);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::SubClientConnectionRequest create(
        ::ConnectionAuthInfo const&           authInfo,
        ::std::string const&                  deviceId,
        ::std::string const&                  selfSignedId,
        uint64                                clientRandomId,
        ::std::string const&                  platformId,
        ::ConnectionSkinInfo const&           skinInfo,
        ::InputMode                           currentInputMode,
        ::std::string const&                  thirdPartyName,
        ::std::string const&                  platformOnlineId,
        ::std::string const&                  platformOfflineId,
        bool                                  compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const& options
    );
#endif

    MCNAPI static ::SubClientConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientConnectionRequest const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
