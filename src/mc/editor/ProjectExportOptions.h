#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class ProjectExportOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7d1333;
    ::ll::UntypedStorage<8, 40> mUnk1dfc7d;
    ::ll::UntypedStorage<4, 8>  mUnkc6695c;
    ::ll::UntypedStorage<1, 2>  mUnk4b7184;
    ::ll::UntypedStorage<4, 8>  mUnk820929;
    ::ll::UntypedStorage<1, 2>  mUnk1d6689;
    ::ll::UntypedStorage<4, 8>  mUnk8b8a3a;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectExportOptions& operator=(ProjectExportOptions const&);
    ProjectExportOptions(ProjectExportOptions const&);
    ProjectExportOptions();
};

} // namespace Editor
