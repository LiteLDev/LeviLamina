#include "ll/api/ddui/MessageBox.h"
#include "ll/api/ddui/DataDrivenScreenClosedReason.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/ddui/DduiManager.h"
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

struct MessageBox::Impl {
    Player&           mPlayer;
    ObsStringOrString mTitle;
    ObsStringOrString mBody;
    ObsStringOrString mBtn1Label;
    ObsStringOrString mBtn1Tooltip;
    ObsStringOrString mBtn2Label;
    ObsStringOrString mBtn2Tooltip;

    uint               mFormId     = 0;
    uint               mInstanceId = 0;
    bool               mIsShowing  = false;
    Callback           mCallback;
    std::optional<int> mSelection;

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
        DduiManager::unregisterMessageBox(mFormId, mPlayer);
    }

    void cleanupSubscriptions() {
        for (auto const& sub : mSubs) {
            sub.unsubscribeFn(sub.subId);
        }
        mSubs.clear();
    }

    template <typename T>
    void addSubscription(std::shared_ptr<Observable<T>> const& obs, std::function<void(T const&)> callback) {
        if (!obs) return;

        auto subId = obs->subscribe(std::move(callback));
        mSubs.push_back({obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); }});
    }

    void updateProperty(std::string const& name, std::string const& val) {
        if (!mIsShowing) return;

        auto& sp = static_cast<ServerPlayer&>(mPlayer);
        sp.getDataStoreSync().setPath(
            DduiManager::getDatastoreName(),
            DduiManager::getMessageBoxPropertyName() + std::to_string(mFormId),
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
                    &mPlayer.getUserEntityIdentifier()
                );
            }

            return true;
        });
    }
};

MessageBox::MessageBox(Player& player, ObsStringOrString title)
: mImpl(std::make_unique<Impl>(player, std::move(title))) {}

MessageBox::~MessageBox() = default;

MessageBox& MessageBox::appendBody(ObsStringOrString bodyText) {
    mImpl->mBody = std::move(bodyText);
    return *this;
}

MessageBox& MessageBox::appendButton1(ObsStringOrString label, ObsStringOrString tooltip) {
    mImpl->mBtn1Label   = std::move(label);
    mImpl->mBtn1Tooltip = std::move(tooltip);
    return *this;
}

MessageBox& MessageBox::appendButton2(ObsStringOrString label, ObsStringOrString tooltip) {
    mImpl->mBtn2Label   = std::move(label);
    mImpl->mBtn2Tooltip = std::move(tooltip);
    return *this;
}

void MessageBox::show(Callback callback) {
    mImpl->mCallback  = std::move(callback);
    mImpl->mIsShowing = true;
    mImpl->mSelection = std::nullopt;

    DduiManager::registerMessageBox(mImpl->mFormId, mImpl->mPlayer, this);

    auto& serverPlayer = static_cast<ServerPlayer&>(mImpl->mPlayer);
    auto& sync         = serverPlayer.getDataStoreSync();

    // clang-format off
    nlohmann::json data = {
        {"title", resolveString(mImpl->mTitle)},
        {"body", resolveString(mImpl->mBody)},
        {"button1", {
            {"label", resolveString(mImpl->mBtn1Label)},
            {"onClick", 0},
            {"tooltip", resolveString(mImpl->mBtn1Tooltip)}
        }},
        {"button2", {
            {"label", resolveString(mImpl->mBtn2Label)},
            {"onClick", 0},
            {"tooltip", resolveString(mImpl->mBtn2Tooltip)}
        }},
    };
    // clang-format on

    auto valOpt = Bedrock::DDUI::PathUtility::stringToDynamicValue(data.dump());
    if (valOpt) {
        sync.set(
            DduiManager::getDatastoreName(),
            DduiManager::getMessageBoxPropertyName() + std::to_string(mImpl->mFormId),
            *valOpt,
            true
        );
    }

    mImpl->cleanupSubscriptions();

    auto addSubIfNeeded = [&](ObsStringOrString const& field, std::string const& name) {
        if (std::holds_alternative<std::shared_ptr<ObservableString>>(field)) {
            auto obs = std::get<std::shared_ptr<ObservableString>>(field);
            mImpl->addSubscription<std::string>(obs, [this, name](std::string const& val) {
                mImpl->updateProperty(name, val);
            });
        }
    };

    addSubIfNeeded(mImpl->mTitle, "title");
    addSubIfNeeded(mImpl->mBody, "body");
    addSubIfNeeded(mImpl->mBtn1Label, "button1.label");
    addSubIfNeeded(mImpl->mBtn1Tooltip, "button1.tooltip");
    addSubIfNeeded(mImpl->mBtn2Label, "button2.label");
    addSubIfNeeded(mImpl->mBtn2Tooltip, "button2.tooltip");

    ClientboundDataDrivenUIShowScreenPacket packet;
    packet.mScreenId       = DduiManager::getMessageBoxScreenId();
    packet.mFormId         = mImpl->mFormId;
    packet.mDataInstanceId = mImpl->mFormId;

    packet.sendTo(mImpl->mPlayer);

    ll::service::getLevel().transform([&](auto& level) {
        auto* sender = level.getPacketSender();
        if (sender) {
            Bedrock::DDUI::sendDataStorePacketsToClient(sync, *sender, &mImpl->mPlayer.getUserEntityIdentifier());
        }

        return true;
    });
}

