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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?clear@ZipProgress@ZipUtils@Core@@UEAAXXZ
    virtual void clear();

    // symbol: ??1ZipProgress@ZipUtils@Core@@UEAA@XZ
    MCVAPI ~ZipProgress();

    // symbol: ??0ZipProgress@ZipUtils@Core@@QEAA@XZ
    MCAPI ZipProgress();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
