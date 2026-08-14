#pragma once

#include <array>
#include <cstdint>
#include <string_view>

#include "ll/api/protocol/Version.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::protocol::detail {

struct CoreProtocolDefinition final {
    CoreVersion  version;
    std::uint8_t controlSchema;
    std::uint8_t payloadEnvelopeSchema;
};

inline constexpr std::array<CoreProtocolDefinition, 1> CoreProtocolDefinitions{
    {
     {.version = 1, .controlSchema = 1, .payloadEnvelopeSchema = 1},
     }
};

inline constexpr VersionRange SupportedCoreProtocolVersions{
    .min = CoreProtocolDefinitions.front().version,
    .max = CoreProtocolDefinitions.back().version,
};

[[nodiscard]] constexpr CoreProtocolDefinition const* findCoreProtocolDefinition(CoreVersion version) noexcept {
    for (auto const& definition : CoreProtocolDefinitions) {
        if (definition.version == version) {
            return &definition;
        }
    }
    return nullptr;
}

// The v1 suffix versions wire-identity derivation, not the core protocol or codec schema. Changing either domain
// changes every derived runtime ID and therefore requires an explicit wire-identity migration.
inline constexpr char PayloadHashDomainBytes[] = "ll.protocol.payload.v1\0";
inline constexpr char ControlHashDomainBytes[] = "ll.protocol.control.v1\0";

inline constexpr std::string_view PayloadHashDomain{PayloadHashDomainBytes, sizeof(PayloadHashDomainBytes) - 1};
inline constexpr std::string_view ControlHashDomain{ControlHashDomainBytes, sizeof(ControlHashDomainBytes) - 1};

inline constexpr std::uint64_t HelloRuntimeId             = hash_utils::doHash(ControlHashDomain, "hello");
inline constexpr std::uint64_t HelloAckRuntimeId          = hash_utils::doHash(ControlHashDomain, "hello_ack");
inline constexpr std::uint64_t DeclarationRuntimeId       = hash_utils::doHash(ControlHashDomain, "declaration");
inline constexpr std::uint64_t NegotiationResultRuntimeId = hash_utils::doHash(ControlHashDomain, "negotiation_result");
inline constexpr std::uint64_t ReadyRuntimeId             = hash_utils::doHash(ControlHashDomain, "ready");
inline constexpr std::uint64_t ProtocolErrorRuntimeId     = hash_utils::doHash(ControlHashDomain, "protocol_error");

inline constexpr std::array<std::string_view, 1> ReservedProtocolNamespaces{"levilamina"};

enum class WireErrorCode : std::uint16_t {
    None                    = 0x0000,
    MalformedControl        = 0x0101,
    InvalidState            = 0x0102,
    UnexpectedMessage       = 0x0103,
    SequenceMismatch        = 0x0104,
    ReplayDetected          = 0x0105,
    HandshakeIdMismatch     = 0x0106,
    VersionIncompatible     = 0x0201,
    RequirementUnsatisfied  = 0x0202,
    DigestMismatch          = 0x0203,
    DeclarationMalformed    = 0x0204,
    IdentityCollision       = 0x0301,
    UnknownPayload          = 0x0302,
    WrongDirection          = 0x0303,
    InvalidSchema           = 0x0304,
    MalformedPayload        = 0x0305,
    SizeLimitExceeded       = 0x0401,
    RateLimitExceeded       = 0x0402,
    HandshakeBudgetExceeded = 0x0403,
    Timeout                 = 0x0501,
    RegistryChanged         = 0x0502,
    EndpointGone            = 0x0503,
    InternalFailure         = 0x05FF,
};

} // namespace ll::protocol::detail
