#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mOnSaveCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onSave(::std::string const& levelId);
    // NOLINTEND
};
