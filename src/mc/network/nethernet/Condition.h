#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::RunLoop { struct Variables; }
// clang-format on

namespace NetherNet::RunLoop {

class Condition {
public:
    // prevent constructor by default
    Condition& operator=(Condition const&);
    Condition(Condition const&);
    Condition();

public:
    // NOLINTBEGIN
    // symbol: ??0Condition@RunLoop@NetherNet@@QEAA@V?$shared_ptr@UVariables@RunLoop@NetherNet@@@std@@@Z
    MCAPI explicit Condition(std::shared_ptr<struct NetherNet::RunLoop::Variables>);

    // symbol: ?KeepGoing@Condition@RunLoop@NetherNet@@QEBA_NXZ
    MCAPI bool KeepGoing() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AcquireLock@Condition@RunLoop@NetherNet@@AEBA?AV?$unique_lock@Vmutex@std@@@std@@XZ
    MCAPI std::unique_lock<std::mutex> AcquireLock() const;

    // symbol: ?StateDispatch@Condition@RunLoop@NetherNet@@AEBA_N$$QEAV?$unique_lock@Vmutex@std@@@std@@@Z
    MCAPI bool StateDispatch(std::unique_lock<std::mutex>&&) const;

    // symbol: ?StateRunning@Condition@RunLoop@NetherNet@@AEBA_NV?$unique_lock@Vmutex@std@@@std@@@Z
    MCAPI bool StateRunning(std::unique_lock<std::mutex>) const;

    // symbol: ?StateStopped@Condition@RunLoop@NetherNet@@AEBA_NV?$unique_lock@Vmutex@std@@@std@@@Z
    MCAPI bool StateStopped(std::unique_lock<std::mutex>) const;

    // symbol: ?StateSuspended@Condition@RunLoop@NetherNet@@AEBA_NV?$unique_lock@Vmutex@std@@@std@@@Z
    MCAPI bool StateSuspended(std::unique_lock<std::mutex>) const;

    // NOLINTEND
};

}; // namespace NetherNet::RunLoop
