#include "ll/core/protocol/RuntimePacketAdapter.h"

#include <array>
#include <atomic>
#include <mutex>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>

#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"

namespace ll::protocol::detail {

struct RuntimeControlSlot {
    std::string_view name;
    std::uint64_t    runtimeId;
};

// clang-format off
inline constexpr std::array ControlSlots{
    RuntimeControlSlot{"levilamina:control/hello", HelloRuntimeId},
    RuntimeControlSlot{"levilamina:control/hello_ack", HelloAckRuntimeId},
    RuntimeControlSlot{"levilamina:control/declaration", DeclarationRuntimeId},
    RuntimeControlSlot{"levilamina:control/negotiation_result", NegotiationResultRuntimeId},
    RuntimeControlSlot{"levilamina:control/ready", ReadyRuntimeId},
    RuntimeControlSlot{"levilamina:control/protocol_error", ProtocolErrorRuntimeId},
};
// clang-format on

struct RuntimePacketAdapter::Impl {
    class Handler final : public ll::network::IPacketHandler {
        Impl& mOwner;

        [[nodiscard]] static Expected<> dispatch(
            RuntimePacketReceiver&     receiver,
            NetworkIdentifier const&   networkId,
            NetEventCallback&          callback,
            ll::network::Packet const& packet
        ) {
            if (isControlRuntimeId(packet.getRuntimeId())) {
                return receiver.receive(networkId, callback, static_cast<ControlPacket const&>(packet));
            }

            return receiver.receive(networkId, callback, static_cast<ProtocolEnvelopePacket const&>(packet));
        }

        [[nodiscard]] static Expected<> dispatchSafely(
            RuntimePacketReceiver&     receiver,
            NetworkIdentifier const&   networkId,
            NetEventCallback&          callback,
            ll::network::Packet const& packet
        ) noexcept {
            try {
                return dispatch(receiver, networkId, callback, packet);
            } catch (...) {
                return makeExceptionError();
            }
        }

    public:
        explicit Handler(Impl& owner) noexcept : mOwner(owner) {}

        void handle(
            NetworkIdentifier const&   networkId,
            NetEventCallback&          callback,
            ll::network::Packet const& packet
        ) const override {
            auto* receiver = mOwner.receiver.load(std::memory_order_acquire);
            if (!receiver) {
                return;
            }

            auto result = dispatchSafely(*receiver, networkId, callback, packet);
            if (!result) {
                ll::getLogger().error(
                    "Protocol RuntimePacket ingress failed for runtime ID {}: {}",
                    packet.getRuntimeId(),
                    result.error().message()
                );
            }
        }
    };

    mutable std::mutex mutex;

    bool isInitialized{};
    bool initializationFailed{};

    std::unordered_map<std::uint64_t, PayloadId> payloadSlots;
    std::atomic<RuntimePacketReceiver*>          receiver{};

    Handler handler{*this};

    [[nodiscard]] Expected<>
    registerSlot(std::string_view name, std::uint64_t runtimeId, network::PacketRegistrar::PacketFactory factory) {
        auto& registrar = network::PacketRegistrar::getInstance();
        if (!registrar.registerPacket(name, runtimeId, std::move(factory), handler)) {
            return makeRegistrationError(RegistrationErrc::RuntimeIdCollision, std::string{name});
        }

        auto registeredHandler = registrar.getHandler(runtimeId);
        if (registeredHandler.as_ptr() != &handler) {
            return makeRegistrationError(RegistrationErrc::RuntimeIdCollision, std::string{name});
        }

        return {};
    }

    [[nodiscard]] Expected<> initializeLocked() {
        if (isInitialized) {
            return {};
        }
        if (initializationFailed) {
            return makeLifecycleError(LifecycleErrc::RuntimeStopping, "protocol runtime initialization failed");
        }

        for (auto const& slot : ControlSlots) {
            auto registered = registerSlot(slot.name, slot.runtimeId, [runtimeId = slot.runtimeId] {
                return std::make_unique<ControlPacket>(runtimeId);
            });
            if (!registered) {
                initializationFailed = true;
                return registered;
            }
        }

        isInitialized = true;
        return {};
    }
};

RuntimePacketAdapter::RuntimePacketAdapter() : mImpl(std::make_unique<Impl>()) {}
RuntimePacketAdapter::~RuntimePacketAdapter() = default;

Expected<> RuntimePacketAdapter::initialize() noexcept {
    try {
        std::scoped_lock lock{mImpl->mutex};
        return mImpl->initializeLocked();
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> RuntimePacketAdapter::installPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) noexcept {
    try {
        if (runtimeId == 0 || isControlRuntimeId(runtimeId)) {
            return makeRegistrationError(RegistrationErrc::RuntimeIdCollision, id.str());
        }

        std::scoped_lock lock{mImpl->mutex};
        if (auto initialized = mImpl->initializeLocked(); !initialized) {
            return initialized;
        }

        auto [slot, inserted] = mImpl->payloadSlots.emplace(runtimeId, id);
        if (!inserted) {
            if (slot->second == id) {
                return {};
            }
            return makeRegistrationError(RegistrationErrc::RuntimeIdCollision, id.str());
        }
        if (mImpl->payloadSlots.size() > Limits::MaxDeclaredPayloads) {
            mImpl->payloadSlots.erase(slot);
            return makeRegistrationError(RegistrationErrc::InvalidLimit, "permanent payload slot count");
        }

        Expected<> registered;
        try {
            registered = mImpl->registerSlot(id.value(), runtimeId, [runtimeId] {
                return std::make_unique<ProtocolEnvelopePacket>(runtimeId, Limits::MaxPayloadBody);
            });
        } catch (...) {
            mImpl->payloadSlots.erase(slot);
            throw;
        }

        if (!registered) {
            mImpl->payloadSlots.erase(slot);
            return registered;
        }

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

bool RuntimePacketAdapter::initialized() const {
    std::scoped_lock lock{mImpl->mutex};
    return mImpl->isInitialized;
}

bool RuntimePacketAdapter::hasPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) const {
    std::scoped_lock lock{mImpl->mutex};

    auto found = mImpl->payloadSlots.find(runtimeId);
    return found != mImpl->payloadSlots.end() && found->second == id;
}

Expected<> RuntimePacketAdapter::setReceiver(RuntimePacketReceiver& receiver) noexcept {
    RuntimePacketReceiver* expected{};
    if (mImpl->receiver.compare_exchange_strong(expected, &receiver, std::memory_order_acq_rel)) {
        return {};
    }
    if (expected == &receiver) {
        return {};
    }

    return makeLifecycleError(LifecycleErrc::InFlight, "protocol runtime receiver already installed");
}

} // namespace ll::protocol::detail
