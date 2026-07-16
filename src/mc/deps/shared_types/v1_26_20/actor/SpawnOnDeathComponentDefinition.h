#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct SpawnOnDeathComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<8, 32, ::std::string>                             mEntityToSpawn;
    ::ll::TypedStorage<8, 32, ::std::string>                             mSpawnMethod;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                    mAdditionalSpawnRange;
    ::ll::TypedStorage<4, 4, int>                                        mAmount;
    ::ll::TypedStorage<1, 1, bool>                                       mInheritName;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnOnDeathComponentDefinition& operator=(SpawnOnDeathComponentDefinition const&);
    SpawnOnDeathComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnOnDeathComponentDefinition(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition&
    operator=(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&) const;

    MCAPI ~SpawnOnDeathComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