void MessageBox::close() {
    if (!mImpl->mIsShowing) return;

    mImpl->mIsShowing = false;

    auto& sp     = static_cast<ServerPlayer&>(mImpl->mPlayer);
    auto& sync   = sp.getDataStoreSync();
    auto& stores = *sync.mDataStores;

    if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
        it->second.erase(DduiManager::getMessageBoxPropertyName() + std::to_string(mImpl->mFormId));
    }

    ClientboundDataDrivenUICloseScreenPacket packet;
    packet.mFormId = mImpl->mFormId;
    packet.sendTo(mImpl->mPlayer);

    if (mImpl->mCallback) {
        mImpl->mCallback(mImpl->mPlayer, MessageBoxResult{DataDrivenScreenClosedReason::ServerClosed, std::nullopt});
    }

    DduiManager::unregisterMessageBox(mImpl->mFormId, mImpl->mPlayer);
}

bool MessageBox::isShowing() const { return mImpl->mIsShowing; }

void MessageBox::handleDataStoreUpdate(
    std::string const&                             property,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (property == "selection" || path == "selection") {
        if (std::holds_alternative<double>(value)) {
            int val = static_cast<int>(std::get<double>(value));
            if (val == 0 || val == 1) {
                mImpl->mSelection = val;
            }
        }
    } else if (
        property == "button1_clicked" || path == "button1_clicked" || path == "button1/clicked"
        || path == "button1.onClick"
    ) {
        mImpl->mSelection = 0;
    } else if (
        property == "button2_clicked" || path == "button2_clicked" || path == "button2/clicked"
        || path == "button2.onClick"
    ) {
        mImpl->mSelection = 1;
    }
}

void MessageBox::handleScreenClosed(::DataDrivenScreenClosedReason closedReason, Player& player) {
    mImpl->mIsShowing = false;

    DataDrivenScreenClosedReason reason = DataDrivenScreenClosedReason::ClientClosed;
    if (closedReason == ::DataDrivenScreenClosedReason::ProgrammaticClose
        || closedReason == ::DataDrivenScreenClosedReason::ProgrammaticCloseAll) {
        reason = DataDrivenScreenClosedReason::ServerClosed;
    } else if (closedReason == ::DataDrivenScreenClosedReason::UserBusy) {
        reason = DataDrivenScreenClosedReason::UserBusy;
    }

    if (mImpl->mCallback) {
        mImpl->mCallback(player, MessageBoxResult{reason, mImpl->mSelection});
    }

    auto& sp     = static_cast<ServerPlayer&>(player);
    auto& sync   = sp.getDataStoreSync();
    auto& stores = *sync.mDataStores;

    if (auto it = stores.find(DduiManager::getDatastoreName()); it != stores.end()) {
        it->second.erase(DduiManager::getMessageBoxPropertyName() + std::to_string(mImpl->mFormId));
    }

    DduiManager::unregisterMessageBox(mImpl->mFormId, player);
}

} // namespace ll::ddui
