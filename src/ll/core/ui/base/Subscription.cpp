#include "ll/core/ui/base/ScreenSession.h"

#include <concepts>
#include <memory>
#include <type_traits>
#include <utility>

#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/data_sync/DataStoreSyncServer.h"
#include "mc/scripting/data_sync/PathQueryError.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ui {

struct Subscription::Impl {
    std::weak_ptr<detail::ScreenSessionImpl> session;
    detail::BindingSlot*                     binding;
    detail::ListenerCallback                 callback;
    detail::NativeSubscription               native;

    Impl(
        std::weak_ptr<detail::ScreenSessionImpl>,
        detail::BindingSlot&,
        Bedrock::DDUI::DataStoreSyncServer&,
        detail::ListenerCallback
    );
    ~Impl();

    [[nodiscard]] bool active() const noexcept;
};

Subscription::Subscription() noexcept = default;

Subscription::Subscription(std::unique_ptr<Impl> value) : impl(std::move(value)) {}

Subscription::~Subscription() = default;

Subscription::Subscription(Subscription&&) noexcept = default;

Subscription& Subscription::operator=(Subscription&&) noexcept = default;

void Subscription::reset() noexcept { impl.reset(); }

Subscription::operator bool() const noexcept { return impl != nullptr && impl->active(); }

detail::NativeSubscription::NativeSubscription(
    Bedrock::DDUI::DataStoreSyncServer&                sync,
    std::string const&                                 datastore,
    std::string const&                                 property,
    std::string const&                                 path,
    std::function<void(cereal::DynamicValue const*)>&& callback
)
: value(sync.listen(datastore, property, path, std::move(callback))) {}

Subscription::Impl::Impl(
    std::weak_ptr<detail::ScreenSessionImpl> owner,
    detail::BindingSlot&                     bindingSlot,
    Bedrock::DDUI::DataStoreSyncServer&      sync,
    detail::ListenerCallback                 callback
)
: session(owner),
  binding(&bindingSlot),
  callback(std::move(callback)),
  native(
      sync,
      bindingSlot.property->datastore,
      bindingSlot.property->property,
      bindingSlot.path,
      [this](cereal::DynamicValue const* value) noexcept {
          if (auto owner = session.lock()) {
              owner->notifyListener(*binding, this->callback, value);
          }
      }
  ) {}

Subscription::Impl::~Impl() {
    if (auto owner = session.lock()) {
        owner->unsubscribe(*binding);
    }
}

bool Subscription::Impl::active() const noexcept {
    auto owner = session.lock();
    return owner && owner->subscriptionActive(*binding) && !native.value.mBody.expired();
}

void detail::ScreenSessionImpl::ensureNativeSubscription(
    BindingSlot&                        binding,
    Bedrock::DDUI::DataStoreSyncServer& sync
) {
    if (binding.validationSubscription && !binding.validationSubscription->value.mBody.expired()) {
        return;
    }
    binding.validationSubscription.reset();

    auto  weak   = weak_from_this();
    auto* target = &binding;
    binding.validationSubscription.emplace(
        sync,
        binding.property->datastore,
        binding.property->property,
        binding.path,
        [weak = std::move(weak), target](cereal::DynamicValue const* value) noexcept {
            if (auto session = weak.lock()) {
                session->onNativeChange(*target, value);
            }
        }
    );
}

void detail::ScreenSessionImpl::releaseNativeSubscriptionIfUnused(BindingSlot& binding) noexcept {
    if (!binding.clientWritable() && binding.listenerCount == 0) {
        binding.validationSubscription.reset();
    }
}

Expected<Subscription> detail::ScreenSessionImpl::listen(BindingSlot& binding, ListenerCallback callback) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot listen to a binding on a closed DDUI session">();
    }
    auto const callbackValid = std::visit([](auto const& value) { return static_cast<bool>(value); }, callback);
    if (!callbackValid) {
        return makeI18nStringError<"DDUI binding listener is empty">();
    }
    if (callback.index() != binding.type()) {
        return makeI18nStringError<"DDUI binding listener has the wrong type">();
    }

    auto* player = getPlayer();
    if (player == nullptr) {
        return makeI18nStringError<"DDUI player is no longer available">();
    }
    auto& sync = *player->mDataStoreSync;
    ensureNativeSubscription(binding, sync);

    auto subscription = std::make_unique<Subscription::Impl>(weak_from_this(), binding, sync, std::move(callback));
    ++binding.listenerCount;
    return Subscription{std::move(subscription)};
}

void detail::ScreenSessionImpl::unsubscribe(BindingSlot& binding) noexcept {
    if (binding.listenerCount != 0) {
        --binding.listenerCount;
    }
    releaseNativeSubscriptionIfUnused(binding);
}

