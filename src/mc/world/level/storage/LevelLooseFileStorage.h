#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    // symbol:
    // ??0LevelLooseFileStorage@@QEAA@AEBVPath@Core@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI LevelLooseFileStorage(
        class Core::Path const&                                             levelDirectory,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
