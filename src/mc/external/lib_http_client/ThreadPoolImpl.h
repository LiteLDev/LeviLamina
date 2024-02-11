#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/ThreadPoolActionStatus.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
struct _TP_CALLBACK_INSTANCE;
struct _TP_WORK;
// clang-format on

#pragma warning(push)
#pragma warning(disable : 5204)
namespace OS {

class ThreadPoolImpl {
public:
    // ThreadPoolImpl inner types declare
    // clang-format off
    struct ActionStatusImpl;
    // clang-format on

    // ThreadPoolImpl inner types define
    struct ActionStatusImpl : public ::OS::ThreadPoolActionStatus {
    public:
        // prevent constructor by default
        ActionStatusImpl& operator=(ActionStatusImpl const&);
        ActionStatusImpl(ActionStatusImpl const&);
        ActionStatusImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?Complete@ActionStatusImpl@ThreadPoolImpl@OS@@UEAAXXZ
        virtual void Complete();

        // vIndex: 1, symbol: ?MayRunLong@ActionStatusImpl@ThreadPoolImpl@OS@@UEAAXXZ
        virtual void MayRunLong();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ThreadPoolImpl& operator=(ThreadPoolImpl const&);
    ThreadPoolImpl(ThreadPoolImpl const&);
    ThreadPoolImpl();

    // private:
    // NOLINTBEGIN
    // symbol: ?TPCallback@ThreadPoolImpl@OS@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    MCAPI static void TPCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_WORK*);

    // NOLINTEND
};

}; // namespace OS
#pragma warning(pop)
