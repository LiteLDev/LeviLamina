#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Identity { class IEduAuth; }
namespace Identity { struct ServiceResponse; }
// clang-format on

class ActiveDirectoryIdentity : public ::Bedrock::EnableNonOwnerReferences,
                                public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1000> mUnk46e055;
    ::ll::UntypedStorage<1, 1>    mUnk4d1db4;
    ::ll::UntypedStorage<1, 1>    mUnka7ac16;
    ::ll::UntypedStorage<8, 120>  mUnk27931c;
    ::ll::UntypedStorage<8, 8>    mUnkb1e89c;
    ::ll::UntypedStorage<8, 8>    mUnkb73670;
    ::ll::UntypedStorage<8, 8>    mUnk3b60d4;
    ::ll::UntypedStorage<8, 8>    mUnk9f179e;
    ::ll::UntypedStorage<8, 16>   mUnk16c98e;
    ::ll::UntypedStorage<8, 8>    mUnk89d1c9;
    ::ll::UntypedStorage<8, 88>   mUnk3ae843;
    ::ll::UntypedStorage<8, 80>   mUnke3078c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentity& operator=(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveDirectoryIdentity() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& IS_VALID_FIELD();

    MCAPI static ::std::string const& JWT_EXPIRATION_FIELD();

    MCAPI static ::std::string const& JWT_REQUEST_ID_FIELD();

    MCAPI static ::std::string const& PAYLOAD_FIELD();

    MCAPI static ::std::string const& PUBLIC_KEY();

    MCAPI static ::std::string const& REQUEST_ID_FIELD();

    MCAPI static ::std::string const& RESPONSE_FIELD();

    MCAPI static ::std::string& mCachedServiceEndpoint();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
