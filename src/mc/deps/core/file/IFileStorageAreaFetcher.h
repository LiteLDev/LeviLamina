#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class IFileStorageAreaFetcher {
public:
    // prevent constructor by default
    IFileStorageAreaFetcher& operator=(IFileStorageAreaFetcher const&);
    IFileStorageAreaFetcher(IFileStorageAreaFetcher const&);
    IFileStorageAreaFetcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileStorageAreaFetcher() = default;

    // vIndex: 1
    virtual ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>&, ::Core::Path const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
