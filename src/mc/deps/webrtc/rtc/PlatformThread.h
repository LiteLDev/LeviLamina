#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct ThreadAttributes; }
// clang-format on

namespace rtc {

class PlatformThread {
public:
    // prevent constructor by default
    PlatformThread& operator=(PlatformThread const&);
    PlatformThread(PlatformThread const&);
    PlatformThread();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlatformThread@rtc@@UEAA@XZ
    virtual ~PlatformThread();

    // symbol: ?Finalize@PlatformThread@rtc@@QEAAXXZ
    MCAPI void Finalize();

    // symbol:
    // ?SpawnDetached@PlatformThread@rtc@@SA?AV12@V?$function@$$A6AXXZ@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@UThreadAttributes@2@@Z
    MCAPI static class rtc::PlatformThread
        SpawnDetached(std::function<void(void)>, std::string_view, struct rtc::ThreadAttributes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0PlatformThread@rtc@@AEAA@PEAX_N@Z
    MCAPI PlatformThread(void*, bool);

    // symbol:
    // ?SpawnThread@PlatformThread@rtc@@CA?AV12@V?$function@$$A6AXXZ@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@UThreadAttributes@2@_N@Z
    MCAPI static class rtc::PlatformThread
    SpawnThread(std::function<void(void)>, std::string_view, struct rtc::ThreadAttributes, bool);

    // NOLINTEND
};

}; // namespace rtc
