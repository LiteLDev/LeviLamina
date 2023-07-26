#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileStorageAreaFetcher {

public:
    // prevent constructor by default
    FileStorageAreaFetcher& operator=(FileStorageAreaFetcher const&) = delete;
    FileStorageAreaFetcher(FileStorageAreaFetcher const&)            = delete;
    FileStorageAreaFetcher()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getStorageAreaForPath\@FileStorageAreaFetcher\@Core\@\@UEBA?AVResult\@2\@AEAV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result
    getStorageAreaForPath(class std::shared_ptr<class Core::FileStorageArea>&, class Core::Path const&) const; // NOLINT
};

}; // namespace Core
