#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Bedrock { struct DirectoryEntry; }
// clang-format on

namespace Bedrock {

class UserCacheManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk20203c;
    ::ll::UntypedStorage<8, 64> mUnk324c0d;
    // NOLINTEND

public:
    // prevent constructor by default
    UserCacheManager& operator=(UserCacheManager const&);
    UserCacheManager(UserCacheManager const&);
    UserCacheManager();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI UserCacheManager(
        ::Core::PathBuffer<::std::string> const&                                 cachePath,
        ::brstd::move_only_function<::Bedrock::NonOwnerPointer<::AppPlatform>()> getAppPlatform
    );

    MCNAPI bool clearDownloadStorageIfFull(::std::vector<::Bedrock::DirectoryEntry>& folders);

    MCNAPI bool clearUserStorageIfFull(::std::vector<::Bedrock::DirectoryEntry>& folders);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const&                                 cachePath,
        ::brstd::move_only_function<::Bedrock::NonOwnerPointer<::AppPlatform>()> getAppPlatform
    );
#endif
    // NOLINTEND
};

} // namespace Bedrock
