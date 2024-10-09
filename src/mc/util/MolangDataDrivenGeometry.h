#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

class DataDrivenGeometry;

struct MolangDataDrivenGeometry {
public:
    std::weak_ptr<DataDrivenGeometry> mGeometry;
    HashedString                      mName;

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct MolangDataDrivenGeometry const&) const;

    // NOLINTEND
};
