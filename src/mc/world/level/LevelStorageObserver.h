#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    using OnSaveCallbackT = std::function<void(std::string const&)>;

    OnSaveCallbackT mOnSaveCallback;

    [[nodiscard]] inline explicit LevelStorageObserver(OnSaveCallbackT onSaveCallback)
    : mOnSaveCallback(std::move(onSaveCallback)) {}

public:
    // NOLINTBEGIN
    // symbol: ?onSave@LevelStorageObserver@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void onSave(std::string const& levelId);

    // NOLINTEND
};
