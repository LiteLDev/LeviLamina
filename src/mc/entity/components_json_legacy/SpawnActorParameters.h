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
    MCNAPI SpawnActorParameters();

    MCNAPI SpawnActorParameters(::SpawnActorParameters&&);

    MCNAPI SpawnActorParameters(::SpawnActorParameters const&);

    MCNAPI void setItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI void setSpawnEntity(::std::string const& name);

    MCNAPI void setSpawnEvent(::std::string const& name);

    MCNAPI void setSpawnSound(::std::string const& name);

    MCNAPI void setSpawnTimeMax(int const& value);

    MCNAPI void setSpawnTimeMin(int const& value);

    MCNAPI ~SpawnActorParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SpawnActorParameters&&);

    MCNAPI void* $ctor(::SpawnActorParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
