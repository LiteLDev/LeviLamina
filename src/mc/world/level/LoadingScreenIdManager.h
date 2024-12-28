#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

class LoadingScreenIdManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7db596;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadingScreenIdManager& operator=(LoadingScreenIdManager const&);
    LoadingScreenIdManager(LoadingScreenIdManager const&);
    LoadingScreenIdManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::NewType<::std::optional<uint>> getNextLoadingScreenId();
    // NOLINTEND
};
