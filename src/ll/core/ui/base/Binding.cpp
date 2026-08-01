#include "ll/core/ui/base/ScreenSession.h"

#include <concepts>
#include <utility>

#include "ll/api/base/ScopedValue.h"
#include "ll/api/i18n/I18n.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/scripting/data_sync/PathQueryError.h"
#include "mc/scripting/data_sync/PathUtility.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ui::detail {

Expected<BindingVariant> readBindingValue(std::size_t type, cereal::DynamicValue const* value) {
    if (value == nullptr) {
        return makeI18nStringError<"DDUI binding path does not contain a value">();
    }

    if (type == BindingValueTypes::index<cereal::DynamicValue>) {
        return BindingVariant{std::in_place_type<cereal::DynamicValue>, *value};
    }

    auto result = Bedrock::DDUI::PathUtility::convertToPrimitive(*value);
    if (!result || result->index() != type) {
        return makeI18nStringError<"DDUI binding value has the wrong type">();
    }
    return std::visit(
        []<class T>(T const& item) -> BindingVariant { return BindingVariant{std::in_place_type<T>, item}; },
        *result
    );
}

BindingVariant makeDefaultBindingValue(std::size_t type) {
    return meta::visitIndex<BindingValueTypes::size>(type, []<std::size_t index> {
        using T = BindingValueTypes::get<index>;
        return BindingVariant{std::in_place_type<T>};
    });
}

BindingSlot::BindingSlot(PropertySlot& value, std::string bindingPath, std::size_t type)
: property(&value),
  path(std::move(bindingPath)),
  lastGood(makeDefaultBindingValue(type)) {}

void BindingSlot::resetLastGood() { lastGood = makeDefaultBindingValue(type()); }

} // namespace ll::ui::detail

namespace ll::ui {

static Unexpected pathError(Bedrock::DDUI::PathUtility::PathQueryError const& error) {
    return makeI18nStringError<"DDUI data path error: {0}">(*error.message);
}

Expected<detail::BindingSlot*>
detail::ScreenSessionImpl::getOrCreateBinding(PropertySlot& property, std::string path, std::size_t type) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot bind a property on a closed DDUI session">();
    }
    if (type >= BindingValueTypes::size) {
        return makeI18nStringError<"Invalid DDUI binding type">();
    }

    auto key                      = path;
    auto [bindingEntry, inserted] = property.bindings.try_emplace(std::move(key), property, std::move(path), type);
    if (!inserted && bindingEntry->second.type() != type) {
        return makeI18nStringError<"DDUI path is already bound with a different type">();
    }
    return &bindingEntry->second;
}

Expected<detail::BindingVariant> detail::ScreenSessionImpl::getBinding(BindingSlot const& binding) const {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot read a binding on a closed DDUI session">();
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    auto result =
        player->getDataStoreSync().getPath(binding.property->datastore, binding.property->property, binding.path);
    if (!result) {
        return pathError(result.error());
    }
    return detail::readBindingValue(binding.type(), result.value().get());
}

Expected<> detail::ScreenSessionImpl::setBinding(BindingSlot& binding, BindingVariant value) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot write a binding on a closed DDUI session">();
    }
    if (value.index() != binding.type()) {
        return makeI18nStringError<"DDUI binding write has the wrong type">();
    }

    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }

    ScopedValue mutation{mServerMutationActive, true};
    auto&       sync = player->getDataStoreSync();
    return std::visit(
        [&](auto const& data) -> Expected<> {
            using T = std::remove_cvref_t<decltype(data)>;
            if constexpr (std::same_as<T, cereal::DynamicValue>) {
                if (binding.path.empty()) {
                    sync.set(binding.property->datastore, binding.property->property, data, true);
                    return {};
                }

                auto const* current = sync.get(binding.property->datastore, binding.property->property);
                if (current == nullptr) {
                    return makeI18nStringError<"DDUI property does not contain a value">();
                }
                auto updated = *current;
                auto result  = Bedrock::DDUI::PathUtility::setPathOnDataStoreObject(
                    updated,
                    binding.path,
                    data,
                    binding.property->datastore,
                    binding.property->property
                );
                if (!result) {
                    return pathError(result.error());
                }
                sync.set(binding.property->datastore, binding.property->property, updated, true);
                return {};
            } else {
                using NativePrimitive = std::variant<double, bool, std::string>;
                NativePrimitive primitive{std::in_place_type<T>, data};
                auto            result = sync.setPath(
                    binding.property->datastore,
                    binding.property->property,
                    binding.path,
                    primitive,
                    true,
                    false
                );
                return result ? Expected<>{} : Expected<>{pathError(result.error())};
            }
        },
        value
    );
}

} // namespace ll::ui
