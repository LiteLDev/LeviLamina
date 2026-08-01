#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>

#include "ll/api/ui/base/ScreenSession.h"
#include "ll/core/ui/base/DataStore.h"

#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/scripting/DataDrivenScreenPromise.h"

class Player;
class ServerPlayer;
namespace Bedrock::DDUI {
class DataStoreSyncServer;
}
namespace cereal {
class DynamicValue;
}

namespace ll::ui::detail {

class ScreenSessionImpl final : public DataDrivenScreenPromise, public std::enable_shared_from_this<ScreenSessionImpl> {
public:
    using Result   = ScreenSession::Result;
    using Callback = ScreenSession::Callback;

private:
    enum class Phase : std::uint8_t {
        Ready,
        Showing,
        CloseRequested,
        Closed,
    };

    std::string                 mScreenId;
    WeakEntityRef               mPlayer;
    std::optional<unsigned int> mInstanceId;
    Phase                       mPhase{Phase::Ready};
    bool                        mServerMutationActive{false};

    using PropertyMap = SmallStringNodeMap<PropertySlot>;
    SmallStringNodeMap<PropertyMap> mProperties;

    Callback mCompletion;

public:
    static void closeScreen(Player& player, std::optional<unsigned int> formId);

    ScreenSessionImpl(std::string screenId, Player& player, std::optional<unsigned int> instanceId);
    ~ScreenSessionImpl();

    [[nodiscard]] ScreenSessionState          state() const noexcept;
    [[nodiscard]] std::optional<unsigned int> instanceId() const noexcept { return mInstanceId; }
    [[nodiscard]] std::optional<unsigned int> formId() const noexcept;

    Expected<PropertySlot*>
    createProperty(std::string datastore, std::string property, cereal::DynamicValue const& value);
    Expected<PropertySlot*> createProperty(std::string datastore, std::string property, std::string const& json);
    Expected<PropertySlot*> borrowProperty(std::string datastore, std::string property);

    Expected<> set(PropertySlot const& property, cereal::DynamicValue const& value);
    Expected<> setJson(PropertySlot const& property, std::string const& json);
    Expected<> erase(PropertySlot const& property);

    Expected<BindingSlot*>   getOrCreateBinding(PropertySlot& property, std::string path, std::size_t type);
    Expected<BindingVariant> getBinding(BindingSlot const& binding) const;
    Expected<>               setBinding(BindingSlot& binding, BindingVariant value);
    Expected<>               setClientWritable(BindingSlot& binding, bool writable);
    [[nodiscard]] bool       isClientWritable(BindingSlot const& binding) const noexcept;

    Expected<Subscription> listen(BindingSlot& binding, ListenerCallback callback);
    void                   unsubscribe(BindingSlot& binding) noexcept;
    [[nodiscard]] bool     subscriptionActive(BindingSlot const& binding) const noexcept;
    void                   notifyListener(BindingSlot&, ListenerCallback&, cereal::DynamicValue const* value) noexcept;

    Expected<> show(Callback callback);
    Expected<> close();
    void       abort() noexcept;

    void resolve(::DataDrivenScreenClosedReason reason) noexcept override;
    void reject(::DataDrivenScreenRejectReason reason) noexcept override;

private:
    [[nodiscard]] ServerPlayer* getPlayer() const noexcept;

    Expected<> beginShow();
    void       failStart() noexcept;
    void       complete(Result result) noexcept;
    void       cleanupDataStore() noexcept;

    void ensureNativeSubscription(BindingSlot& binding, Bedrock::DDUI::DataStoreSyncServer& sync);
    void releaseNativeSubscriptionIfUnused(BindingSlot& binding) noexcept;
    void onNativeChange(BindingSlot& binding, cereal::DynamicValue const* value) noexcept;
    void restoreLastGood(BindingSlot& binding) noexcept;
};

} // namespace ll::ui::detail
