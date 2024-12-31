#pragma once

#include <memory>

#include "ll/api/base/Macro.h"
#include "ll/api/coro/Generator.h"

#include "mc/platform/UUID.h"

namespace ll::service {
class PlayerInfo {
    class Impl;
    std::unique_ptr<Impl> impl;

    PlayerInfo();

public:
    struct PlayerInfoEntry {
        mce::UUID   uuid;
        std::string xuid;
        std::string name;
    };

    LLAPI static PlayerInfo& getInstance();

    LLAPI bool erase(mce::UUID);
    LLNDAPI optional_ref<PlayerInfoEntry const> fromUuid(mce::UUID) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromXuid(std::string_view) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromName(std::string_view) const;
    LLNDAPI coro::Generator<PlayerInfoEntry const&> entries() const;
};
} // namespace ll::service
