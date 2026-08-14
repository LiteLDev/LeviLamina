#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <variant>
#include <vector>

#include "ll/api/protocol/Direction.h"
#include "ll/api/protocol/Id.h"
#include "ll/api/protocol/Version.h"
#include "ll/core/protocol/Constants.h"

namespace ll::protocol::detail {

using Nonce            = std::array<std::byte, 16>;
using TranscriptDigest = std::array<std::byte, 32>;

struct ControlHeader {
    std::uint8_t  schema{};
    std::uint64_t handshakeId{};
    std::uint32_t messageSequence{};

    auto operator<=>(ControlHeader const&) const = default;
};

struct FeatureDeclaration {
    FeatureName  name;
    VersionRange versions;
    bool         required{};

    auto operator<=>(FeatureDeclaration const&) const = default;
};

struct SelectedFeature {
    FeatureName   name;
    std::uint16_t version{};

    auto operator<=>(SelectedFeature const&) const = default;
};

struct TransportLimits {
    std::uint32_t maxControlBody{};
    std::uint32_t maxPayloadBody{};
    std::uint32_t packetsPerSecond{};
    std::uint32_t bytesPerSecond{};
    std::uint32_t burstPackets{};
    std::uint32_t burstBytes{};

    auto operator<=>(TransportLimits const&) const = default;
};

struct SemanticVersion {
    std::uint16_t major{};
    std::uint16_t minor{};
    std::uint16_t patch{};

    auto operator<=>(SemanticVersion const&) const = default;
};

struct ModuleDeclaration {
    ModuleId                        id;
    SemanticVersion                 version;
    VersionRange                    protocolVersions;
    ModuleRequirement               requirement{};
    std::vector<FeatureDeclaration> features;

    auto operator<=>(ModuleDeclaration const&) const = default;
};

struct PayloadDeclaration {
    PayloadId                  id;
    std::uint64_t              runtimeId{};
    PayloadDirection           direction{};
    PayloadRequirement         requirement{};
    std::vector<SchemaVersion> schemas;
    std::uint32_t              maxEncodedSize{};

    auto operator<=>(PayloadDeclaration const&) const = default;
};

enum class NegotiationStatus : std::uint8_t {
    Disabled,
    Enabled,
};

struct ModuleResult {
    ModuleId                     id;
    NegotiationStatus            status{};
    std::uint16_t                selectedProtocol{};
    WireErrorCode                reason{};
    std::vector<SelectedFeature> features;

    auto operator<=>(ModuleResult const&) const = default;
};

struct PayloadResult {
    PayloadId         id;
    std::uint64_t     runtimeId{};
    PayloadDirection  direction{};
    NegotiationStatus status{};
    WireErrorCode     reason{};
    SchemaVersion     selectedSchema{};
    std::uint32_t     selectedMaxEncodedSize{};

    auto operator<=>(PayloadResult const&) const = default;
};

struct Hello {
    ControlHeader                   header;
    Nonce                           serverNonce;
    VersionRange                    coreProtocols;
    TransportLimits                 limits;
    std::vector<FeatureDeclaration> features;

    auto operator<=>(Hello const&) const = default;
};

struct HelloAck {
    ControlHeader                header;
    Nonce                        echoedServerNonce;
    Nonce                        clientNonce;
    CoreVersion                  selectedCoreProtocol{};
    TransportLimits              acceptedLimits;
    std::vector<SelectedFeature> features;

    auto operator<=>(HelloAck const&) const = default;
};

struct Declaration {
    ControlHeader                   header;
    EndpointRole                    senderRole{};
    std::uint64_t                   registryRevision{};
    std::uint16_t                   chunkIndex{};
    std::uint16_t                   chunkCount{};
    std::uint32_t                   totalModuleCount{};
    std::uint32_t                   totalPayloadCount{};
    std::vector<ModuleDeclaration>  modules;
    std::vector<PayloadDeclaration> payloads;

    auto operator<=>(Declaration const&) const = default;
};

struct NegotiationResult {
    ControlHeader              header;
    CoreVersion                selectedCoreProtocol{};
    std::uint64_t              serverRegistryRevision{};
    std::uint64_t              clientRegistryRevision{};
    std::uint16_t              chunkIndex{};
    std::uint16_t              chunkCount{};
    std::uint32_t              totalModuleResultCount{};
    std::uint32_t              totalPayloadResultCount{};
    std::vector<ModuleResult>  modules;
    std::vector<PayloadResult> payloads;
    TranscriptDigest           transcriptDigest{};

    auto operator<=>(NegotiationResult const&) const = default;
};

struct Ready {
    ControlHeader    header;
    EndpointRole     senderRole{};
    TranscriptDigest transcriptDigest{};

    auto operator<=>(Ready const&) const = default;
};

struct ProtocolErrorMessage {
    ControlHeader header;
    WireErrorCode code{};
    bool          fatal{};
    std::uint32_t offendingMessageSequence{};
    std::string   diagnostic;

    auto operator<=>(ProtocolErrorMessage const&) const = default;
};

using ControlMessage = std::variant<Hello, HelloAck, Declaration, NegotiationResult, Ready, ProtocolErrorMessage>;

} // namespace ll::protocol::detail
