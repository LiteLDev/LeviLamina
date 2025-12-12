#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrazeSDKManager : public ::std::enable_shared_from_this<::BrazeSDKManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdb3647;
    // NOLINTEND

public:
    // prevent constructor by default
    BrazeSDKManager& operator=(BrazeSDKManager const&);
    BrazeSDKManager(BrazeSDKManager const&);
    BrazeSDKManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrazeSDKManager() = default;

    virtual void enableBrazeSDK();

    virtual void disableBrazeSDK();

    virtual void setBrazeId(::std::string const&);

    virtual void _enableBrazeSDK();

    virtual void _disableBrazeSDK();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::shared_ptr<::BrazeSDKManager> getShared();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static bool& mInitialized();

    MCNAPI static ::std::shared_ptr<::BrazeSDKManager>& mInstance();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $enableBrazeSDK();

    MCNAPI void $disableBrazeSDK();

    MCNAPI void $setBrazeId(::std::string const&);

    MCNAPI void $_enableBrazeSDK();

    MCNAPI void $_disableBrazeSDK();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
