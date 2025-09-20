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
    // ContentTierManager inner types define
    enum class ContentMemoryTier : int {
        UltraLowTier  = 5,
        SuperLowTier  = 11,
        LowTier       = 12,
        MediumTier    = 18,
        HighTier      = 24,
        SuperHighTier = 32,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk44461e;
    ::ll::UntypedStorage<4, 4>  mUnkb64d13;
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

    // vIndex: 0
    virtual ~ContentTierManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContentTierManager(::std::function<bool()> isHardwareRayTracingCompatible);

    MCNAPI void _calculateMemoryTier();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
