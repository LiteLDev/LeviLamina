#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct SpawnActorEntry;
// clang-format on

class SpawnActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd2158b;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorComponent& operator=(SpawnActorComponent const&);
    SpawnActorComponent(SpawnActorComponent const&);
    SpawnActorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::std::vector<::SpawnActorEntry>& getSpawnEntries();

    MCAPI ::SpawnActorComponent& operator=(::SpawnActorComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
};
