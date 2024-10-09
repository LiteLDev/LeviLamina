#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/IFileStorageAreaFetcher.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class IFileStorageAreaFetcher; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileStorageAreaFetcher : public ::Core::IFileStorageAreaFetcher {
public:
    // prevent constructor by default
    FileStorageAreaFetcher& operator=(FileStorageAreaFetcher const&);
    FileStorageAreaFetcher(FileStorageAreaFetcher const&);
    FileStorageAreaFetcher();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStorageAreaFetcher() = default;

    // vIndex: 1
    virtual class Core::Result getStorageAreaForPath(
        std::shared_ptr<class Core::FileStorageArea>& fileStorageArea,
        class Core::Path const&                       path
    ) const;

    // NOLINTEND
};

}; // namespace Core
