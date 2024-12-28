#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

class EcsEventDispatcher : public ::std::enable_shared_from_this<::EcsEventDispatcher>,
                           public ::EnableGetWeakRef<::EcsEventDispatcher> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkf6de78;
    // NOLINTEND

public:
    // prevent constructor by default
    EcsEventDispatcher& operator=(EcsEventDispatcher const&);
    EcsEventDispatcher(EcsEventDispatcher const&);
    EcsEventDispatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update();
    // NOLINTEND
};
