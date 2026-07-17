#include "ll/api/ddui/MessageBox.h"
#include "ll/api/ddui/DataDrivenScreenClosedReason.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/io/Logger.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/ddui/DduiManager.h"
#include "ll/core/ddui/MessageBoxSession.h"
#include "mc/network/packet/ClientboundDataDrivenUICloseScreenPacket.h"
#include "mc/network/packet/ClientboundDataDrivenUIShowScreenPacket.h"
#include "mc/scripting/data_sync/DDUI.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/scripting/data_sync/PathQueryError.h"
#include "mc/scripting/data_sync/PathUtility.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerPlayer.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"
#include "mc/world/level/Level.h"
#include <utility>

namespace ll::ddui {

static void queueOnServerThread(std::function<void()> func) {
    auto instance = ll::service::getServerInstance();
    if (instance) {
        instance->queueForServerThread(std::move(func));
    }
}

static Player* getPlayerByUuid(mce::UUID const& uuid) {
    Player* foundPlayer = nullptr;
    ll::service::getLevel().transform([&](auto& level) {
        foundPlayer = level.findPlayer([&](Player const& p) { return p.getUuid() == uuid; });
        return true;
    });

    return foundPlayer;
}

static void safeExecuteCallback(
    std::string_view                                             name,
    std::function<void(Player&, MessageBoxResult const&)> const& cb,
    Player&                                                      p,
    MessageBoxResult const&                                      result
) {
    try {
        cb(p, result);
    } catch (std::exception const& e) {
        ll::getLogger().error("Exception in DDUI callback '{}': {}", name, e.what());
    } catch (...) {
        ll::getLogger().error("Unknown exception in DDUI callback '{}'", name);
    }
}

MessageBoxSession::MessageBoxSession(mce::UUID uuid, ObsStringOrString title) : mUuid(uuid), mTitle(std::move(title)) {
    mFormId = FormIdManager::genFormId();
}

MessageBoxSession::~MessageBoxSession() {
    cleanupSubscriptions();
    DduiManager::unregisterSession(mFormId, mUuid);
}

void MessageBoxSession::cleanupSubscriptions() {
    std::lock_guard<std::recursive_mutex> lock(mSubMutex);
    for (auto const& sub : mSubs) {
        sub.unsubscribeFn(sub.subId);
    }

    mSubs.clear();
}

void MessageBoxSession::updateProperty(std::string const& name, std::string const& val) {
    queueOnServerThread([self = shared_from_this(), name, val]() {
        if (!self->mIsShowing) return;

        auto player = getPlayerByUuid(self->mUuid);
        if (!player) return;

        auto& sp = static_cast<ServerPlayer&>(*player);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getMessageBoxPropertyName() + std::to_string(self->mFormId),
            name,
            std::variant<double, bool, std::string>(val),
            true,
            true
        );

        ll::service::getLevel().transform([&](auto& level) {
            auto* sender = level.getPacketSender();
            if (sender) {
                Bedrock::DDUI::sendDataStorePacketsToClient(
                    sp.getDataStoreSync(),
                    *sender,
                    &sp.getUserEntityIdentifier()
                );
            }

            return true;
        });
    });
}

void MessageBoxSession::handleDataStoreUpdate(
    std::string const&                             property,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (property == "selection" || path == "selection") {
        if (std::holds_alternative<double>(value)) {
            double valDouble = std::get<double>(value);
            if (std::isfinite(valDouble)) {
                int val = static_cast<int>(valDouble);
                if (val == 0 || val == 1) {
                    mSelection = val;
                }
            }
        }
    } else if (
        property == "button1_clicked" || path == "button1_clicked" || path == "button1/clicked"
        || path == "button1.onClick"
    ) {
        mSelection = 0;
    } else if (
        property == "button2_clicked" || path == "button2_clicked" || path == "button2/clicked"
        || path == "button2.onClick"
    ) {
        mSelection = 1;
    }
}

void MessageBoxSession::handleScreenClosed(::DataDrivenScreenClosedReason closedReason) {
    bool expected = true;
    if (!mIsShowing.compare_exchange_strong(expected, false)) {
        return;
    }

    DduiManager::unregisterSession(mFormId, mUuid);
    cleanupSubscriptions();

    mce::UUID uuid   = mUuid;
    uint      formId = mFormId;
    queueOnServerThread([uuid, formId]() {
        auto player = getPlayerByUuid(uuid);
        if (player) {
            auto& sp     = static_cast<ServerPlayer&>(*player);
            auto& sync   = sp.getDataStoreSync();
            auto& stores = *sync.mDataStores;

            if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
                it->second.erase(DduiManager::getMessageBoxPropertyName() + std::to_string(formId));
            }
        }
    });

    auto cb = std::move(mCallback);
    if (cb) {
        DataDrivenScreenClosedReason reason = DataDrivenScreenClosedReason::ClientClosed;
        if (closedReason == ::DataDrivenScreenClosedReason::ProgrammaticClose
            || closedReason == ::DataDrivenScreenClosedReason::ProgrammaticCloseAll) {
            reason = DataDrivenScreenClosedReason::ServerClosed;
        } else if (closedReason == ::DataDrivenScreenClosedReason::UserBusy) {
            reason = DataDrivenScreenClosedReason::UserBusy;
        }

        int                sel = mSelection;
        std::optional<int> selectionOpt;
        if (sel == 0 || sel == 1) {
            selectionOpt = sel;
        }

        queueOnServerThread([cb, uuid, reason, selectionOpt]() {
            auto player = getPlayerByUuid(uuid);
            if (player) {
                safeExecuteCallback("MessageBox::Callback", cb, *player, MessageBoxResult{reason, selectionOpt});
            }
        });
    }
}

