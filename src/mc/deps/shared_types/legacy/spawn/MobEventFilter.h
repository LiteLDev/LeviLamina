#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct MobEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2be8bc;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEventFilter(MobEventFilter const&);
    MobEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEventFilter(::SharedTypes::Legacy::Spawn::MobEventFilter&&);

    MCFOLD ::SharedTypes::Legacy::Spawn::MobEventFilter& operator=(::SharedTypes::Legacy::Spawn::MobEventFilter const&);

    MCFOLD ::SharedTypes::Legacy::Spawn::MobEventFilter& operator=(::SharedTypes::Legacy::Spawn::MobEventFilter&&);

    MCAPI ~MobEventFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Legacy::Spawn::MobEventFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
