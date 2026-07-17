#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/DataDrivenScreenClosedReason.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/io/Logger.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/ddui/CustomFormSession.h"
#include "ll/core/ddui/DduiManager.h"
#include "ll/core/ddui/elements/Button.h"
#include "ll/core/ddui/elements/CloseButton.h"
#include "ll/core/ddui/elements/Divider.h"
#include "ll/core/ddui/elements/Dropdown.h"
#include "ll/core/ddui/elements/Element.h"
#include "ll/core/ddui/elements/Header.h"
#include "ll/core/ddui/elements/Label.h"
#include "ll/core/ddui/elements/Slider.h"
#include "ll/core/ddui/elements/Spacer.h"
#include "ll/core/ddui/elements/TextField.h"
#include "ll/core/ddui/elements/Toggle.h"
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
#include <charconv>
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
    std::string_view                                                  name,
    std::function<void(Player&, DataDrivenScreenClosedReason)> const& cb,
    Player&                                                           p,
    DataDrivenScreenClosedReason                                      reason
) {
    try {
        cb(p, reason);
    } catch (std::exception const& e) {
        ll::getLogger().error("Exception in DDUI callback '{}': {}", name, e.what());
    } catch (...) {
        ll::getLogger().error("Unknown exception in DDUI callback '{}'", name);
    }
}

CustomFormSession::CustomFormSession(mce::UUID uuid, ObsStringOrString title) : mUuid(uuid), mTitle(std::move(title)) {
    mFormId = FormIdManager::genFormId();
}

CustomFormSession::~CustomFormSession() {
    cleanupSubscriptions();
    DduiManager::unregisterSession(mFormId, mUuid);
}

void CustomFormSession::cleanupSubscriptions() {
    std::lock_guard<std::recursive_mutex> lock(mSubMutex);
    for (auto const& sub : mSubs) {
        sub.unsubscribeFn(sub.subId);
    }

    mSubs.clear();
}

