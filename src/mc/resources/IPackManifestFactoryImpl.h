#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class IPackManifestFactoryImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackManifestFactoryImpl() = default;

    virtual ::Core::Path getInternalStoragePath() = 0;

    virtual ::Bedrock::Result<::std::string> readAssetFile(::Core::PathView filename) = 0;

    virtual ::std::optional<::GameType> readGameTypeFromLevelDat(::std::string const& levelDatContents) = 0;
    // NOLINTEND
};
