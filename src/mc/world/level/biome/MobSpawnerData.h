#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/biome/MobSpawnRules.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Random;
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class MobSpawnerData : public ::WeightedRandom::WeighedRandomItem {
public:
    // MobSpawnerData inner types define
    using OnSpawnHerd = ::std::function<void(::std::vector<::Mob*>&, ::Random&)>;

    using OnSelectActor = ::std::function<::ActorDefinitionIdentifier(::Random&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                             mIdentifier;
    ::ll::TypedStorage<8, 392, ::MobSpawnRules>                                         mSpawnRules;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::Mob*>&, ::Random&)>> mOnSpawnHerd;
    ::ll::TypedStorage<8, 64, ::std::function<::ActorDefinitionIdentifier(::Random&)>>  mOnSelectEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MobSpawnerData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MobSpawnerData from(::br::worldgen::SpawnerData const& spawnerData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
