#pragma once

#include <cstdint>
#include <memory>
#include <span>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Direction.h"
#include "ll/api/protocol/Id.h"
#include "ll/api/protocol/Version.h"

#include "mc/network/NetworkIdentifier.h"

namespace ll::protocol {

enum class SessionState : std::uint8_t {
    Handshaking,
    Negotiating,
    ReadyLocal,
    ProtocolReady,
    Active,
    Closing,
    Closed,
};

struct NegotiatedFeature {
    FeatureName   name;
    std::uint16_t version{};

    bool operator==(NegotiatedFeature const&) const = default;
};

struct NegotiatedModule {
    ModuleId                       id;
    std::uint16_t                  protocolVersion{};
    std::vector<NegotiatedFeature> features;

    bool operator==(NegotiatedModule const&) const = default;
};

struct NegotiatedPayload {
    PayloadId        id;
    std::uint64_t    runtimeId{};
    PayloadDirection direction{};
    SchemaVersion    schema{};
    std::uint32_t    maxEncodedSize{};

    bool operator==(NegotiatedPayload const&) const = default;
};

struct PeerIdentityView {
    std::uint64_t     endpointInstanceId{};
    std::uint64_t     connectionGeneration{};
    std::uint8_t      subClientId{};
    std::string_view  connection;
    NetworkIdentifier networkIdentifier;
};

namespace detail {
struct SessionSnapshot;
struct SessionAccess;
} // namespace detail

class SessionView {
    std::shared_ptr<detail::SessionSnapshot const> mSnapshot;

    explicit SessionView(std::shared_ptr<detail::SessionSnapshot const> snapshot) noexcept;
    friend struct detail::SessionAccess;

public:
    SessionView() noexcept = default;

    LLNDAPI explicit operator bool() const noexcept;

    LLNDAPI SessionState     state() const noexcept;
    LLNDAPI EndpointRole     role() const noexcept;
    LLNDAPI PeerIdentityView peer() const&;

    PeerIdentityView peer() const&& = delete;

    LLNDAPI CoreVersion coreProtocol() const noexcept;
    LLNDAPI std::uint64_t registryRevision() const noexcept;

    LLNDAPI std::span<NegotiatedModule const> modules() const& noexcept;
    LLNDAPI std::span<NegotiatedPayload const> payloads() const& noexcept;

    std::span<NegotiatedModule const>  modules() const&&  = delete;
    std::span<NegotiatedPayload const> payloads() const&& = delete;

    LLNDAPI NegotiatedModule const*  findModule(ModuleId const& id) const&;
    LLNDAPI NegotiatedPayload const* findPayload(PayloadId const& id) const&;
    LLNDAPI NegotiatedPayload const* findPayload(std::uint64_t runtimeId) const&;

    NegotiatedModule const*  findModule(ModuleId const& id) const&&       = delete;
    NegotiatedPayload const* findPayload(PayloadId const& id) const&&     = delete;
    NegotiatedPayload const* findPayload(std::uint64_t runtimeId) const&& = delete;
};

} // namespace ll::protocol
