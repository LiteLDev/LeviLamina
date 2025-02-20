#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure {

struct Rule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnka705f0;
    ::ll::UntypedStorage<8, 48> mUnkc6c8e7;
    ::ll::UntypedStorage<4, 28> mUnk78ec91;
    ::ll::UntypedStorage<8, 48> mUnkbdde4a;
    ::ll::UntypedStorage<8, 96> mUnkbebde2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Rule();

    MCAPI Rule(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructure::Rule&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructure::Rule& operator=(::SharedTypes::v1_21_20::JigsawStructure::Rule&&);

    MCAPI ~Rule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure
