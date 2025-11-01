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
    // vIndex: 0
    virtual ~BrazeSDKManager() = default;

    // vIndex: 1
    virtual void enableBrazeSDK();

    // vIndex: 2
    virtual void disableBrazeSDK();

    // vIndex: 3
    virtual void setBrazeId(::std::string const&);

    // vIndex: 4
    virtual void _enableBrazeSDK();

    // vIndex: 5
    virtual void _disableBrazeSDK();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
