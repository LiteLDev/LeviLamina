#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk163752;
    ::ll::UntypedStorage<8, 24>  mUnk54649b;
    ::ll::UntypedStorage<8, 24>  mUnkccdc4f;
    ::ll::UntypedStorage<8, 328> mUnkf3d1fa;
    ::ll::UntypedStorage<8, 32>  mUnkdfe3b9;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeConditions(BiomeConditions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeConditions();

    MCNAPI ::SharedTypes::v1_21_60::Spawn::BiomeConditions& operator=(::SharedTypes::v1_21_60::Spawn::BiomeConditions&&
    );

    MCNAPI ::SharedTypes::v1_21_60::Spawn::BiomeConditions&
    operator=(::SharedTypes::v1_21_60::Spawn::BiomeConditions const&);

    MCNAPI ~BiomeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
