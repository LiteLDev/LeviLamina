#include "mc/client/input/Keymapping.h"

bool Keymapping::isAssigned() const {
    auto& keys = *mKeys;
    return !keys.empty() && keys[0] != 0;
}

bool Keymapping::isAltKey() const {
    auto& keys = *mKeys;

    if (keys.empty() || keys[0] == 0) {
        return false;
    }

    return std::ranges::any_of(keys, [](int key) { return key < 0; });
}

bool Keymapping::isRemappable() const { return mAllowRemap; }

bool Keymapping::isSharedKey() const { return mIsSharedKey; }