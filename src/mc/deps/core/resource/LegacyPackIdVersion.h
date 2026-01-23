#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct LegacyPackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd49ab2;
    ::ll::UntypedStorage<8, 32> mUnk747309;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackIdVersion getUpgradedPackId() const;

    MCNAPI_C ::LegacyPackIdVersion& operator=(::LegacyPackIdVersion const&);

    MCNAPI ~LegacyPackIdVersion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
