#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60::Spawn { struct Herd; }
namespace SharedTypes::v1_21_60::Spawn { struct PermuteType; }
// clang-format on

namespace SharedTypes::v1_21_60::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                         mWeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::Spawn::Herd>>        mHerds;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::Spawn::PermuteType>> mPermuteType;
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData>                  mBiomeFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mMobEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConditions(BiomeConditions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeConditions();

    MCAPI ::SharedTypes::v1_21_60::Spawn::BiomeConditions& operator=(::SharedTypes::v1_21_60::Spawn::BiomeConditions&&);

    MCAPI ::SharedTypes::v1_21_60::Spawn::BiomeConditions&
    operator=(::SharedTypes::v1_21_60::Spawn::BiomeConditions const&);

    MCAPI ~BiomeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
