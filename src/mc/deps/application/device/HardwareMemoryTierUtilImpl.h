#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/HardwareMemoryTierUtil.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"

class HardwareMemoryTierUtilImpl : public ::HardwareMemoryTierUtil {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc3e618;
    // NOLINTEND

public:
    // prevent constructor by default
    HardwareMemoryTierUtilImpl& operator=(HardwareMemoryTierUtilImpl const&);
    HardwareMemoryTierUtilImpl(HardwareMemoryTierUtilImpl const&);
    HardwareMemoryTierUtilImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HardwareMemoryTier getHardwareMemoryTier() const /*override*/;

    // vIndex: 0
    virtual ~HardwareMemoryTierUtilImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HardwareMemoryTier $getHardwareMemoryTier() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
