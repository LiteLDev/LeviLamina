#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {
public:
    // prevent constructor by default
    ZipProgress& operator=(ZipProgress const&);
    ZipProgress(ZipProgress const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ZipProgress();

    // vIndex: 1
    virtual void clear();

    MCAPI ZipProgress();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
