#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
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
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Contents const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Contents&&);

    MCNAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
