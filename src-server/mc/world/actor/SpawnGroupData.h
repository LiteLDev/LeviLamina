#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on

class SpawnGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnRules>> mSpawnRules;
    // NOLINTEND

};
