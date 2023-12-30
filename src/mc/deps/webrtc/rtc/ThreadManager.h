#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class ThreadManager {
public:
    // prevent constructor by default
    ThreadManager& operator=(ThreadManager const&);
    ThreadManager(ThreadManager const&);

public:
    // NOLINTBEGIN
    // symbol: ?CurrentThread@ThreadManager@rtc@@QEAAPEAVThread@2@XZ
    MCAPI class rtc::Thread* CurrentThread();

    // symbol: ?SetCurrentThread@ThreadManager@rtc@@QEAAXPEAVThread@2@@Z
    MCAPI void SetCurrentThread(class rtc::Thread*);

    // symbol: ?UnwrapCurrentThread@ThreadManager@rtc@@QEAAXXZ
    MCAPI void UnwrapCurrentThread();

    // symbol: ?WrapCurrentThread@ThreadManager@rtc@@QEAAPEAVThread@2@XZ
    MCAPI class rtc::Thread* WrapCurrentThread();

    // symbol: ?Add@ThreadManager@rtc@@SAXPEAVThread@2@@Z
    MCAPI static void Add(class rtc::Thread*);

    // symbol: ?Instance@ThreadManager@rtc@@SAPEAV12@XZ
    MCAPI static class rtc::ThreadManager* Instance();

    // symbol: ?Remove@ThreadManager@rtc@@SAXPEAVThread@2@@Z
    MCAPI static void Remove(class rtc::Thread*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddInternal@ThreadManager@rtc@@AEAAXPEAVThread@2@@Z
    MCAPI void AddInternal(class rtc::Thread*);

    // symbol: ?RemoveInternal@ThreadManager@rtc@@AEAAXPEAVThread@2@@Z
    MCAPI void RemoveInternal(class rtc::Thread*);

    // symbol: ?SetCurrentThreadInternal@ThreadManager@rtc@@AEAAXPEAVThread@2@@Z
    MCAPI void SetCurrentThreadInternal(class rtc::Thread*);

    // symbol: ??0ThreadManager@rtc@@AEAA@XZ
    MCAPI ThreadManager();

    // NOLINTEND
};

}; // namespace rtc
