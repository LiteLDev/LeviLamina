#include "ll/core/ui/base/ScreenSession.h"

#include <utility>

#include "ll/api/base/ScopedValue.h"
#include "ll/api/i18n/I18n.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/scripting/data_sync/PathUtility.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ui {

static Expected<cereal::DynamicValue> parseJson(std::string const& json) {
    auto parsed = Bedrock::DDUI::PathUtility::stringToDynamicValue(json);
    if (!parsed) {
        return makeI18nStringError<"Invalid JSON for DDUI property">();
    }
    return std::move(*parsed);
}

detail::PropertySlot::PropertySlot(
    ScreenSessionImpl& session,
    std::string        datastoreName,
    std::string        propertyName,
    bool               owned
)
: owner(&session),
  isOwned(owned),
  datastore(std::move(datastoreName)),
  property(std::move(propertyName)) {}

detail::ScreenSessionImpl& detail::PropertySlot::session() const noexcept { return *owner; }

bool detail::PropertySlot::owned() const noexcept { return isOwned; }

Expected<detail::PropertySlot*> detail::ScreenSessionImpl::createProperty(
    std::string                 datastore,
    std::string                 property,
    cereal::DynamicValue const& value
) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot create a property on a closed DDUI session">();
    }

    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    auto& properties                    = mProperties.try_emplace(datastore).first->second;
    auto [propertyEntry, propertyAdded] = properties.try_emplace(property, *this, datastore, property, true);
    auto& slot                          = propertyEntry->second;
    if (!propertyAdded && !slot.owned()) {
        return makeI18nStringError<"Cannot take ownership of a borrowed DDUI property">();
    }

    ScopedValue mutation{mServerMutationActive, true};
    player->mDataStoreSync->set(slot.datastore, slot.property, value, true);
    return &slot;
}

Expected<detail::PropertySlot*>
detail::ScreenSessionImpl::createProperty(std::string datastore, std::string property, std::string const& json) {
    auto parsed = parseJson(json);
    if (!parsed) {
        return forwardError(parsed.error());
    }
    return createProperty(std::move(datastore), std::move(property), parsed.value());
}

Expected<detail::PropertySlot*> detail::ScreenSessionImpl::borrowProperty(std::string datastore, std::string property) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot borrow a property on a closed DDUI session">();
    }

    auto& properties = mProperties.try_emplace(datastore).first->second;
    return &properties.try_emplace(property, *this, datastore, property, false).first->second;
}

Expected<> detail::ScreenSessionImpl::set(PropertySlot const& property, cereal::DynamicValue const& value) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot write a property on a closed DDUI session">();
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    ScopedValue mutation{mServerMutationActive, true};
    player->mDataStoreSync->set(property.datastore, property.property, value, true);
    return {};
}

Expected<> detail::ScreenSessionImpl::setJson(PropertySlot const& property, std::string const& json) {
    auto parsed = parseJson(json);
    if (!parsed) {
        return forwardError(parsed.error());
    }
    return set(property, parsed.value());
}

Expected<> detail::ScreenSessionImpl::erase(PropertySlot const& property) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot erase a property on a closed DDUI session">();
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    cereal::DynamicValue nullValue{};
    ScopedValue          mutation{mServerMutationActive, true};
    player->mDataStoreSync->set(property.datastore, property.property, nullValue, true);
    return {};
}

} // namespace ll::ui
