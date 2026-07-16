#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/DataDrivenScreenClosedReason.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/service/Bedrock.h"
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
#include "mc/server/ServerPlayer.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"
#include "mc/world/level/Level.h"
#include <utility>

namespace ll::ddui {

struct CustomForm::Impl {
    Player&                      mPlayer;
    ObsStringOrString            mTitle;
    uint                         mFormId     = 0;
    uint                         mInstanceId = 0;
    bool                         mIsShowing  = false;
    std::unique_ptr<CloseButton> mCloseButton;
    Callback                     mCallback;

    std::vector<std::unique_ptr<Element>> mControls;

    struct ObsSub {
        std::shared_ptr<void>         observable;
        uint64_t                      subId;
        std::function<void(uint64_t)> unsubscribeFn;
    };
    std::vector<ObsSub> mSubs;

    Impl(Player& player, ObsStringOrString title) : mPlayer(player), mTitle(std::move(title)) {
        mFormId     = FormIdManager::genFormId();
        mInstanceId = mFormId;
    }

    ~Impl() {
        cleanupSubscriptions();
        DduiManager::unregisterCustomForm(mFormId, mPlayer);
    }

    void cleanupSubscriptions() {
        for (auto const& sub : mSubs) {
            sub.unsubscribeFn(sub.subId);
        }

        mSubs.clear();
    }

    void updatePath(std::string const& path, double val) {
        if (!mIsShowing) return;

        auto& sp = static_cast<ServerPlayer&>(mPlayer);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(mFormId),
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
    }

    void updatePath(std::string const& path, bool val) {
        if (!mIsShowing) return;

        auto& sp = static_cast<ServerPlayer&>(mPlayer);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(mFormId),
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
    }

