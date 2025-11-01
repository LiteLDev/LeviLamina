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
    MobEventFilter& operator=(MobEventFilter const&);
    MobEventFilter(MobEventFilter const&);
    MobEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEventFilter(::SharedTypes::Legacy::Spawn::MobEventFilter&&);

    MCNAPI ::SharedTypes::Legacy::Spawn::MobEventFilter& operator=(::SharedTypes::Legacy::Spawn::MobEventFilter&&);

    MCNAPI ~MobEventFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::Spawn::MobEventFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
