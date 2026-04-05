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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const&);
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackIdVersion getUpgradedPackId() const;

#ifdef LL_PLAT_C
    MCNAPI ::LegacyPackIdVersion& operator=(::LegacyPackIdVersion const&);
#endif

    MCNAPI ~LegacyPackIdVersion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
