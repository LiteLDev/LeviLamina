#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::Legacy::Spawn {

struct SpawnAboveBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        88,
        ::std::variant<::std::vector<::SharedTypes::Legacy::BlockDescriptor>, ::SharedTypes::Legacy::BlockDescriptor>>
                                  mBlocks;
    ::ll::TypedStorage<4, 4, int> mDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnAboveBlockFilter& operator=(SpawnAboveBlockFilter const&);
    SpawnAboveBlockFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnAboveBlockFilter(::SharedTypes::Legacy::Spawn::SpawnAboveBlockFilter const&);

    MCAPI ~SpawnAboveBlockFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::Spawn::SpawnAboveBlockFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
