#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
struct PackIdVersion;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI {

class RouteDataParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                    mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>      mFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mDataPath;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteDataParser& operator=(RouteDataParser const&);
    RouteDataParser();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteDataParser(::OreUI::RouteDataParser const&);

    MCAPI RouteDataParser(
        ::ResourcePackManager const&                             packManager,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      fileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Core::Path const&                                      dataPath
    );

    MCAPI void loadAndParse(
        ::std::string const&               routesJsonFile,
        ::std::vector<::OreUI::RouteData>& outRouteData,
        ::std::vector<::PackIdVersion>&    outRouteMetadata
    ) const;

    MCAPI ~RouteDataParser();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouteDataParser const&);

    MCAPI void* $ctor(
        ::ResourcePackManager const&                             packManager,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&      fileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const& fileSystem,
        ::Core::Path const&                                      dataPath
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
