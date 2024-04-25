#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/enums/OperationMode.h"

class RandomThreadCheckManager : public ::AppPlatformListener {
public:
    // prevent constructor by default
    RandomThreadCheckManager& operator=(RandomThreadCheckManager const&);
    RandomThreadCheckManager(RandomThreadCheckManager const&);
    RandomThreadCheckManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomThreadCheckManager@@UEAA@XZ
    virtual ~RandomThreadCheckManager() = default;

    // vIndex: 6, symbol: ?onAppResumed@RandomThreadCheckManager@@UEAAXXZ
    virtual void onAppResumed();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mInstance@RandomThreadCheckManager@@0V?$unique_ptr@VRandomThreadCheckManager@@U?$default_delete@VRandomThreadCheckManager@@@std@@@std@@A
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;

    // symbol: ?mMutex@RandomThreadCheckManager@@0Vrecursive_mutex@std@@A
    MCAPI static std::recursive_mutex mMutex;

    // NOLINTEND
};
