#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Placement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcd9bf4;
    ::ll::UntypedStorage<8, 32> mUnk16b91c;
    ::ll::UntypedStorage<8, 32> mUnk737597;
    ::ll::UntypedStorage<8, 32> mUnkae3745;
    // NOLINTEND

public:
    // prevent constructor by default
    Placement(Placement const&);
    Placement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::Spawn::Placement& operator=(::SharedTypes::v1_21_60::Spawn::Placement const&);

    MCNAPI ::SharedTypes::v1_21_60::Spawn::Placement& operator=(::SharedTypes::v1_21_60::Spawn::Placement&&);

    MCNAPI ~Placement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
