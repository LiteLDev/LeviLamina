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
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const&);
    LegacyPackIdVersion(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyPackIdVersion(::std::string const& id, ::std::string const& version);

    MCAPI ::PackIdVersion getUpgradedPackId() const;

    MCAPI ~LegacyPackIdVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& id, ::std::string const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
