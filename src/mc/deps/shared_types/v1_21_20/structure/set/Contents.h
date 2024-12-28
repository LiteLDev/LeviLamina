#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk26b7c1;
    ::ll::UntypedStorage<4, 16> mUnk93bbc2;
    ::ll::UntypedStorage<8, 24> mUnk348582;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Contents(::SharedTypes::v1_21_20::JigsawStructureSet::Contents const&);

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
    MCAPI static ::SemVersion const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureSet::Contents const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
