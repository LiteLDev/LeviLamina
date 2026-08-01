#include "ll/core/ui/base/ScreenSession.h"

#include <memory>
#include <optional>
#include <utility>

#include "ll/api/i18n/I18n.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/network/packet/ClientboundDataDrivenUICloseScreenPacket.h"
#include "mc/scripting/ScriptFormPromiseTracker.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ui::detail {

void ScreenSessionImpl::closeScreen(Player& player, std::optional<unsigned int> formId) {
    ClientboundDataDrivenUICloseScreenPacket packet;
    packet.mFormId = formId;
    packet.sendTo(player);
}

ScreenSessionImpl::ScreenSessionImpl(std::string screenId, Player& player, std::optional<unsigned int> instanceId)
: mScreenId(std::move(screenId)),
  mPlayer(player.getEntityContext().getWeakRef()),
  mInstanceId(instanceId) {}

ScreenSessionImpl::~ScreenSessionImpl() {
    if (mPhase != Phase::Closed) {
        mPhase = Phase::Closed;
        cleanupDataStore();
    }
}

ScreenSessionState ScreenSessionImpl::state() const noexcept {
    switch (mPhase) {
    case Phase::Ready:
        return ScreenSessionState::Ready;
    case Phase::Showing:
    case Phase::CloseRequested:
        return ScreenSessionState::Showing;
    case Phase::Closed:
        return ScreenSessionState::Closed;
    }
    LL_UNREACHABLE;
}

std::optional<unsigned int> ScreenSessionImpl::formId() const noexcept { return mFormId; }

ServerPlayer* ScreenSessionImpl::getPlayer() const noexcept { return mPlayer.tryUnwrap<ServerPlayer>().as_ptr(); }

void ScreenSessionImpl::failStart() noexcept {
    if (mPhase == Phase::Closed) {
        return;
    }
    mPhase = Phase::Closed;
    cleanupDataStore();
}

void ScreenSessionImpl::cleanupDataStore() noexcept {
    auto*                player = getPlayer();
    auto*                sync   = player == nullptr ? nullptr : &player->getDataStoreSync();
    cereal::DynamicValue nullValue{};

    for (auto& datastoreEntry : mProperties) {
        for (auto& propertyEntry : datastoreEntry.second) {
            auto& property = propertyEntry.second;
            for (auto& bindingEntry : property.bindings) {
                auto& binding = bindingEntry.second;
                if (binding.clientWritable() && sync != nullptr) {
                    sync->setPropertyUpdateAllowed(property.datastore, property.property, binding.path, false);
                }
                binding.validationSubscription.reset();
            }
            if (sync != nullptr && property.owned()) {
                // Vanilla retains ordering counters and publisher path slots after a property removal.
                sync->set(property.datastore, property.property, nullValue, true);
            }
        }
    }
}

Expected<> ScreenSessionImpl::beginShow() {
    if (mPhase != Phase::Ready) {
        return makeI18nStringError<"DDUI session can only be shown once">();
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        failStart();
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    auto  serverInstance = ll::service::getServerInstance();
    auto* scriptManager  = serverInstance ? serverInstance->getScriptManager() : nullptr;
    auto* tracker        = scriptManager != nullptr && scriptManager->mFormPromiseTracker
                             ? scriptManager->mFormPromiseTracker.get()
                             : nullptr;
    if (tracker == nullptr) {
        failStart();
        return makeI18nStringError<"Bedrock DDUI promise tracker is unavailable">();
    }
    mPhase = Phase::Showing;
    tracker->showDataDrivenScreenToPlayer(*player, mScreenId, instanceId(), shared_from_this());
    return {};
}

Expected<> ScreenSessionImpl::show(Callback callback) {
    if (mPhase != Phase::Ready) {
        return makeI18nStringError<"DDUI session can only be shown once">();
    }
    if (callback) {
        mCompletion = std::move(callback);
    }

    auto result = beginShow();
    if (!result) {
        mCompletion = {};
    }
    return result;
}

void ScreenSessionImpl::complete(Result result) noexcept {
    if (mPhase != Phase::Showing && mPhase != Phase::CloseRequested) {
        return;
    }

    mPhase = Phase::Closed;
    cleanupDataStore();

    auto completion = std::exchange(mCompletion, {});
    if (!completion) {
        return;
    }
    try {
        completion(std::move(result));
    } catch (...) {
        ll::getLogger().error("Error in DDUI completion callback:");
        error_utils::printCurrentException(ll::getLogger());
    }
}

Expected<> ScreenSessionImpl::close() {
    if (mPhase == Phase::Closed || mPhase == Phase::CloseRequested) {
        return {};
    }
    auto const currentFormId = formId();
    if (mPhase != Phase::Showing || !currentFormId) {
        return makeI18nStringError<"DDUI session is not showing">();
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    mPhase = Phase::CloseRequested;
    closeScreen(*player, currentFormId);
    return {};
}

void ScreenSessionImpl::abort() noexcept { failStart(); }

void ScreenSessionImpl::resolve(::DataDrivenScreenClosedReason reason) noexcept { complete(Result{reason}); }

void ScreenSessionImpl::reject(::DataDrivenScreenRejectReason reason) noexcept {
    switch (reason) {
    case ::DataDrivenScreenRejectReason::PlayerLeave:
        complete(Result{makeI18nStringError<"DDUI player left before the screen completed">()});
        return;
    case ::DataDrivenScreenRejectReason::ServerShutdown:
        complete(Result{makeI18nStringError<"Server stopped before the DDUI screen completed">()});
        return;
    }
    complete(Result{makeI18nStringError<"Bedrock returned an unknown DDUI rejection reason">()});
}

} // namespace ll::ui::detail
