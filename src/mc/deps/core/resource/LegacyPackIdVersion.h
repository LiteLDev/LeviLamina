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
    ::ll::UntypedStorage<8, 32> mUnkd3a327;
    ::ll::UntypedStorage<8, 32> mUnk11a54a;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const&);
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackIdVersion getUpgradedPackId() const;

    MCNAPI ~LegacyPackIdVersion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
