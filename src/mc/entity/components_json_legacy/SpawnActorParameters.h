#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

struct SpawnActorParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk40f98c;
    ::ll::UntypedStorage<4, 4>   mUnk55c489;
    ::ll::UntypedStorage<4, 4>   mUnk472480;
    ::ll::UntypedStorage<8, 16>  mUnkca10e7;
    ::ll::UntypedStorage<8, 32>  mUnk1d468a;
    ::ll::UntypedStorage<8, 32>  mUnkee7547;
    ::ll::UntypedStorage<8, 104> mUnk5dad47;
    ::ll::UntypedStorage<8, 64>  mUnk12c523;
    ::ll::UntypedStorage<1, 1>   mUnkd61ee6;
    ::ll::UntypedStorage<1, 1>   mUnk1b80b3;
    ::ll::UntypedStorage<4, 4>   mUnkc5692c;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnActorParameters();

    MCAPI SpawnActorParameters(::SpawnActorParameters const&);

    MCAPI SpawnActorParameters(::SpawnActorParameters&&);

    MCAPI void setItem(::ItemDescriptor const& itemDescriptor);

    MCAPI void setSpawnEntity(::std::string const& name);

    MCAPI void setSpawnEvent(::std::string const& name);

    MCAPI void setSpawnSound(::std::string const& name);

    MCAPI void setSpawnTimeMax(int const& value);

    MCAPI void setSpawnTimeMin(int const& value);

    MCFOLD bool spawnsItemStack() const;

    MCAPI ~SpawnActorParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SpawnActorParameters const&);

    MCAPI void* $ctor(::SpawnActorParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
