#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifestTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkfd0579;
    ::ll::UntypedStorage<8, 64> mUnkd6f372;
    ::ll::UntypedStorage<8, 16> mUnk302eff;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifestTracker& operator=(FlatFileManifestTracker const&);
    FlatFileManifestTracker(FlatFileManifestTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatFileManifestTracker();

    MCAPI ::std::shared_ptr<::Core::FlatFileManifest const> loadManifest(::Core::PathView manifestPath);

    MCAPI bool manifestExists(::Core::PathView manifestPath) const;

    MCAPI bool tryUnloadManifest(::Core::PathView manifestPath);

    MCAPI void updateManifest(::std::shared_ptr<::Core::FlatFileManifest> manifest, bool keepCached);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Core
