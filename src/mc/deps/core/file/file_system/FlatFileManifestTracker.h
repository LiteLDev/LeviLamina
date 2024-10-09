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
    MCAPI FlatFileManifestTracker();

    MCAPI std::shared_ptr<class Core::FlatFileManifest const> loadManifest(class Core::Path const& manifestPath);

    MCAPI bool manifestExists(class Core::Path const& manifestPath) const;

    MCAPI bool tryUnloadManifest(class Core::Path const& manifestPath);

    MCAPI void unloadAllManifests();

    MCAPI void updateManifest(std::shared_ptr<class Core::FlatFileManifest> manifest, bool keepCached);

    // NOLINTEND
};

}; // namespace Core
