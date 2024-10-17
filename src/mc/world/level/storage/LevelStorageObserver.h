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
    MCAPI void onSave(std::string const& levelId);

    // NOLINTEND
};
