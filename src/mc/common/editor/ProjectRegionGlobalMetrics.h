#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ProjectRegionMetrics.h"

namespace Editor {

struct ProjectRegionGlobalMetrics : public ::Editor::ProjectRegionMetrics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk678dfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectRegionGlobalMetrics& operator=(ProjectRegionGlobalMetrics const&);
    ProjectRegionGlobalMetrics(ProjectRegionGlobalMetrics const&);
    ProjectRegionGlobalMetrics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProjectRegionGlobalMetrics();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