    void updatePath(std::string const& path, std::string const& val) {
        if (!mIsShowing) return;

        auto& sp = static_cast<ServerPlayer&>(mPlayer);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(mFormId),
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
    }
};

CustomForm::CustomForm(Player& player, ObsStringOrString title)
: mImpl(std::make_unique<Impl>(player, std::move(title))) {}

CustomForm::~CustomForm() = default;

CustomForm& CustomForm::appendButton(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options) {
    mImpl->mControls.push_back(std::make_unique<Button>(std::move(label), std::move(onClick), std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendTextField(ObsStringOrString label, std::shared_ptr<ObservableString> text, TextFieldOptions options) {
    mImpl->mControls.push_back(std::make_unique<TextField>(std::move(label), std::move(text), std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendToggle(ObsStringOrString label, std::shared_ptr<ObservableBoolean> toggled, ToggleOptions options) {
    mImpl->mControls.push_back(std::make_unique<Toggle>(std::move(label), std::move(toggled), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendSlider(
    ObsStringOrString                 label,
    std::shared_ptr<ObservableNumber> value,
    ObsNumberOrNumber                 min,
    ObsNumberOrNumber                 max,
    SliderOptions                     options
) {
    mImpl->mControls.push_back(
        std::make_unique<Slider>(std::move(label), std::move(value), std::move(min), std::move(max), std::move(options))
    );
    return *this;
}

CustomForm& CustomForm::appendDropdown(
    ObsStringOrString                 label,
    std::shared_ptr<ObservableNumber> value,
    std::vector<DropdownItemData>     items,
    DropdownOptions                   options
) {
    mImpl->mControls.push_back(
        std::make_unique<Dropdown>(std::move(label), std::move(value), std::move(items), std::move(options))
    );
    return *this;
}

CustomForm& CustomForm::appendHeader(ObsStringOrString text, TextOptions options) {
    mImpl->mControls.push_back(std::make_unique<Header>(std::move(text), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendLabel(ObsStringOrString text, TextOptions options) {
    mImpl->mControls.push_back(std::make_unique<Label>(std::move(text), std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendSpacer(SpacingOptions options) {
    mImpl->mControls.push_back(std::make_unique<Spacer>(std::move(options)));
    return *this;
}

CustomForm& CustomForm::appendDivider(DividerOptions options) {
    mImpl->mControls.push_back(std::make_unique<Divider>(std::move(options)));
    return *this;
}

CustomForm&
CustomForm::appendCloseButton(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options) {
    mImpl->mCloseButton = std::make_unique<CloseButton>(std::move(label), std::move(onClick), std::move(options));
    return *this;
}

void CustomForm::show(Callback callback) {
    mImpl->mCallback  = std::move(callback);
    mImpl->mIsShowing = true;

    DduiManager::registerCustomForm(mImpl->mFormId, mImpl->mPlayer, this);

    auto& serverPlayer = static_cast<ServerPlayer&>(mImpl->mPlayer);
    auto& sync         = serverPlayer.getDataStoreSync();

    nlohmann::ordered_json root = nlohmann::ordered_json::object();
    root["title"]               = resolveString(mImpl->mTitle);

    nlohmann::ordered_json closeButton = nlohmann::ordered_json::object();
    if (mImpl->mCloseButton) {
        closeButton = mImpl->mCloseButton->serialize();
    } else {
        closeButton["visible"]        = false;
        closeButton["button_visible"] = false;
        closeButton["onClick"]        = 0;
    }

    root["closeButton"] = closeButton;

    nlohmann::ordered_json layoutObj = nlohmann::ordered_json::object();
    for (size_t i = 0; i < mImpl->mControls.size(); ++i) {
        layoutObj[std::to_string(i)] = mImpl->mControls[i]->serialize();
    }
    layoutObj["length"] = mImpl->mControls.size();

    root["layout"] = layoutObj;

    auto formOpt = Bedrock::DDUI::PathUtility::stringToDynamicValue(root.dump());
    if (formOpt) {
        sync.set(
            DduiManager::getDatastoreName(),
            DduiManager::getCustomFormPropertyName() + std::to_string(mImpl->mFormId),
            *formOpt,
            true
        );
    }

    mImpl->cleanupSubscriptions();

    auto addSub = [this](std::shared_ptr<void> const& obs, uint64_t subId, std::function<void(uint64_t)> unsub) {
        mImpl->mSubs.push_back({obs, subId, std::move(unsub)});
    };
    auto updateDouble = [this](std::string const& path, double val) { mImpl->updatePath(path, val); };
    auto updateBool   = [this](std::string const& path, bool val) { mImpl->updatePath(path, val); };
    auto updateString = [this](std::string const& path, std::string const& val) { mImpl->updatePath(path, val); };

    for (size_t i = 0; i < mImpl->mControls.size(); ++i) {
        std::string prefix = "layout[" + std::to_string(i) + "].";
        mImpl->mControls[i]->setupSubscriptions(prefix, addSub, updateDouble, updateBool, updateString);
    }

    if (mImpl->mCloseButton) {
        mImpl->mCloseButton->setupSubscriptions("closeButton.", addSub, updateDouble, updateBool, updateString);
    }

    ClientboundDataDrivenUIShowScreenPacket packet;
    packet.mScreenId       = DduiManager::getCustomFormScreenId();
    packet.mFormId         = mImpl->mFormId;
    packet.mDataInstanceId = mImpl->mFormId;

    packet.sendTo(mImpl->mPlayer);

    ll::service::getLevel().transform([&](auto& level) {
        auto* sender = level.getPacketSender();
        if (sender) {
            Bedrock::DDUI::sendDataStorePacketsToClient(sync, *sender, &serverPlayer.getUserEntityIdentifier());
        }

        return true;
    });
}

void CustomForm::close() {
    if (!mImpl->mIsShowing) return;

    mImpl->mIsShowing = false;

    auto& sp     = static_cast<ServerPlayer&>(mImpl->mPlayer);
    auto& sync   = sp.getDataStoreSync();
    auto& stores = *sync.mDataStores;

    if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
        it->second.erase(DduiManager::getCustomFormPropertyName() + std::to_string(mImpl->mFormId));
    }

    ClientboundDataDrivenUICloseScreenPacket packet;
    packet.mFormId = mImpl->mFormId;
    packet.sendTo(mImpl->mPlayer);

    if (mImpl->mCallback) {
        mImpl->mCallback(mImpl->mPlayer, DataDrivenScreenClosedReason::ServerClosed);
    }

    DduiManager::unregisterCustomForm(mImpl->mFormId, mImpl->mPlayer);
}

bool CustomForm::isShowing() const { return mImpl->mIsShowing; }

void CustomForm::handleDataStoreUpdate(
    std::string const& /*property*/,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (path == "closeButton.onClick") {
        if (mImpl->mCloseButton) {
            mImpl->mCloseButton->handleUpdate("onClick", value);
        }

        close();
        return;
    }

    if (path.rfind("layout[", 0) == 0) {
        size_t endBracket = path.find(']');
        if (endBracket != std::string::npos) {
            size_t      controlIndex = std::stoul(path.substr(7, endBracket - 7));
            std::string subpath      = path.substr(endBracket + 2); // Skip ].

            if (controlIndex < mImpl->mControls.size()) {
                mImpl->mControls[controlIndex]->handleUpdate(subpath, value);
            }
        }
    }
}

void CustomForm::handleScreenClosed(::DataDrivenScreenClosedReason closedReason, Player& player) {
    mImpl->mIsShowing = false;

    ll::ddui::DataDrivenScreenClosedReason reason = ll::ddui::DataDrivenScreenClosedReason::ClientClosed;
    if (closedReason == ::DataDrivenScreenClosedReason::ProgrammaticClose
        || closedReason == ::DataDrivenScreenClosedReason::ProgrammaticCloseAll) {
        reason = ll::ddui::DataDrivenScreenClosedReason::ServerClosed;
    } else if (closedReason == ::DataDrivenScreenClosedReason::UserBusy) {
        reason = ll::ddui::DataDrivenScreenClosedReason::UserBusy;
    }

    if (mImpl->mCallback) {
        mImpl->mCallback(player, reason);
    }

    auto& sp     = static_cast<ServerPlayer&>(player);
    auto& sync   = sp.getDataStoreSync();
    auto& stores = *sync.mDataStores;

    if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
        it->second.erase(DduiManager::getCustomFormPropertyName() + std::to_string(mImpl->mFormId));
    }

    DduiManager::unregisterCustomForm(mImpl->mFormId, player);
}

} // namespace ll::ddui
