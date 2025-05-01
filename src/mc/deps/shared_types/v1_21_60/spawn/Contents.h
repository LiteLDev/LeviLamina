#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60::Spawn {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkc7baa9;
    ::ll::UntypedStorage<8, 136> mUnkf220d5;
    ::ll::UntypedStorage<8, 24>  mUnkdd0807;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Contents(::SharedTypes::v1_21_60::Spawn::Contents&&);

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
    MCAPI static ::SemVersion const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::Spawn::Contents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
