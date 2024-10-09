#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"
#include "mc/deps/core/platform/OperationMode.h"

class RandomThreadCheckManager : public ::AppPlatformListener {
public:
    // prevent constructor by default
    RandomThreadCheckManager& operator=(RandomThreadCheckManager const&);
    RandomThreadCheckManager(RandomThreadCheckManager const&);
    RandomThreadCheckManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomThreadCheckManager() = default;

    // vIndex: 6
    virtual void onAppResumed();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;

    MCAPI static std::recursive_mutex mMutex;

    // NOLINTEND
};
