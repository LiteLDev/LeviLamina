#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <span>
#include <string>
#include <typeindex>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/ModuleDescriptor.h"
#include "ll/api/protocol/ModuleRegistration.h"
#include "ll/api/protocol/PayloadDescriptor.h"
#include "ll/api/protocol/PayloadRegistration.h"

namespace ll::protocol {

class PayloadContext;

template <class T>
using PayloadHandler = std::function<Expected<>(PayloadContext const&, T&&)>;

namespace detail {

class DescriptorState;
struct ModuleState;

struct PayloadCallbacks {
    using Encode   = std::function<Expected<std::string>(void const*, SchemaVersion, std::size_t)>;
    using Dispatch = std::function<Expected<>(PayloadContext const&, std::span<std::byte const>, SchemaVersion)>;

    Encode   encode;
    Dispatch dispatch;
};

struct PayloadRegistryAccess;

template <class T, class Codec>
Expected<PayloadCallbacks> makePayloadCallbacks(Codec codec, PayloadHandler<T> handler) noexcept {
    try {
        auto codecState   = std::make_shared<Codec>(std::move(codec));
        auto handlerState = handler ? std::make_shared<PayloadHandler<T>>(std::move(handler)) : nullptr;

        PayloadCallbacks callbacks;
        callbacks.encode = [codecState](void const* rawValue, SchemaVersion schema, std::size_t maxEncodedSize) noexcept
            -> Expected<std::string> {
            try {
                Encoder encoder{maxEncodedSize};

                auto encoded = codecState->encode(encoder, *static_cast<T const*>(rawValue), schema);
                if (!encoded) {
                    return forwardError(encoded.error());
                }

                return encoder.takeBuffer();
            } catch (...) {
                return makeExceptionError();
            }
        };

        if (handlerState) {
            callbacks.dispatch = [codecState, handlerState](
                                     PayloadContext const&      context,
                                     std::span<std::byte const> body,
                                     SchemaVersion              schema
                                 ) noexcept -> Expected<> {
                try {
                    Decoder decoder{body, body.size()};

                    auto decoded = codecState->decode(decoder, schema);
                    if (!decoded) {
                        return forwardError(decoded.error());
                    }

                    if (auto consumed = decoder.requireFullyConsumed(); !consumed) {
                        return forwardError(consumed.error());
                    }

                    return (*handlerState)(context, std::move(*decoded));
                } catch (...) {
                    return makeExceptionError();
                }
            };
        }
        return callbacks;
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace detail

class PayloadRegistry {
    class Impl;
    std::unique_ptr<Impl> mImpl;

    PayloadRegistry();
    ~PayloadRegistry();

    Expected<PayloadRegistration> registerPayloadErased(
        ModuleRegistration const& module,
        PayloadDefinition         definition,
        std::type_index           type,
        detail::PayloadCallbacks  callbacks
    ) noexcept;

    Expected<ModuleRegistration> registerModuleOwned(
        ModuleDefinition                 definition,
        std::shared_ptr<mod::Mod> const& owner,
        ProtocolNamespace const&         protocolNamespace
    ) noexcept;

    Expected<> resetModule(std::shared_ptr<detail::ModuleState> const& state, bool wait) noexcept;
    Expected<> resetPayload(std::shared_ptr<detail::DescriptorState> const& state, bool wait) noexcept;

    friend detail::PayloadRegistryAccess;
    friend ModuleRegistration;
    friend PayloadRegistration;

public:
    PayloadRegistry(PayloadRegistry const&)            = delete;
    PayloadRegistry& operator=(PayloadRegistry const&) = delete;

    LLNDAPI static PayloadRegistry& getInstance();

    LLNDAPI Expected<ModuleRegistration> registerModule(
        ModuleDefinition               definition,
        std::weak_ptr<mod::Mod> const& owner = mod::NativeMod::current()
    ) noexcept;

    template <class T, class Codec>
        requires PayloadCodec<Codec, T>
    Expected<PayloadRegistration>
    registerPayload(ModuleRegistration const& module, PayloadDefinition definition, Codec codec) noexcept {
        auto callbacks = detail::makePayloadCallbacks<T>(std::move(codec), PayloadHandler<T>{});
        if (!callbacks) {
            return forwardError(callbacks.error());
        }

        return registerPayloadErased(module, std::move(definition), typeid(T), std::move(*callbacks));
    }

    template <class T, class Codec>
        requires PayloadCodec<Codec, T>
    Expected<PayloadRegistration> registerPayload(
        ModuleRegistration const& module,
        PayloadDefinition         definition,
        Codec                     codec,
        PayloadHandler<T>         handler
    ) noexcept {
        auto callbacks = detail::makePayloadCallbacks<T>(std::move(codec), std::move(handler));
        if (!callbacks) {
            return forwardError(callbacks.error());
        }

        return registerPayloadErased(module, std::move(definition), typeid(T), std::move(*callbacks));
    }

    LLNDAPI std::uint64_t revision() const noexcept;

    LLNDAPI std::shared_ptr<ModuleDescriptor const> findModule(ModuleId const& id) const noexcept;
    LLNDAPI std::shared_ptr<PayloadDescriptor const> findPayload(PayloadId const& id) const noexcept;
    LLNDAPI std::shared_ptr<PayloadDescriptor const> findPayload(std::uint64_t runtimeId) const noexcept;

    template <class T>
    [[nodiscard]] std::shared_ptr<PayloadDescriptor const> findPayload() const noexcept {
        return findPayload(typeid(T));
    }

    LLNDAPI std::vector<std::shared_ptr<ModuleDescriptor const>> modules() const;
    LLNDAPI std::vector<std::shared_ptr<PayloadDescriptor const>> payloads() const;

    LLNDAPI Expected<> drainOwner(mod::Mod const& owner) noexcept;

private:
    std::shared_ptr<PayloadDescriptor const> findPayload(std::type_index type) const noexcept;
};

} // namespace ll::protocol
