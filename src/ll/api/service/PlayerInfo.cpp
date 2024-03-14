#include "ll/api/service/PlayerInfo.h"

#include <mutex>

#include "ll/api/data/KeyValueDB.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/player/PlayerJoinEvent.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::service {
class PlayerInfo::Impl {
public:
    std::recursive_mutex                                                   mutex;
    std::unordered_map<mce::UUID, std::shared_ptr<PlayerInfoEntry>>        uuids;
    std::unordered_map<std::string_view, std::shared_ptr<PlayerInfoEntry>> xuids;
    std::unordered_map<std::string_view, std::shared_ptr<PlayerInfoEntry>> names;
    data::KeyValueDB   storage{u8"plugins/LeviLamina/data/playerinfo"};
    event::ListenerPtr listener;

    void addPlayer(mce::UUID uuid, std::string xuid, std::string name) {
        auto entry = std::make_shared<PlayerInfoEntry>(uuid, std::move(xuid), std::move(name));
        uuids.insert_or_assign(entry->uuid, entry);
        xuids.insert_or_assign(entry->xuid, entry);
        names.insert_or_assign(entry->name, entry);
    }
    void removePlayer(mce::UUID uuid) {
        if (!uuids.contains(uuid)) {
            return;
        }
        auto entry = uuids.at(uuid);
        uuids.erase(entry->uuid);
        xuids.erase(entry->xuid);
        names.erase(entry->name);
    }
    Impl() {
        std::lock_guard lock(mutex);
        storage.iter([this](std::string_view key, std::string_view value) {
            auto uuid = mce::UUID(key);
            auto nbt  = CompoundTag::fromBinaryNbt(value);
            addPlayer(uuid, nbt->at("xuid"), nbt->at("name"));
            return true;
        });
        listener =
            event::EventBus::getInstance().emplaceListener<event::PlayerJoinEvent>([this](event::PlayerJoinEvent& ev) {
                std::lock_guard lock(mutex);

                auto uuid = ev.self().getUuid();
                auto xuid = ev.self().getXuid();
                auto name = ev.self().getRealName();

                if (uuids.contains(uuid)) {
                    auto entry = uuids.at(uuid);
                    if (entry->xuid != xuid || entry->name != name) {
                        removePlayer(uuid);
                    } else {
                        return;
                    }
                }
                storage.set(
                    uuid.asString(),
                    CompoundTag{
                        {{"xuid", xuid}, {"name", name}}
                }.toBinaryNbt()
                );
                addPlayer(uuid, std::move(xuid), std::move(name));
            });
    }
    ~Impl() { event::EventBus::getInstance().removeListener(listener); }
};
PlayerInfo::PlayerInfo() : impl(std::make_unique<Impl>()) {}
PlayerInfo& PlayerInfo::getInstance() {
    static PlayerInfo instance;
    return instance;
}
optional_ref<PlayerInfo::PlayerInfoEntry const> PlayerInfo::fromUuid(mce::UUID key) const {
    std::lock_guard lock(impl->mutex);
    if (auto i = impl->uuids.find(key); i != impl->uuids.end()) {
        return i->second.get();
    }
    return nullptr;
}
optional_ref<PlayerInfo::PlayerInfoEntry const> PlayerInfo::fromXuid(std::string_view key) const {
    std::lock_guard lock(impl->mutex);
    if (auto i = impl->xuids.find(key); i != impl->xuids.end()) {
        return i->second.get();
    }
    return nullptr;
}
optional_ref<PlayerInfo::PlayerInfoEntry const> PlayerInfo::fromName(std::string_view key) const {
    std::lock_guard lock(impl->mutex);
    if (auto i = impl->names.find(key); i != impl->names.end()) {
        return i->second.get();
    }
    return nullptr;
}
void PlayerInfo::forEach(std::function<bool(PlayerInfoEntry const&)> const& fn) const {
    std::lock_guard lock(impl->mutex);
    for (auto& [id, ptr] : impl->uuids) {
        if (!fn(*ptr)) {
            return;
        }
    }
}
} // namespace ll::service
