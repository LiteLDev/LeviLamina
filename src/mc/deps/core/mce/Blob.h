#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Blob@mce@@QEAA@XZ
    MCAPI Blob();

    // symbol: ??0Blob@mce@@QEAA@$$QEAV01@@Z
    MCAPI Blob(class mce::Blob&& rhs);

    // symbol: ??0Blob@mce@@QEAA@_K@Z
    MCAPI explicit Blob(uint64);

    // symbol: ?cbegin@Blob@mce@@QEBAPEBEXZ
    MCAPI uchar const* cbegin() const;

    // symbol: ?cend@Blob@mce@@QEBAPEBEXZ
    MCAPI uchar const* cend() const;

    // symbol: ?empty@Blob@mce@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ??4Blob@mce@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class mce::Blob& operator=(class mce::Blob&& rhs);

    // symbol: ??1Blob@mce@@QEAA@XZ
    MCAPI ~Blob();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?defaultDeleter@Blob@mce@@CAXPEAE@Z
    MCAPI static void defaultDeleter(uchar* ptr);

    // NOLINTEND
};

}; // namespace mce