bool detail::ScreenSessionImpl::subscriptionActive(BindingSlot const& binding) const noexcept {
    return mPhase != Phase::Closed && binding.listenerCount != 0;
}

Expected<> detail::ScreenSessionImpl::setClientWritable(BindingSlot& binding, bool writable) {
    if (mPhase == Phase::Closed) {
        return makeI18nStringError<"Cannot change a binding on a closed DDUI session">();
    }
    if (binding.clientWritable() == writable) {
        return {};
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        if (!writable) {
            binding.clientWriteState = BindingSlot::ClientWriteState::Disabled;
            binding.resetLastGood();
            releaseNativeSubscriptionIfUnused(binding);
        }
        return makeI18nStringError<"DDUI player is no longer available">();
    }
    auto& sync = *player->mDataStoreSync;

    if (!writable) {
        sync.setPropertyUpdateAllowed(binding.property->datastore, binding.property->property, binding.path, false);
        binding.clientWriteState = BindingSlot::ClientWriteState::Disabled;
        binding.resetLastGood();
        releaseNativeSubscriptionIfUnused(binding);
        return {};
    }

    auto current = sync.getPath(binding.property->datastore, binding.property->property, binding.path);
    if (!current) {
        return makeI18nStringError<"DDUI data path error: {0}">(*current.error().message);
    }
    auto value = detail::readBindingValue(binding.type(), current.value().get());
    if (!value) {
        return forwardError(value.error());
    }
    ensureNativeSubscription(binding, sync);
    binding.lastGood = std::move(value.value());

    sync.setPropertyUpdateAllowed(binding.property->datastore, binding.property->property, binding.path, true);

    binding.clientWriteState = BindingSlot::ClientWriteState::Writable;
    return {};
}

bool detail::ScreenSessionImpl::isClientWritable(BindingSlot const& binding) const noexcept {
    return binding.clientWritable() && mPhase != Phase::Closed;
}

void detail::ScreenSessionImpl::notifyListener(
    BindingSlot&                binding,
    ListenerCallback&           callback,
    cereal::DynamicValue const* value
) noexcept {
    if (mPhase == Phase::Closed || binding.suppressNotification) {
        return;
    }

    auto current = detail::readBindingValue(binding.type(), value);
    if (!current) {
        return;
    }
    std::visit(
        [](auto& listener, auto const& currentValue) {
            using Value = std::remove_cvref_t<decltype(currentValue)>;
            if constexpr (std::invocable<decltype(listener)&, Value const&>) {
                try {
                    listener(currentValue);
                } catch (...) {
                    ll::getLogger().error("Error in DDUI binding listener:");
                    error_utils::printCurrentException(ll::getLogger());
                }
            }
        },
        callback,
        current.value()
    );
}

void detail::ScreenSessionImpl::onNativeChange(BindingSlot& binding, cereal::DynamicValue const* value) noexcept {
    if (mPhase == Phase::Closed) {
        return;
    }

    binding.suppressNotification = true;
    bool valid                   = false;
    auto current                 = detail::readBindingValue(binding.type(), value);
    if (current) {
        auto const replay = binding.clientWritable() && !mServerMutationActive && current.value() == binding.lastGood;
        if (binding.clientWritable()) {
            binding.lastGood = current.value();
        }
        valid                        = true;
        binding.suppressNotification = binding.restoring() || replay || mServerMutationActive;
    }

    if (!valid && binding.clientWritable() && !mServerMutationActive && !binding.restoring()) {
        restoreLastGood(binding);
    }
}

void detail::ScreenSessionImpl::restoreLastGood(BindingSlot& binding) noexcept {
    if (!binding.clientWritable() || binding.restoring()) {
        return;
    }
    auto* player = getPlayer();
    if (player == nullptr) {
        return;
    }

    binding.clientWriteState = BindingSlot::ClientWriteState::Restoring;
    auto result              = setBinding(binding, binding.lastGood);
    if (!result) {
        ll::getLogger()
            .warn("Failed to restore invalid DDUI update at '{}': {}", binding.path, result.error().message());
    }
    if (binding.restoring()) {
        binding.clientWriteState = BindingSlot::ClientWriteState::Writable;
    }

    if (result || !binding.clientWritable()) {
        return;
    }

    player->mDataStoreSync
        ->setPropertyUpdateAllowed(binding.property->datastore, binding.property->property, binding.path, false);
    binding.clientWriteState = BindingSlot::ClientWriteState::Disabled;
    binding.resetLastGood();
    releaseNativeSubscriptionIfUnused(binding);
    ll::getLogger().warn("Revoked client writes after DDUI validation recovery failed at '{}'", binding.path);
}

} // namespace ll::ui
