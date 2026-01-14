#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/set/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/RandomSpreadPlacement.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Structure; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureSet::Description>              mDescription;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement>    mPlacement;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Structure>> mStructures;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Contents&&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
