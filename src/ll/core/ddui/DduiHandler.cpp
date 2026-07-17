#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/ddui/MessageBox.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/ddui/DduiManager.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/io/Logger.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/PacketHandlerDispatcherInstance.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ServerboundDataDrivenScreenClosedPacket.h"
#include "mc/network/packet/ServerboundDataStorePacket.h"
#include "mc/server/ServerPlayer.h"

namespace ll::ddui {

LL_TYPE_INSTANCE_HOOK(
    ServerboundDduiDataStorePacketHook,
    ll::memory::HookPriority::Normal,
    PacketHandlerDispatcherInstance<ServerboundDataStorePacket>,
    &PacketHandlerDispatcherInstance<ServerboundDataStorePacket>::$handle,
    void,
    NetworkIdentifier const& source,
    NetEventCallback&        callback,
    std::shared_ptr<Packet>& packet
) {
    try {
        auto* handle = static_cast<ServerNetworkHandler*>(&callback);

        auto player = handle->_getServerPlayer(source, packet->mSenderSubId);
        if (player) {
            auto& dataPacket = static_cast<ServerboundDataStorePacket&>(*packet);

            auto const& update        = dataPacket.mUpdate.get();
            std::string datastoreName = update.mDataStoreName;
            std::string property      = update.mProperty;
            std::string path          = update.mPath;
            auto const& data          = update.mData.get();

            DduiManager::handleDataStoreUpdate(*player, datastoreName, property, path, data);
        }
    } catch (std::exception const& e) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Exception in ServerboundDduiDataStorePacketHook: {}", e.what());
    } catch (...) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Unknown exception in ServerboundDduiDataStorePacketHook");
    }

    origin(source, callback, packet);
}

LL_TYPE_INSTANCE_HOOK(
    ServerboundDduiScreenClosedPacketHook,
    ll::memory::HookPriority::Normal,
    PacketHandlerDispatcherInstance<ServerboundDataDrivenScreenClosedPacket>,
    &PacketHandlerDispatcherInstance<ServerboundDataDrivenScreenClosedPacket>::$handle,
    void,
    NetworkIdentifier const& source,
    NetEventCallback&        callback,
    std::shared_ptr<Packet>& packet
) {
    try {
        auto* handle = static_cast<ServerNetworkHandler*>(&callback);

        auto player = handle->_getServerPlayer(source, packet->mSenderSubId);
        if (player) {
            auto& closedPacket = static_cast<ServerboundDataDrivenScreenClosedPacket&>(*packet);

            uint formId       = closedPacket.mFormId;
            auto closedReason = closedPacket.mCloseReason;

            DduiManager::handleScreenClosed(formId, closedReason, *player);
        }
    } catch (std::exception const& e) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Exception in ServerboundDduiScreenClosedPacketHook: {}", e.what());
    } catch (...) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Unknown exception in ServerboundDduiScreenClosedPacketHook");
    }

    origin(source, callback, packet);
}

// clang-format off
LL_TYPE_INSTANCE_HOOK(
    PlayerDisconnectHook,
    ll::memory::HookPriority::Normal,
    ServerPlayer,
    &ServerPlayer::disconnect,
    void
) {
    // clang-format on

    ServerPlayer& player = *this;
    try {
        DduiManager::closeSessionForPlayer(player.getUuid().asString());
    } catch (std::exception const& e) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Exception in PlayerDisconnectHook: {}", e.what());
    } catch (...) {
        auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("Ddui");
        logger->error("Unknown exception in PlayerDisconnectHook");
    }

    origin();
}

static ll::memory::HookRegistrar<ServerboundDduiDataStorePacketHook>    dduiDatastoreHook{};
static ll::memory::HookRegistrar<ServerboundDduiScreenClosedPacketHook> dduiClosedHook{};
static ll::memory::HookRegistrar<PlayerDisconnectHook>                  dduiPlayerDisconnectHook{};

} // namespace ll::ddui