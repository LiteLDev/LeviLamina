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
    // vIndex: 0, symbol: ??1ZipProgress@ZipUtils@Core@@UEAA@XZ
    virtual ~ZipProgress();

    // vIndex: 1, symbol: ?clear@ZipProgress@ZipUtils@Core@@UEAAXXZ
    virtual void clear();

    // symbol: ??0ZipProgress@ZipUtils@Core@@QEAA@XZ
    MCAPI ZipProgress();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
