#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class BiomeComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd4e81d;
    ::ll::UntypedStorage<1, 1>  mUnk18cb17;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeComponentStorage& operator=(BiomeComponentStorage const&);
    BiomeComponentStorage(BiomeComponentStorage const&);
    BiomeComponentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _removeComponent(::Bedrock::typeid_t<void> typeId);

    MCNAPI ~BiomeComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
