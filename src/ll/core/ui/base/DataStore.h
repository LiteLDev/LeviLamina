#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <variant>

#include "ll/api/Expected.h"
#include "ll/api/base/Containers.h"
#include "ll/api/ui/base/DataStore.h"

#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

namespace Bedrock::DDUI {
class DataStoreSyncServer;
}
namespace cereal {
class DynamicValue;
}

namespace ll::ui::detail {

class ScreenSessionImpl;
struct BindingSlot;
struct PropertySlot;

using BindingVariant = BindingValueTypes::to<std::variant>;

template <class T>
using Listener = brstd::move_only_function<void(T const&)>;

using ListenerCallback = BindingValueTypes::wrap<Listener>::to<std::variant>;

Expected<BindingVariant> readBindingValue(std::size_t type, cereal::DynamicValue const* value);
BindingVariant           makeDefaultBindingValue(std::size_t type);

struct NativeSubscription {
    Bedrock::PubSub::Subscription value;

    NativeSubscription(
        Bedrock::DDUI::DataStoreSyncServer&,
        std::string const&                                 datastore,
        std::string const&                                 property,
        std::string const&                                 path,
        std::function<void(cereal::DynamicValue const*)>&& callback
    );
};

struct BindingSlot {
    enum class ClientWriteState : std::uint8_t {
        Disabled,
        Writable,
        Restoring,
    };

    PropertySlot*                     property;
    std::string                       path;
    BindingVariant                    lastGood;
    std::optional<NativeSubscription> validationSubscription;
    std::size_t                       listenerCount{};
    ClientWriteState                  clientWriteState{ClientWriteState::Disabled};
    bool                              suppressNotification{false};

    BindingSlot(PropertySlot& property, std::string path, std::size_t type);

    [[nodiscard]] std::size_t type() const noexcept { return lastGood.index(); }
    [[nodiscard]] bool        clientWritable() const noexcept { return clientWriteState != ClientWriteState::Disabled; }
    [[nodiscard]] bool        restoring() const noexcept { return clientWriteState == ClientWriteState::Restoring; }
    void                      resetLastGood();
};

struct PropertySlot {
    ScreenSessionImpl*              owner;
    bool                            isOwned;
    std::string                     datastore;
    std::string                     property;
    SmallStringNodeMap<BindingSlot> bindings;

    PropertySlot(ScreenSessionImpl& session, std::string datastore, std::string property, bool owned);

    [[nodiscard]] ScreenSessionImpl& session() const noexcept;
    [[nodiscard]] bool               owned() const noexcept;
};

} // namespace ll::ui::detail
