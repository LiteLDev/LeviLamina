#pragma once

#include <memory>

#include "ll/api/base/Macro.h"

#include "mc/deps/core/mce/UUID.h"

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

    LLNDAPI optional_ref<PlayerInfoEntry const> fromUuid(mce::UUID) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromXuid(std::string_view) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromName(std::string_view) const;
    LLAPI void                                  forEach(std::function<bool(PlayerInfoEntry const&)> const& fn) const;
};
} // namespace ll::service
