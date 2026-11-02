#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct EduServersScreenCapabilities : public ::TypedScreenCapabilities<::EduServersScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7169c1;
    // NOLINTEND

public:
    // prevent constructor by default
    EduServersScreenCapabilities& operator=(EduServersScreenCapabilities const&);
    EduServersScreenCapabilities(EduServersScreenCapabilities const&);
    EduServersScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduServersScreenCapabilities() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
