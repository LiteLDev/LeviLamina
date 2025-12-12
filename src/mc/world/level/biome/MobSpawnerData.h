#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Random;
struct ActorDefinitionIdentifier;
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class MobSpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk4aea32;
    ::ll::UntypedStorage<8, 392> mUnkfcb1af;
    ::ll::UntypedStorage<8, 64>  mUnkbd645e;
    ::ll::UntypedStorage<8, 64>  mUnkfd035f;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnerData& operator=(MobSpawnerData const&);
    MobSpawnerData(MobSpawnerData const&);
    MobSpawnerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MobSpawnerData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MobSpawnerData from(::br::worldgen::SpawnerData const& spawnerData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
