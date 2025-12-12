#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure {

struct Rule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk2ca9fb;
    ::ll::UntypedStorage<8, 112> mUnkea03a6;
    ::ll::UntypedStorage<4, 28>  mUnk78ec91;
    ::ll::UntypedStorage<8, 48>  mUnkbdde4a;
    ::ll::UntypedStorage<8, 96>  mUnkbebde2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Rule();

    MCNAPI Rule(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::Rule& operator=(::SharedTypes::v1_21_20::JigsawStructure::Rule&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::Rule&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);

    MCNAPI ~Rule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructure::Rule const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure
