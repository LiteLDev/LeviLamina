#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/IFileStorageAreaFetcher.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileStorageAreaFetcher : public ::Core::IFileStorageAreaFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::Result
    $getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path) const;


    // NOLINTEND
};

} // namespace Core