void CustomFormSession::updatePath(std::string const& path, double val) {
    queueOnServerThread([self = shared_from_this(), path, val]() {
        if (!self->mIsShowing) return;

        auto player = getPlayerByUuid(self->mUuid);
        if (!player) return;

        auto& sp = static_cast<ServerPlayer&>(*player);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(self->mFormId),
            path,
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

void CustomFormSession::updatePath(std::string const& path, bool val) {
    queueOnServerThread([self = shared_from_this(), path, val]() {
        if (!self->mIsShowing) return;

        auto player = getPlayerByUuid(self->mUuid);
        if (!player) return;

        auto& sp = static_cast<ServerPlayer&>(*player);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(self->mFormId),
            path,
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

void CustomFormSession::updatePath(std::string const& path, std::string const& val) {
    queueOnServerThread([self = shared_from_this(), path, val]() {
        if (!self->mIsShowing) return;

        auto player = getPlayerByUuid(self->mUuid);
        if (!player) return;

        auto& sp = static_cast<ServerPlayer&>(*player);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(self->mFormId),
            path,
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

void CustomFormSession::handleDataStoreUpdate(
    std::string const& /*property*/,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (path == "closeButton.onClick") {
        if (mCloseButton) {
            if (!mCloseButton->handleUpdate("onClick", value)) {
                ll::getLogger().warn(
                    "Failed to handle close button onClick for player with UUID {} (DDUI)",
                    mUuid.asString()
                );
            }
        }

        close();
        return;
    }

    if (path.rfind("layout[", 0) == 0) {
        size_t endBracket = path.find(']');
        if (endBracket != std::string::npos && endBracket > 7) {
            std::string indexStr = path.substr(7, endBracket - 7);
            if (indexStr.size() <= 10) {
                bool isDigit = true;
                for (char c : indexStr) {
                    if (c < '0' || c > '9') {
                        isDigit = false;
                        break;
                    }
                }
                if (isDigit) {
                    uint32_t controlIndex = 0;
                    auto [ptr, ec] = std::from_chars(indexStr.data(), indexStr.data() + indexStr.size(), controlIndex);
                    if (ec == std::errc() && ptr == indexStr.data() + indexStr.size()) {
                        if (endBracket + 1 < path.size() && path[endBracket + 1] == '.') {
                            std::string subpath = path.substr(endBracket + 2);
                            if (controlIndex < mControls.size()) {
                                if (!mControls[controlIndex]->handleUpdate(subpath, value)) {
                                    ll::getLogger().warn(
                                        "Failed to handle control update '{}' for player with UUID {} (DDUI)",
                                        path,
                                        mUuid.asString()
                                    );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void CustomFormSession::handleScreenClosed(::DataDrivenScreenClosedReason closedReason) {
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
                it->second.erase(DduiManager::getCustomFormPropertyName() + std::to_string(formId));
            }
        }
    });

    auto cb = std::move(mCallback);
    if (cb) {
        ll::ddui::DataDrivenScreenClosedReason reason = ll::ddui::DataDrivenScreenClosedReason::ClientClosed;
        if (closedReason == ::DataDrivenScreenClosedReason::ProgrammaticClose
            || closedReason == ::DataDrivenScreenClosedReason::ProgrammaticCloseAll) {
            reason = ll::ddui::DataDrivenScreenClosedReason::ServerClosed;
        } else if (closedReason == ::DataDrivenScreenClosedReason::UserBusy) {
            reason = ll::ddui::DataDrivenScreenClosedReason::UserBusy;
        }

        queueOnServerThread([cb, uuid, reason]() {
            auto player = getPlayerByUuid(uuid);
            if (player) {
                safeExecuteCallback("CustomForm::Callback", cb, *player, reason);
            }
        });
    }
}

void CustomFormSession::close() {
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
                it->second.erase(DduiManager::getCustomFormPropertyName() + std::to_string(formId));
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
                safeExecuteCallback("CustomForm::Callback", cb, *player, DataDrivenScreenClosedReason::ServerClosed);
            }
        });
    }
}

bool CustomFormSession::validate() const {
    if (mControls.size() > 100) {
        ll::getLogger().error("Custom form has too many controls (max 100) (DDUI)");
        return false;
    }

    for (auto const& control : mControls) {
        if (!control->isValid()) {
            ll::getLogger().error("Invalid controls in custom form (DDUI)");
            return false;
        }
    }

    if (mCloseButton && !mCloseButton->isValid()) {
        ll::getLogger().error("Invalid close button in custom form (DDUI)");
        return false;
    }

    return true;
}

CustomForm::CustomForm(Player& player, ObsStringOrString title) {
    mSession           = std::make_shared<CustomFormSession>(player.getUuid(), std::move(title));
    mSession->mWrapper = this;
}

CustomForm::~CustomForm() {
    if (mSession) {
        mSession->mWrapper = nullptr;
    }
}

CustomForm& CustomForm::appendButton(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options) {
    mSession->mControls.push_back(std::make_unique<Button>(std::move(label), std::move(onClick), std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendTextField(ObsStringOrString label, std::shared_ptr<ObservableString> text, TextFieldOptions options) {
    mSession->mControls.push_back(std::make_unique<TextField>(std::move(label), std::move(text), std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendToggle(ObsStringOrString label, std::shared_ptr<ObservableBoolean> toggled, ToggleOptions options) {
    mSession->mControls.push_back(std::make_unique<Toggle>(std::move(label), std::move(toggled), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendSlider(
    ObsStringOrString                 label,
    std::shared_ptr<ObservableNumber> value,
    ObsNumberOrNumber                 min,
    ObsNumberOrNumber                 max,
    SliderOptions                     options
) {
    mSession->mControls.push_back(
        std::make_unique<Slider>(std::move(label), std::move(value), std::move(min), std::move(max), std::move(options))
    );
    return *this;
}

CustomForm& CustomForm::appendDropdown(
    ObsStringOrString                  label,
    std::shared_ptr<ObservableInteger> value,
    std::vector<DropdownItemData>      items,
    DropdownOptions                    options
) {
    mSession->mControls.push_back(
        std::make_unique<Dropdown>(std::move(label), std::move(value), std::move(items), std::move(options))
    );
    return *this;
}

CustomForm& CustomForm::appendHeader(ObsStringOrString text, TextOptions options) {
    mSession->mControls.push_back(std::make_unique<Header>(std::move(text), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendLabel(ObsStringOrString text, TextOptions options) {
    mSession->mControls.push_back(std::make_unique<Label>(std::move(text), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendSpacer(SpacingOptions options) {
    mSession->mControls.push_back(std::make_unique<Spacer>(std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendDivider(DividerOptions options) {
    mSession->mControls.push_back(std::make_unique<Divider>(std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendCloseButton(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options) {
    mSession->mCloseButton = std::make_unique<CloseButton>(std::move(label), std::move(onClick), std::move(options));
    return *this;
}

bool CustomForm::show(Callback callback) {
    if (!validate()) return false;

    auto player = getPlayerByUuid(mSession->mUuid);
    if (!player) return false;

    mSession->mCallback  = std::move(callback);
    mSession->mIsShowing = true;

    DduiManager::registerSession(mSession, *player);

    auto& serverPlayer = static_cast<ServerPlayer&>(*player);
    auto& sync         = serverPlayer.getDataStoreSync();

    nlohmann::ordered_json root = nlohmann::ordered_json::object();
    root["title"]               = resolveText(mSession->mTitle);

    nlohmann::ordered_json closeButton = nlohmann::ordered_json::object();
    if (mSession->mCloseButton) {
        closeButton = mSession->mCloseButton->serialize();
    } else {
        closeButton["visible"]        = false;
        closeButton["button_visible"] = false;
        closeButton["onClick"]        = 0;
    }
    root["closeButton"] = closeButton;

    nlohmann::ordered_json layoutObj = nlohmann::ordered_json::object();
    for (size_t i = 0; i < mSession->mControls.size(); ++i) {
        layoutObj[std::to_string(i)] = mSession->mControls[i]->serialize();
    }
    layoutObj["length"] = mSession->mControls.size();
    root["layout"]      = layoutObj;

    std::string dumped = root.dump();
    if (dumped.size() > 65536) {
        return false;
    }

    auto formOpt = Bedrock::DDUI::PathUtility::stringToDynamicValue(dumped);
    if (!formOpt) {
        return false;
    }

    sync.set(
        DduiManager::getDatastoreName(),
        DduiManager::getCustomFormPropertyName() + std::to_string(mSession->mFormId),
        *formOpt,
        true
    );

    mSession->cleanupSubscriptions();

    auto addSub =
        [session = mSession](std::shared_ptr<void> const& obs, uint64_t subId, std::function<void(uint64_t)> unsub) {
            std::lock_guard<std::recursive_mutex> lock(session->mSubMutex);
            session->mSubs.push_back({obs, subId, std::move(unsub)});
        };
    auto updateDouble = [session = mSession](std::string const& path, double val) { session->updatePath(path, val); };
    auto updateBool   = [session = mSession](std::string const& path, bool val) { session->updatePath(path, val); };
    auto updateString = [session = mSession](std::string const& path, std::string const& val) {
        session->updatePath(path, val);
    };

    if (std::holds_alternative<std::shared_ptr<ObservableString>>(mSession->mTitle)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(mSession->mTitle);
        if (obs) {
            auto subId = obs->subscribe([updateString](std::string const& val) { updateString("title", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    } else if (std::holds_alternative<std::shared_ptr<ObservableUIRawMessage>>(mSession->mTitle)) {
        auto obs = std::get<std::shared_ptr<ObservableUIRawMessage>>(mSession->mTitle);
        if (obs) {
            auto subId = obs->subscribe([updateString](UIRawMessage const& val) {
                updateString("title", val.serialize().dump());
            });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }

    for (size_t i = 0; i < mSession->mControls.size(); ++i) {
        std::string prefix = "layout[" + std::to_string(i) + "].";
        mSession->mControls[i]->setupSubscriptions(prefix, addSub, updateDouble, updateBool, updateString);
    }

    if (mSession->mCloseButton) {
        mSession->mCloseButton->setupSubscriptions("closeButton.", addSub, updateDouble, updateBool, updateString);
    }

    ClientboundDataDrivenUIShowScreenPacket packet;
    packet.mScreenId       = DduiManager::getCustomFormScreenId();
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

void CustomForm::close() { mSession->close(); }

bool CustomForm::isShowing() const { return mSession->mIsShowing; }

bool CustomForm::validate() const { return mSession->validate(); }

} // namespace ll::ddui
