#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class LevelLooseFileStorage {
public:
    // prevent constructor by default
    LevelLooseFileStorage& operator=(LevelLooseFileStorage const&);
    LevelLooseFileStorage(LevelLooseFileStorage const&);
    LevelLooseFileStorage();

public:
    // NOLINTBEGIN
    MCAPI LevelLooseFileStorage(
        class Core::Path const&                                             levelDirectory,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class Core::Path const&                                             levelDirectory,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
