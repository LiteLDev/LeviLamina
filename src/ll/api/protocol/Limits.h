#pragma once

#include <cstddef>
#include <cstdint>

namespace ll::protocol::Limits {

inline constexpr std::size_t MaxProtocolNamespaceBytes = 64;
inline constexpr std::size_t MaxModuleNameBytes        = 64;
inline constexpr std::size_t MaxPayloadNameBytes       = 128;
inline constexpr std::size_t MaxFeatureNameBytes       = 64;
inline constexpr std::size_t MaxModuleIdBytes          = 129;
inline constexpr std::size_t MaxPayloadIdBytes         = 258;

inline constexpr std::uint32_t DefaultPayloadBody = 256 * 1024;
inline constexpr std::uint32_t MaxPayloadBody     = 8 * 1024 * 1024;

inline constexpr std::uint32_t MinecraftServerboundPacketBytes = 10 * 1024 * 1024;

inline constexpr std::uint32_t MaxControlBody             = 256 * 1024;
inline constexpr std::uint32_t MaxHandshakeMessages       = 32;
inline constexpr std::uint32_t MaxHandshakeDecodedBytes   = 4 * 1024 * 1024;
inline constexpr std::uint32_t MaxHandshakeTimeoutSeconds = 10;
inline constexpr std::uint32_t MaxDiscoveryMarkerBytes    = 512;
inline constexpr std::uint32_t MaxDiscoveryTextBytes      = 64;
inline constexpr std::uint32_t MaxDeclaredModules         = 512;
inline constexpr std::uint32_t MaxDeclaredPayloads        = 2048;
inline constexpr std::uint32_t MaxDeclaredFeatures        = 512;
inline constexpr std::uint32_t MaxSchemasPerPayload       = 8;
inline constexpr std::uint32_t MaxDeclarationChunks       = 8;
inline constexpr std::uint32_t MaxNegotiationResultChunks = 8;
inline constexpr std::uint32_t MaxResultModules           = MaxDeclaredModules * 2;
inline constexpr std::uint32_t MaxResultPayloads          = MaxDeclaredPayloads * 2;

inline constexpr std::uint32_t DefaultPacketsPerSecond = 256;
inline constexpr std::uint32_t DefaultBytesPerSecond   = 2 * 1024 * 1024;
inline constexpr std::uint32_t DefaultBurstPackets     = 512;
inline constexpr std::uint32_t DefaultBurstBytes       = 4 * 1024 * 1024;

inline constexpr std::uint32_t MaxPacketsPerSecond = 4096;
inline constexpr std::uint32_t MaxBytesPerSecond   = 32 * 1024 * 1024;
inline constexpr std::uint32_t MaxBurstPackets     = 4096;
inline constexpr std::uint32_t MaxBurstBytes       = 32 * 1024 * 1024;

inline constexpr std::size_t MaxReportedFanoutFailures = 1024;

inline constexpr std::size_t MaxErrorContextBytes = 256;

} // namespace ll::protocol::Limits
