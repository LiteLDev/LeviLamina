#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackImportStateObject {
public:
    // prevent constructor by default
    PackImportStateObject& operator=(PackImportStateObject const&);
    PackImportStateObject(PackImportStateObject const&);
    PackImportStateObject();
};
