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
    MCNAPI FlatFileManifestTracker();

    MCNAPI ::std::shared_ptr<::Core::FlatFileManifest const> loadManifest(::Core::PathView manifestPath);

    MCNAPI bool manifestExists(::Core::PathView manifestPath) const;

    MCNAPI bool tryUnloadManifest(::Core::PathView manifestPath);

    MCNAPI void updateManifest(::std::shared_ptr<::Core::FlatFileManifest> manifest, bool keepCached);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
