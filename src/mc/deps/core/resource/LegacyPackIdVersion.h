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
    LegacyPackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyPackIdVersion(::LegacyPackIdVersion const&);

    MCNAPI LegacyPackIdVersion(::std::string const& id, ::std::string const& version);

    MCNAPI ::PackIdVersion getUpgradedPackId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyPackIdVersion const&);

    MCNAPI void* $ctor(::std::string const& id, ::std::string const& version);
    // NOLINTEND
};
