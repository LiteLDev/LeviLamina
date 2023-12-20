#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CopyOnWriteBuffer {
public:
    // prevent constructor by default
    CopyOnWriteBuffer& operator=(CopyOnWriteBuffer const&);

public:
    // NOLINTBEGIN
    // symbol: ?Clear@CopyOnWriteBuffer@rtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ??0CopyOnWriteBuffer@rtc@@QEAA@XZ
    MCAPI CopyOnWriteBuffer();

    // symbol: ??0CopyOnWriteBuffer@rtc@@QEAA@$$QEAV01@@Z
    MCAPI CopyOnWriteBuffer(class rtc::CopyOnWriteBuffer&&);

    // symbol: ??0CopyOnWriteBuffer@rtc@@QEAA@AEBV01@@Z
    MCAPI CopyOnWriteBuffer(class rtc::CopyOnWriteBuffer const&);

    // symbol: ??0CopyOnWriteBuffer@rtc@@QEAA@_K@Z
    MCAPI explicit CopyOnWriteBuffer(uint64);

    // symbol: ??0CopyOnWriteBuffer@rtc@@QEAA@_K0@Z
    MCAPI CopyOnWriteBuffer(uint64, uint64);

    // symbol: ?EnsureCapacity@CopyOnWriteBuffer@rtc@@QEAAX_K@Z
    MCAPI void EnsureCapacity(uint64);

    // symbol: ?SetSize@CopyOnWriteBuffer@rtc@@QEAAX_K@Z
    MCAPI void SetSize(uint64);

    // symbol: ??4CopyOnWriteBuffer@rtc@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class rtc::CopyOnWriteBuffer& operator=(class rtc::CopyOnWriteBuffer&&);

    // symbol: ??8CopyOnWriteBuffer@rtc@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class rtc::CopyOnWriteBuffer const&) const;

    // symbol: ??1CopyOnWriteBuffer@rtc@@QEAA@XZ
    MCAPI ~CopyOnWriteBuffer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?UnshareAndEnsureCapacity@CopyOnWriteBuffer@rtc@@AEAAX_K@Z
    MCAPI void UnshareAndEnsureCapacity(uint64);

    // NOLINTEND
};

}; // namespace rtc
