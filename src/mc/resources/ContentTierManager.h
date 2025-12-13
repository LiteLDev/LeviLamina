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
    virtual ::ContentTierInfo getContentTierInfo() const /*override*/;

    virtual bool shouldDeviceAllowAnimation() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~ContentTierManager() /*override*/;
#else // LL_PLAT_C
    virtual ~ContentTierManager() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S explicit ContentTierManager(::std::function<bool()> isHardwareRayTracingCompatible);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::std::function<bool()> isHardwareRayTracingCompatible);
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
