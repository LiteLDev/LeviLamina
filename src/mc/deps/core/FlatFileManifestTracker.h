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
    FlatFileManifestTracker& operator=(FlatFileManifestTracker const&);
    FlatFileManifestTracker(FlatFileManifestTracker const&);

public:
    // NOLINTBEGIN
    // symbol: ??0FlatFileManifestTracker@Core@@QEAA@XZ
    MCAPI FlatFileManifestTracker();

    // symbol:
    // ?loadManifest@FlatFileManifestTracker@Core@@QEAA?AV?$shared_ptr@$$CBVFlatFileManifest@Core@@@std@@AEBVPath@2@@Z
    MCAPI std::shared_ptr<class Core::FlatFileManifest const> loadManifest(class Core::Path const& manifestPath);

    // symbol: ?manifestExists@FlatFileManifestTracker@Core@@QEBA_NAEBVPath@2@@Z
    MCAPI bool manifestExists(class Core::Path const& manifestPath) const;

    // symbol: ?tryUnloadManifest@FlatFileManifestTracker@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool tryUnloadManifest(class Core::Path const& manifestPath);

    // symbol: ?unloadAllManifests@FlatFileManifestTracker@Core@@QEAAXXZ
    MCAPI void unloadAllManifests();

    // symbol: ?updateManifest@FlatFileManifestTracker@Core@@QEAAXV?$shared_ptr@VFlatFileManifest@Core@@@std@@_N@Z
    MCAPI void updateManifest(std::shared_ptr<class Core::FlatFileManifest> manifest, bool keepCached);

    // NOLINTEND
};

}; // namespace Core
