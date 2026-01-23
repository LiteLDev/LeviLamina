#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DelayFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mMin;
    ::ll::TypedStorage<4, 4, int>            mMax;
    ::ll::TypedStorage<4, 4, int>            mSpawnChance;
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayFilter(DelayFilter const&);
    DelayFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::Legacy::Spawn::DelayFilter& operator=(::SharedTypes::Legacy::Spawn::DelayFilter&&);

    MCFOLD ::SharedTypes::Legacy::Spawn::DelayFilter& operator=(::SharedTypes::Legacy::Spawn::DelayFilter const&);
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
