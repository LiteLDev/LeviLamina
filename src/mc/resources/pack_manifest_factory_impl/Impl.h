#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/resources/IPackManifestFactoryImpl.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

namespace PackManifestFactoryImpl {

class Impl : public ::IPackManifestFactoryImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2c0099;
    // NOLINTEND

public:
    // prevent constructor by default
    Impl& operator=(Impl const&);
    Impl(Impl const&);
    Impl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Path getInternalStoragePath() /*override*/;

    virtual ::Bedrock::Result<::std::string> readAssetFile(::Core::PathView filename) /*override*/;

    virtual ::std::optional<::GameType> readGameTypeFromLevelDat(::std::string const& levelDatContents) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::Path $getInternalStoragePath();

    MCNAPI ::Bedrock::Result<::std::string> $readAssetFile(::Core::PathView filename);

    MCNAPI ::std::optional<::GameType> $readGameTypeFromLevelDat(::std::string const& levelDatContents);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PackManifestFactoryImpl
