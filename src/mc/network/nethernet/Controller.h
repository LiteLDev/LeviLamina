#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/ThreadState.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::RunLoop { class Condition; }
// clang-format on

namespace NetherNet::RunLoop {

class Controller {
public:
    // prevent constructor by default
    Controller& operator=(Controller const&);
    Controller(Controller const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Controller@RunLoop@NetherNet@@QEAA@XZ
    MCAPI Controller();

    // symbol: ?GetCondition@Controller@RunLoop@NetherNet@@QEBA?AVCondition@23@XZ
    MCAPI class NetherNet::RunLoop::Condition GetCondition() const;

    // symbol: ?RequestRun@Controller@RunLoop@NetherNet@@QEBAXXZ
    MCAPI void RequestRun() const;

    // symbol: ?RequestStop@Controller@RunLoop@NetherNet@@QEBAXXZ
    MCAPI void RequestStop() const;

    // symbol: ?RequestSuspend@Controller@RunLoop@NetherNet@@QEBAXXZ
    MCAPI void RequestSuspend() const;

    // symbol: ??1Controller@RunLoop@NetherNet@@QEAA@XZ
    MCAPI ~Controller();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AcquireLock@Controller@RunLoop@NetherNet@@AEBA?AV?$unique_lock@Vmutex@std@@@std@@XZ
    MCAPI std::unique_lock<std::mutex> AcquireLock() const;

    // symbol: ?UpdateSharedState@Controller@RunLoop@NetherNet@@AEBAXW4ThreadState@23@@Z
    MCAPI void UpdateSharedState(::NetherNet::RunLoop::ThreadState) const;

    // NOLINTEND
};

}; // namespace NetherNet::RunLoop
