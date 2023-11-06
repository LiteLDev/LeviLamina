#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"

class RandomThreadCheckManager : public ::AppPlatformListener {
public:
    // prevent constructor by default
    RandomThreadCheckManager& operator=(RandomThreadCheckManager const&);
    RandomThreadCheckManager(RandomThreadCheckManager const&);
    RandomThreadCheckManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RandomThreadCheckManager();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?onAppResumed@RandomThreadCheckManager@@UEAAXXZ
    virtual void onAppResumed();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mInstance@RandomThreadCheckManager@@0V?$unique_ptr@VRandomThreadCheckManager@@U?$default_delete@VRandomThreadCheckManager@@@std@@@std@@A
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;

    // symbol: ?mMutex@RandomThreadCheckManager@@0Vrecursive_mutex@std@@A
    MCAPI static std::recursive_mutex mMutex;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mInstance() { return mInstance; }

    static auto& $mMutex() { return mMutex; }

    // NOLINTEND
};
