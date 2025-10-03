#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock {

class DirectoryManifest {
public:
    // DirectoryManifest inner types declare
    // clang-format off
    struct DirInfo;
    // clang-format on

    // DirectoryManifest inner types define
    struct DirInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka68f2b;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirInfo& operator=(DirInfo const&);
        DirInfo(DirInfo const&);
        DirInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk335c1f;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryManifest& operator=(DirectoryManifest const&);
    DirectoryManifest(DirectoryManifest const&);
    DirectoryManifest();
};

} // namespace Bedrock
