#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace Bedrock::Resources { struct BakeConfig; }
namespace Bedrock::Resources::Archive { class Builder; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class BakeTool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>  mUnke09763;
    ::ll::UntypedStorage<8, 64>   mUnkea5474;
    ::ll::UntypedStorage<8, 1720> mUnk8b21a9;
    ::ll::UntypedStorage<8, 72>   mUnka320e0;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeTool& operator=(BakeTool const&);
    BakeTool(BakeTool const&);
    BakeTool();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit BakeTool(::Bedrock::Resources::BakeConfig config);

    MCNAPI int bake();

    MCNAPI int bakeFilesInFolder(::Core::PathView srcPath, ::Core::PathView dstPath, ::Core::PathView dstArchivePath);

    MCNAPI int bakeSinglePack(::Core::PathView packRoot, ::Core::PathView destPath);

    MCNAPI ::Bedrock::Result<void> copyRegularFile(::Core::PathView sourcePath, ::Core::PathView destPath);

    MCNAPI void writeArchive(::Bedrock::Resources::Archive::Builder& builder, ::Core::PathView dstFile);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& PACK_OPTIMIZATION_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Bedrock::Resources::BakeConfig config);
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
