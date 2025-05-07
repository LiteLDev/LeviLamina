#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke02bd9;
    ::ll::UntypedStorage<8, 328> mUnk989779;
    ::ll::UntypedStorage<1, 1>   mUnkad9785;
    ::ll::UntypedStorage<1, 1>   mUnke2bde2;
    ::ll::UntypedStorage<8, 32>  mUnk2c6a3a;
    ::ll::UntypedStorage<1, 1>   mUnkf1c1e9;
    ::ll::UntypedStorage<2, 2>   mUnk1f6a8a;
    ::ll::UntypedStorage<1, 1>   mUnkb5abae;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents(Contents const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Contents();

    MCNAPI Contents(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);

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
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition
