#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct EduWorldsScreenCapabilities : public ::TypedScreenCapabilities<::EduWorldsScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7fa736;
    ::ll::UntypedStorage<1, 1> mUnk7a844d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduWorldsScreenCapabilities& operator=(EduWorldsScreenCapabilities const&);
    EduWorldsScreenCapabilities(EduWorldsScreenCapabilities const&);
    EduWorldsScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduWorldsScreenCapabilities() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
