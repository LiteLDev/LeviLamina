#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentTierManager.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
// clang-format on

class ContentTierManager : public ::IContentTierManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk44461e;
    ::ll::UntypedStorage<1, 1>  mUnkf4791a;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTierManager& operator=(ContentTierManager const&);
    ContentTierManager(ContentTierManager const&);
    ContentTierManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::ContentTierInfo getContentTierInfo() const /*override*/;

    // vIndex: 2
    virtual bool shouldDeviceAllowAnimation() const /*override*/;

    // vIndex: 0
    virtual ~ContentTierManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContentTierManager(::std::function<bool()> isHardwareRayTracingCompatible);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<bool()> isHardwareRayTracingCompatible);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContentTierInfo $getContentTierInfo() const;

    MCNAPI bool $shouldDeviceAllowAnimation() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
