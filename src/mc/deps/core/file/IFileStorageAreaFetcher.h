#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class IFileStorageAreaFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileStorageAreaFetcher() = default;

    virtual ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>&, ::Core::PathView) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
