#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

class UserStorageChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8064a4;
    ::ll::UntypedStorage<8, 8> mUnk2dbcef;
    // NOLINTEND

public:
    // prevent constructor by default
    UserStorageChecker& operator=(UserStorageChecker const&);
    UserStorageChecker(UserStorageChecker const&);
    UserStorageChecker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void queueCheckUserStorage(::Core::PathView storagePath);
    // NOLINTEND
};
