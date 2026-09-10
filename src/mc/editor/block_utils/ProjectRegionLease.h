#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::BlockUtils::Task {

class ProjectRegionLease {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk849a3d;
    ::ll::UntypedStorage<8, 16> mUnk8c7401;
    ::ll::UntypedStorage<8, 16> mUnk1786ae;
    ::ll::UntypedStorage<1, 1>  mUnkab4c92;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectRegionLease& operator=(ProjectRegionLease const&);
    ProjectRegionLease(ProjectRegionLease const&);
    ProjectRegionLease();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ProjectRegionLease(::Editor::ServiceProviderCollection& providers, ::WeakRef<::Editor::ProjectRegion> region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers, ::WeakRef<::Editor::ProjectRegion> region);
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
