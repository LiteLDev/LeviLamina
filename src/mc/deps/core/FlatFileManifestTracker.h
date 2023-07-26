#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FlatFileManifestTracker {

public:
    // prevent constructor by default
    FlatFileManifestTracker& operator=(FlatFileManifestTracker const&) = delete;
    FlatFileManifestTracker(FlatFileManifestTracker const&)            = delete;
    FlatFileManifestTracker()                                          = delete;

public:
    /**
     * @symbol
     * ?loadManifest\@FlatFileManifestTracker\@Core\@\@QEAA?AV?$shared_ptr\@$$CBVFlatFileManifest\@Core\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    MCAPI class std::shared_ptr<class Core::FlatFileManifest const> loadManifest(class Core::Path const&); // NOLINT
    /**
     * @symbol ?manifestExists\@FlatFileManifestTracker\@Core\@\@QEBA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool manifestExists(class Core::Path const&) const; // NOLINT
    /**
     * @symbol ?tryUnloadManifest\@FlatFileManifestTracker\@Core\@\@QEAA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool tryUnloadManifest(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?updateManifest\@FlatFileManifestTracker\@Core\@\@QEAAXV?$shared_ptr\@VFlatFileManifest\@Core\@\@\@std\@\@_N\@Z
     */
    MCAPI void updateManifest(class std::shared_ptr<class Core::FlatFileManifest>, bool); // NOLINT
};

}; // namespace Core
