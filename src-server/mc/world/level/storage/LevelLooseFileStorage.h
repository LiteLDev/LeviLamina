#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
namespace Core { class Path; }
// clang-format on

class LevelLooseFileStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnked6009;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelLooseFileStorage& operator=(LevelLooseFileStorage const&);
    LevelLooseFileStorage(LevelLooseFileStorage const&);
    LevelLooseFileStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelLooseFileStorage(::Core::Path const& levelDirectory, ::ContentIdentity const& contentIdentity, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& levelDirectory, ::ContentIdentity const& contentIdentity, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider);
    // NOLINTEND

};
