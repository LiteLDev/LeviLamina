#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/commerce/EntitlementChangeListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace SDL { struct ServiceResponseOfContinuation; }
namespace SDL { struct ServiceResponseOfPage; }
// clang-format on

class ServicesManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ServicesManager inner types declare
    // clang-format off
    class InventoryEntitlementChangeListener;
    // clang-format on

    // ServicesManager inner types define
    class InventoryEntitlementChangeListener : public ::EntitlementChangeListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk71d582;
        // NOLINTEND

    public:
        // prevent constructor by default
        InventoryEntitlementChangeListener& operator=(InventoryEntitlementChangeListener const&);
        InventoryEntitlementChangeListener(InventoryEntitlementChangeListener const&);
        InventoryEntitlementChangeListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual void _onEntitlementChanged() /*override*/;

        // vIndex: 0
        virtual ~InventoryEntitlementChangeListener() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnked93bf;
    ::ll::UntypedStorage<8, 288> mUnkf2b6f2;
    ::ll::UntypedStorage<8, 24>  mUnk4611dd;
    ::ll::UntypedStorage<8, 24>  mUnk493687;
    ::ll::UntypedStorage<8, 24>  mUnkcff7e5;
    ::ll::UntypedStorage<8, 24>  mUnka5d218;
    ::ll::UntypedStorage<8, 8>   mUnk4de710;
    ::ll::UntypedStorage<8, 16>  mUnk7c3814;
    ::ll::UntypedStorage<8, 24>  mUnk732a02;
    ::ll::UntypedStorage<8, 16>  mUnkb221f4;
    ::ll::UntypedStorage<8, 16>  mUnka7d13e;
    ::ll::UntypedStorage<8, 16>  mUnk402c1d;
    ::ll::UntypedStorage<8, 16>  mUnk9e2383;
    ::ll::UntypedStorage<8, 16>  mUnk156bb5;
    ::ll::UntypedStorage<8, 16>  mUnk46e4da;
    ::ll::UntypedStorage<8, 24>  mUnke67711;
    ::ll::UntypedStorage<8, 24>  mUnkfec892;
    ::ll::UntypedStorage<8, 24>  mUnk8e8980;
    ::ll::UntypedStorage<8, 64>  mUnk48e4dd;
    ::ll::UntypedStorage<8, 64>  mUnk993016;
    ::ll::UntypedStorage<8, 64>  mUnka969fe;
    ::ll::UntypedStorage<8, 32>  mUnk892dfc;
    ::ll::UntypedStorage<8, 16>  mUnkefff26;
    ::ll::UntypedStorage<8, 16>  mUnkd04297;
    ::ll::UntypedStorage<8, 16>  mUnkef80e0;
    ::ll::UntypedStorage<8, 232> mUnkca09a3;
    ::ll::UntypedStorage<8, 32>  mUnk812889;
    ::ll::UntypedStorage<8, 24>  mUnk2ec7f0;
    ::ll::UntypedStorage<8, 16>  mUnk146747;
    ::ll::UntypedStorage<8, 8>   mUnke05c0b;
    ::ll::UntypedStorage<4, 20>  mUnkbd667b;
    ::ll::UntypedStorage<4, 20>  mUnk30a3da;
    ::ll::UntypedStorage<4, 20>  mUnk76a06e;
    ::ll::UntypedStorage<4, 20>  mUnk8a2e7b;
    ::ll::UntypedStorage<4, 20>  mUnk4e6e76;
    ::ll::UntypedStorage<4, 20>  mUnkf628e0;
    ::ll::UntypedStorage<8, 8>   mUnkefcdac;
    ::ll::UntypedStorage<8, 16>  mUnk44e8a9;
    ::ll::UntypedStorage<8, 16>  mUnkdff282;
    ::ll::UntypedStorage<8, 16>  mUnka44c99;
    ::ll::UntypedStorage<8, 16>  mUnk25ab31;
    ::ll::UntypedStorage<8, 16>  mUnkac7f56;
    ::ll::UntypedStorage<8, 16>  mUnk34aeed;
    ::ll::UntypedStorage<8, 16>  mUnk304aa4;
    ::ll::UntypedStorage<8, 16>  mUnk9df47e;
    ::ll::UntypedStorage<8, 32>  mUnk8fdb98;
    ::ll::UntypedStorage<8, 8>   mUnkfa4be6;
    ::ll::UntypedStorage<8, 8>   mUnka3bad8;
    ::ll::UntypedStorage<8, 8>   mUnke6c294;
    ::ll::UntypedStorage<1, 1>   mUnk5fc51a;
    ::ll::UntypedStorage<1, 1>   mUnk71bd58;
    ::ll::UntypedStorage<1, 1>   mUnkccc16e;
    ::ll::UntypedStorage<1, 1>   mUnkedfa15;
    ::ll::UntypedStorage<1, 1>   mUnkd12b84;
    ::ll::UntypedStorage<4, 4>   mUnkd09019;
    ::ll::UntypedStorage<4, 4>   mUnk32f572;
    ::ll::UntypedStorage<4, 4>   mUnk8bd546;
    ::ll::UntypedStorage<4, 4>   mUnk1a3726;
    ::ll::UntypedStorage<1, 1>   mUnka8b46d;
    ::ll::UntypedStorage<8, 24>  mUnk6d90d0;
    ::ll::UntypedStorage<8, 16>  mUnkbb37ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicesManager& operator=(ServicesManager const&);
    ServicesManager(ServicesManager const&);
    ServicesManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServicesManager() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