void MessageBoxSession::close() {
    bool expected = true;
    if (!mIsShowing.compare_exchange_strong(expected, false)) {
        return;
    }

    DduiManager::unregisterSession(mFormId, mUuid);
    cleanupSubscriptions();

    mce::UUID uuid   = mUuid;
    uint      formId = mFormId;
    queueOnServerThread([uuid, formId]() {
        auto player = getPlayerByUuid(uuid);
        if (player) {
            auto& sp     = static_cast<ServerPlayer&>(*player);
            auto& sync   = sp.getDataStoreSync();
            auto& stores = *sync.mDataStores;

            if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
                it->second.erase(DduiManager::getMessageBoxPropertyName() + std::to_string(formId));
            }

            ClientboundDataDrivenUICloseScreenPacket packet;
            packet.mFormId = formId;
            packet.sendTo(*player);
        }
    });

    auto cb = std::move(mCallback);
    if (cb) {
        queueOnServerThread([cb, uuid]() {
            auto player = getPlayerByUuid(uuid);
            if (player) {
                safeExecuteCallback(
                    "MessageBox::Callback",
                    cb,
                    *player,
                    MessageBoxResult{DataDrivenScreenClosedReason::ServerClosed, std::nullopt}
                );
            }
        });
    }
}

MessageBox::MessageBox(Player& player, ObsStringOrString title) {
    mSession           = std::make_shared<MessageBoxSession>(player.getUuid(), std::move(title));
    mSession->mWrapper = this;
}

MessageBox::~MessageBox() {
    if (mSession) {
        mSession->mWrapper = nullptr;
    }
}

MessageBox& MessageBox::appendBody(ObsStringOrString bodyText) {
    mSession->mBody = std::move(bodyText);
    return *this;
}

MessageBox& MessageBox::appendButton1(ObsStringOrString label, ObsStringOrString tooltip) {
    mSession->mBtn1Label   = std::move(label);
    mSession->mBtn1Tooltip = std::move(tooltip);
    return *this;
}

MessageBox& MessageBox::appendButton2(ObsStringOrString label, ObsStringOrString tooltip) {
    mSession->mBtn2Label   = std::move(label);
    mSession->mBtn2Tooltip = std::move(tooltip);
    return *this;
}

bool MessageBox::show(Callback callback) {
    if (!validate()) return false;

    auto player = getPlayerByUuid(mSession->mUuid);
    if (!player) return false;

    mSession->mCallback  = std::move(callback);
    mSession->mIsShowing = true;
    mSession->mSelection = -1;

    DduiManager::registerSession(mSession, *player);

    auto& serverPlayer = static_cast<ServerPlayer&>(*player);
    auto& sync         = serverPlayer.getDataStoreSync();

    // clang-format off
    nlohmann::json data = {
        { "title", resolveText(mSession->mTitle) },
        { "body", resolveText(mSession->mBody) },
        { "button1", {
            { "label", resolveText(mSession->mBtn1Label) },
            { "onClick", 0 },
            { "tooltip", resolveText(mSession->mBtn1Tooltip) }
        }},
        { "button2", {
            { "label", resolveText(mSession->mBtn2Label) },
            { "onClick", 0 },
            { "tooltip", resolveText(mSession->mBtn2Tooltip) }
        }},
    };
    // clang-format on

    std::string dumped = data.dump();
    if (dumped.size() > 65536) {
        return false;
    }

    auto valOpt = Bedrock::DDUI::PathUtility::stringToDynamicValue(dumped);
    if (!valOpt) {
        return false;
    }

    sync.set(
        DduiManager::getDatastoreName(),
        DduiManager::getMessageBoxPropertyName() + std::to_string(mSession->mFormId),
        *valOpt,
        true
    );

    mSession->cleanupSubscriptions();

    auto addSubIfNeeded = [&](ObsStringOrString const& field, std::string const& name) {
        if (std::holds_alternative<std::shared_ptr<ObservableString>>(field)) {
            auto obs = std::get<std::shared_ptr<ObservableString>>(field);
            mSession->addSubscription<std::string>(obs, [session = mSession, name](std::string const& val) {
                session->updateProperty(name, val);
            });
        } else if (std::holds_alternative<std::shared_ptr<ObservableUIRawMessage>>(field)) {
            auto obs = std::get<std::shared_ptr<ObservableUIRawMessage>>(field);
            mSession->addSubscription<UIRawMessage>(obs, [session = mSession, name](UIRawMessage const& val) {
                session->updateProperty(name, val.serialize().dump());
            });
        }
    };

    addSubIfNeeded(mSession->mTitle, "title");
    addSubIfNeeded(mSession->mBody, "body");
    addSubIfNeeded(mSession->mBtn1Label, "button1.label");
    addSubIfNeeded(mSession->mBtn1Tooltip, "button1.tooltip");
    addSubIfNeeded(mSession->mBtn2Label, "button2.label");
    addSubIfNeeded(mSession->mBtn2Tooltip, "button2.tooltip");

    ClientboundDataDrivenUIShowScreenPacket packet;
    packet.mScreenId       = DduiManager::getMessageBoxScreenId();
    packet.mFormId         = mSession->mFormId;
    packet.mDataInstanceId = mSession->mFormId;

    packet.sendTo(serverPlayer);

    ll::service::getLevel().transform([&](auto& level) {
        auto* sender = level.getPacketSender();
        if (sender) {
            Bedrock::DDUI::sendDataStorePacketsToClient(sync, *sender, &serverPlayer.getUserEntityIdentifier());
        }

        return true;
    });

    return true;
}

void MessageBox::close() { mSession->close(); }

bool MessageBox::isShowing() const { return mSession->mIsShowing; }

bool MessageBox::validate() const { return true; }

} // namespace ll::ddui
