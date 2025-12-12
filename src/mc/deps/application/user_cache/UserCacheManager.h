#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DirectoryEntry; }
// clang-format on

namespace Bedrock {

class UserCacheManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk10ca8c;
    // NOLINTEND

public:
    // prevent constructor by default
    UserCacheManager& operator=(UserCacheManager const&);
    UserCacheManager(UserCacheManager const&);
    UserCacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _getDirectoryContents(
        ::std::vector<::Bedrock::DirectoryEntry>& folders,
        ::Core::PathBuffer<::std::string> const&  filePath
    ) const;

    MCNAPI_C void _getDirectorySizeAndDeleteDirectoryContents(::Core::PathBuffer<::std::string> const& path) const;
    // NOLINTEND
};

} // namespace Bedrock
