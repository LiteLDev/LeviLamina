#include "ll/core/protocol/ControlCodec.h"

#include <algorithm>
#include <limits>
#include <memory>
#include <type_traits>
#include <utility>

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"

namespace ll::protocol::detail {

constexpr std::size_t MinFeatureDeclarationBytes = 1 + 1 + 2 + 2 + 1; // name + versions + required
constexpr std::size_t MinSelectedFeatureBytes    = 1 + 1 + 2;         // name + selected version
constexpr std::size_t MinModuleDeclarationBytes =
    1 + 3 + 3 + 4 + 1 + 1; // ID + semantic version + protocol range + requirement + feature count
constexpr std::size_t MinPayloadDeclarationBytes =
    1 + 5 + 8 + 1 + 1 + 1 + 2 + 4; // ID + runtime ID + enums + schema count/schema + maximum size
constexpr std::size_t MinModuleResultBytes =
    1 + 3 + 1 + 2 + 2 + 1; // ID + status + selected protocol + reason + feature count
constexpr std::size_t MinPayloadResultBytes =
    1 + 5 + 8 + 1 + 1 + 2 + 2 + 4; // ID + runtime ID + enums + reason + selected schema/maximum size
constexpr std::size_t SchemaVersionBytes = sizeof(std::uint16_t);

Unexpected malformed(std::string context = {}) {
    return makeProtocolError(ProtocolErrc::DeclarationMalformed, std::move(context));
}

bool nonzero(Nonce const& nonce) noexcept {
    return std::ranges::any_of(nonce, [](std::byte value) { return value != std::byte{}; });
}

bool validLimits(TransportLimits const& value) noexcept {
    return value.maxControlBody > 0 && value.maxControlBody <= Limits::MaxControlBody && value.maxPayloadBody > 0
        && value.maxPayloadBody <= Limits::MaxPayloadBody && value.packetsPerSecond > 0
        && value.packetsPerSecond <= Limits::MaxPacketsPerSecond && value.bytesPerSecond > 0
        && value.bytesPerSecond <= Limits::MaxBytesPerSecond && value.burstPackets > 0
        && value.burstPackets <= Limits::MaxBurstPackets && value.burstBytes > 0
        && value.burstBytes <= Limits::MaxBurstBytes;
}

template <class T, class Projection>
bool strictlySorted(std::vector<T> const& values, Projection projection) noexcept {
    return std::ranges::adjacent_find(values, std::ranges::greater_equal{}, projection) == values.end();
}

bool validFeatures(std::vector<WireFeatureDeclaration> const& features) noexcept {
    return features.size() <= Limits::MaxDeclaredFeatures
        && strictlySorted(features, [](WireFeatureDeclaration const& value) { return value.name.value(); })
        && std::ranges::all_of(features, [](WireFeatureDeclaration const& value) { return value.versions.valid(); });
}

bool validSelectedFeatures(std::vector<SelectedFeature> const& features) noexcept {
    return features.size() <= Limits::MaxDeclaredFeatures
        && strictlySorted(features, [](SelectedFeature const& value) { return value.name.value(); })
        && std::ranges::all_of(features, [](SelectedFeature const& value) { return value.version != 0; });
}

bool validSchemas(std::vector<SchemaVersion> const& schemas) noexcept {
    return !schemas.empty() && schemas.size() <= Limits::MaxSchemasPerPayload
        && strictlySorted(schemas, [](SchemaVersion value) { return value; }) && schemas.front() != 0;
}

template <class ModuleEntry>
bool validCumulativeFeatureCount(std::vector<ModuleEntry> const& modules, std::size_t maxFeatures) noexcept {
    std::size_t featureCount{};
    for (auto const& module : modules) {
        if (featureCount > maxFeatures || module.features.size() > maxFeatures - featureCount) {
            return false;
        }
        featureCount += module.features.size();
    }

    return true;
}

template <class ModuleEntry, class PayloadEntry>
bool entriesFitDeclaredTotals(
    std::vector<ModuleEntry> const&  modules,
    std::size_t                      totalModules,
    std::vector<PayloadEntry> const& payloads,
    std::size_t                      totalPayloads
) noexcept {
    return modules.size() <= totalModules && payloads.size() <= totalPayloads;
}

template <class ModuleEntry, class PayloadEntry>
bool payloadModulesExist(std::vector<ModuleEntry> const& modules, std::vector<PayloadEntry> const& payloads) noexcept {
    return std::ranges::all_of(payloads, [&](auto const& payload) {
        return std::ranges::binary_search(modules, payload.id.module(), {}, [](auto const& module) {
            return module.id.value();
        });
    });
}

Expected<> validateChunkMetadata(
    ControlHeader const& header,
    std::uint16_t        chunkIndex,
    std::uint16_t        chunkCount,
    std::uint16_t        maxChunks
) {
    if (header.schema == 0 || header.handshakeId == 0 || header.messageSequence == 0 || chunkCount == 0
        || chunkCount > maxChunks || chunkIndex >= chunkCount
        || static_cast<std::uint32_t>(chunkCount - chunkIndex - 1)
               > std::numeric_limits<std::uint32_t>::max() - header.messageSequence) {
        return malformed("chunk metadata");
    }
    return {};
}

bool knownControlRuntimeId(std::uint64_t runtimeId) noexcept {
    return runtimeId == HelloRuntimeId || runtimeId == HelloAckRuntimeId || runtimeId == DeclarationRuntimeId
        || runtimeId == NegotiationResultRuntimeId || runtimeId == ReadyRuntimeId
        || runtimeId == ProtocolErrorRuntimeId;
}

bool validWireError(std::uint16_t value) noexcept {
    switch (static_cast<WireErrorCode>(value)) {
    case WireErrorCode::None:
    case WireErrorCode::MalformedControl:
    case WireErrorCode::InvalidState:
    case WireErrorCode::UnexpectedMessage:
    case WireErrorCode::SequenceMismatch:
    case WireErrorCode::ReplayDetected:
    case WireErrorCode::HandshakeIdMismatch:
    case WireErrorCode::VersionIncompatible:
    case WireErrorCode::RequirementUnsatisfied:
    case WireErrorCode::DigestMismatch:
    case WireErrorCode::DeclarationMalformed:
    case WireErrorCode::IdentityCollision:
    case WireErrorCode::UnknownPayload:
    case WireErrorCode::WrongDirection:
    case WireErrorCode::InvalidSchema:
    case WireErrorCode::MalformedPayload:
    case WireErrorCode::SizeLimitExceeded:
    case WireErrorCode::RateLimitExceeded:
    case WireErrorCode::HandshakeBudgetExceeded:
    case WireErrorCode::Timeout:
    case WireErrorCode::RegistryChanged:
    case WireErrorCode::EndpointGone:
    case WireErrorCode::InternalFailure:
        return true;
    }
    return false;
}

Expected<> writeHeader(Encoder& out, ControlHeader const& value, std::uint8_t expectedSchema) {
    if (value.schema != expectedSchema || value.handshakeId == 0 || value.messageSequence == 0) {
        return makeProtocolError(ProtocolErrc::InvalidControlSchema);
    }
    if (auto result = out.writeU8(value.schema); !result) return result;
    if (auto result = out.writeU64(value.handshakeId); !result) return result;
    return out.writeU32(value.messageSequence);
}

Expected<> writeTransportLimits(Encoder& out, TransportLimits const& value) {
    if (!validLimits(value)) return makeCodecError(CodecErrc::InvalidValue, "transport limits");
    if (auto result = out.writeU32(value.maxControlBody); !result) return result;
    if (auto result = out.writeU32(value.maxPayloadBody); !result) return result;
    if (auto result = out.writeU32(value.packetsPerSecond); !result) return result;
    if (auto result = out.writeU32(value.bytesPerSecond); !result) return result;
    if (auto result = out.writeU32(value.burstPackets); !result) return result;
    return out.writeU32(value.burstBytes);
}

Expected<> writeFeatureDeclaration(Encoder& out, WireFeatureDeclaration const& value) {
    if (!value.versions.valid()) return makeCodecError(CodecErrc::InvalidValue, "feature range");
    if (auto result = out.writeString(value.name.value(), Limits::MaxFeatureNameBytes); !result) return result;
    if (auto result = out.writeU16(value.versions.min); !result) return result;
    if (auto result = out.writeU16(value.versions.max); !result) return result;
    return out.writeBool(value.required);
}

Expected<> writeSelectedFeature(Encoder& out, SelectedFeature const& value) {
    if (value.version == 0) return makeCodecError(CodecErrc::InvalidValue, "selected feature");
    if (auto result = out.writeString(value.name.value(), Limits::MaxFeatureNameBytes); !result) return result;
    return out.writeU16(value.version);
}

template <class T, class Writer>
Expected<> writeList(Encoder& out, std::vector<T> const& values, std::size_t maxCount, Writer writer) {
    if (values.size() > maxCount || values.size() > std::numeric_limits<std::uint32_t>::max()) {
        return makeCodecError(CodecErrc::SizeLimitExceeded, "list count");
    }
    if (auto result = out.writeVarUint(static_cast<std::uint32_t>(values.size())); !result) return result;
    for (auto const& value : values) {
        if (auto result = writer(out, value); !result) return result;
    }
    return {};
}

Expected<> writeModule(Encoder& out, ModuleDeclaration const& value) {
    if (!value.protocolVersions.valid() || !validFeatures(value.features)
        || value.requirement > ModuleRequirement::RequiredOnBoth) {
        return makeCodecError(CodecErrc::InvalidValue, "module declaration");
    }
    if (auto result = out.writeString(value.id.value(), Limits::MaxModuleIdBytes); !result) return result;
    if (auto result = out.writeVarUint(value.version.major); !result) return result;
    if (auto result = out.writeVarUint(value.version.minor); !result) return result;
    if (auto result = out.writeVarUint(value.version.patch); !result) return result;
    if (auto result = out.writeU16(value.protocolVersions.min); !result) return result;
    if (auto result = out.writeU16(value.protocolVersions.max); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.requirement)); !result) return result;
    return writeList(out, value.features, Limits::MaxDeclaredFeatures, writeFeatureDeclaration);
}

Expected<> writePayload(Encoder& out, PayloadDeclaration const& value) {
    if (value.runtimeId == 0 || value.maxEncodedSize == 0 || value.maxEncodedSize > Limits::MaxPayloadBody
        || !validSchemas(value.schemas) || value.direction > PayloadDirection::ServerToClient
        || value.requirement > PayloadRequirement::Required) {
        return makeCodecError(CodecErrc::InvalidValue, "payload declaration");
    }
    if (auto result = out.writeString(value.id.value(), Limits::MaxPayloadIdBytes); !result) return result;
    if (auto result = out.writeU64(value.runtimeId); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.direction)); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.requirement)); !result) return result;
    if (auto result = writeList(
            out,
            value.schemas,
            Limits::MaxSchemasPerPayload,
            [](Encoder& encoder, SchemaVersion schema) { return encoder.writeU16(schema); }
        );
        !result)
        return result;
    return out.writeU32(value.maxEncodedSize);
}

Expected<> writeModuleResult(Encoder& out, ModuleResult const& value) {
    if (value.status > NegotiationStatus::Enabled) {
        return makeCodecError(CodecErrc::InvalidValue, "module result status");
    }
    bool const enabled = value.status == NegotiationStatus::Enabled;
    if ((enabled && (value.selectedProtocol == 0 || value.reason != WireErrorCode::None))
        || (!enabled && (value.selectedProtocol != 0 || value.reason == WireErrorCode::None))
        || (!enabled && !value.features.empty()) || !validSelectedFeatures(value.features)
        || !validWireError(static_cast<std::uint16_t>(value.reason))) {
        return makeCodecError(CodecErrc::InvalidValue, "module result");
    }
    if (auto result = out.writeString(value.id.value(), Limits::MaxModuleIdBytes); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.status)); !result) return result;
    if (auto result = out.writeU16(value.selectedProtocol); !result) return result;
    if (auto result = out.writeU16(static_cast<std::uint16_t>(value.reason)); !result) return result;
    return writeList(out, value.features, Limits::MaxDeclaredFeatures, writeSelectedFeature);
}

Expected<> writePayloadResult(Encoder& out, PayloadResult const& value) {
    if (value.status > NegotiationStatus::Enabled || value.direction > PayloadDirection::ServerToClient) {
        return makeCodecError(CodecErrc::InvalidValue, "payload result enum");
    }
    bool const enabled = value.status == NegotiationStatus::Enabled;
    if (value.runtimeId == 0
        || (enabled
            && (value.selectedSchema == 0 || value.selectedMaxEncodedSize == 0 || value.reason != WireErrorCode::None))
        || (!enabled
            && (value.selectedSchema != 0 || value.selectedMaxEncodedSize != 0 || value.reason == WireErrorCode::None))
        || value.selectedMaxEncodedSize > Limits::MaxPayloadBody
        || !validWireError(static_cast<std::uint16_t>(value.reason))) {
        return makeCodecError(CodecErrc::InvalidValue, "payload result");
    }
    if (auto result = out.writeString(value.id.value(), Limits::MaxPayloadIdBytes); !result) return result;
    if (auto result = out.writeU64(value.runtimeId); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.direction)); !result) return result;
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.status)); !result) return result;
    if (auto result = out.writeU16(static_cast<std::uint16_t>(value.reason)); !result) return result;
    if (auto result = out.writeU16(value.selectedSchema); !result) return result;
    return out.writeU32(value.selectedMaxEncodedSize);
}

Expected<ControlHeader> readHeader(Decoder& in, std::uint8_t expectedSchema) {
    auto schema = in.readU8();
    if (!schema) return forwardError(schema.error());
    auto handshake = in.readU64();
    if (!handshake) return forwardError(handshake.error());
    auto sequence = in.readU32();
    if (!sequence) return forwardError(sequence.error());
    if (*schema != expectedSchema || *handshake == 0 || *sequence == 0) {
        return makeProtocolError(ProtocolErrc::InvalidControlSchema);
    }
    return ControlHeader{*schema, *handshake, *sequence};
}

Expected<TransportLimits> readTransportLimits(Decoder& in) {
    auto control = in.readU32();
    if (!control) return forwardError(control.error());
    auto payload = in.readU32();
    if (!payload) return forwardError(payload.error());
    auto pps = in.readU32();
    if (!pps) return forwardError(pps.error());
    auto bps = in.readU32();
    if (!bps) return forwardError(bps.error());
    auto burstPackets = in.readU32();
    if (!burstPackets) return forwardError(burstPackets.error());
    auto burstBytes = in.readU32();
    if (!burstBytes) return forwardError(burstBytes.error());
    TransportLimits result{*control, *payload, *pps, *bps, *burstPackets, *burstBytes};
    if (!validLimits(result)) return makeCodecError(CodecErrc::InvalidValue, "transport limits");
    return result;
}

Expected<FeatureName> readFeatureName(Decoder& in) {
    auto raw = in.readString(Limits::MaxFeatureNameBytes);
    if (!raw) return forwardError(raw.error());
    auto parsed = FeatureName::parse(*raw);
    if (!parsed) return makeCodecError(CodecErrc::InvalidValue, "feature name");
    return parsed;
}

Expected<WireFeatureDeclaration> readFeatureDeclaration(Decoder& in) {
    auto name = readFeatureName(in);
    if (!name) return forwardError(name.error());
    auto min = in.readU16();
    if (!min) return forwardError(min.error());
    auto max = in.readU16();
    if (!max) return forwardError(max.error());
    auto requiredValue = in.readBool();
    if (!requiredValue) return forwardError(requiredValue.error());
    VersionRange versions{*min, *max};
    if (!versions.valid()) return makeCodecError(CodecErrc::InvalidValue, "feature range");
    return WireFeatureDeclaration{std::move(*name), versions, *requiredValue};
}

Expected<SelectedFeature> readSelectedFeature(Decoder& in) {
    auto name = readFeatureName(in);
    if (!name) return forwardError(name.error());
    auto version = in.readU16();
    if (!version) return forwardError(version.error());
    if (*version == 0) return makeCodecError(CodecErrc::InvalidValue, "selected feature");
    return SelectedFeature{std::move(*name), *version};
}

template <class T, class Reader>
Expected<std::vector<T>> readList(Decoder& in, std::size_t maxCount, std::size_t minEncodedEntrySize, Reader reader) {
    auto count = in.readVarUint();
    if (!count) return forwardError(count.error());
    if (*count > maxCount) return makeCodecError(CodecErrc::SizeLimitExceeded, "list count");
    if (minEncodedEntrySize == 0 || *count > in.remaining() / minEncodedEntrySize) {
        return makeCodecError(CodecErrc::Truncated, "list entries");
    }

    std::vector<T> result;
    result.reserve(*count);
    for (std::uint32_t index = 0; index < *count; ++index) {
        auto value = reader(in);
        if (!value) return forwardError(value.error());

        result.emplace_back(std::move(*value));
    }

    return result;
}

template <class ModuleEntry, class Reader>
Expected<std::vector<ModuleEntry>> readModuleList(
    Decoder&    in,
    std::size_t maxModuleCount,
    std::size_t minEncodedEntrySize,
    std::size_t maxFeatureCount,
    Reader      reader
) {
    std::size_t featureCount{};
    return readList<ModuleEntry>(
        in,
        maxModuleCount,
        minEncodedEntrySize,
        [&](Decoder& decoder) -> Expected<ModuleEntry> {
            auto module = reader(decoder);
            if (!module) return forwardError(module.error());

            if (featureCount > maxFeatureCount || module->features.size() > maxFeatureCount - featureCount) {
                return makeCodecError(CodecErrc::SizeLimitExceeded, "module feature count");
            }
            featureCount += module->features.size();
            return std::move(*module);
        }
    );
}

Expected<ModuleDeclaration> readModule(Decoder& in) {
    auto rawId = in.readString(Limits::MaxModuleIdBytes);
    if (!rawId) return forwardError(rawId.error());
    auto id = ModuleId::parse(*rawId);
    if (!id) return makeCodecError(CodecErrc::InvalidValue, "module ID");
    auto major = in.readVarUint();
    if (!major) return forwardError(major.error());
    auto minor = in.readVarUint();
    if (!minor) return forwardError(minor.error());
    auto patch = in.readVarUint();
    if (!patch) return forwardError(patch.error());
    if (*major > UINT16_MAX || *minor > UINT16_MAX || *patch > UINT16_MAX)
        return makeCodecError(CodecErrc::InvalidValue);
    auto protocolMin = in.readU16();
    if (!protocolMin) return forwardError(protocolMin.error());
    auto protocolMax = in.readU16();
    if (!protocolMax) return forwardError(protocolMax.error());
    VersionRange range{*protocolMin, *protocolMax};
    if (!range.valid()) return makeCodecError(CodecErrc::InvalidValue);
    auto requirement = in.readU8();
    if (!requirement) return forwardError(requirement.error());
    if (*requirement > static_cast<std::uint8_t>(ModuleRequirement::RequiredOnBoth))
        return makeCodecError(CodecErrc::InvalidValue);
    auto features = readList<WireFeatureDeclaration>(
        in,
        Limits::MaxDeclaredFeatures,
        MinFeatureDeclarationBytes,
        readFeatureDeclaration
    );
    if (!features) return forwardError(features.error());
    if (!strictlySorted(*features, [](WireFeatureDeclaration const& value) { return value.name.value(); })) {
        return makeCodecError(CodecErrc::InvalidValue, "feature ordering");
    }
    return ModuleDeclaration{
        std::move(*id),
        {static_cast<std::uint16_t>(*major), static_cast<std::uint16_t>(*minor), static_cast<std::uint16_t>(*patch)},
        range,
        static_cast<ModuleRequirement>(*requirement),
        std::move(*features),
    };
}

Expected<PayloadDeclaration> readPayload(Decoder& in) {
    auto rawId = in.readString(Limits::MaxPayloadIdBytes);
    if (!rawId) return forwardError(rawId.error());
    auto id = PayloadId::parse(*rawId);
    if (!id) return makeCodecError(CodecErrc::InvalidValue, "payload ID");
    auto runtimeId = in.readU64();
    if (!runtimeId) return forwardError(runtimeId.error());
    auto direction = in.readU8();
    if (!direction) return forwardError(direction.error());
    auto requirement = in.readU8();
    if (!requirement) return forwardError(requirement.error());
    if (*runtimeId == 0 || *direction > 1 || *requirement > 1) return makeCodecError(CodecErrc::InvalidValue);
    auto schemas = readList<SchemaVersion>(in, Limits::MaxSchemasPerPayload, SchemaVersionBytes, [](Decoder& decoder) {
        return decoder.readU16();
    });
    if (!schemas) return forwardError(schemas.error());
    auto maxSize = in.readU32();
    if (!maxSize) return forwardError(maxSize.error());
    if (!validSchemas(*schemas) || *maxSize == 0 || *maxSize > Limits::MaxPayloadBody)
        return makeCodecError(CodecErrc::InvalidValue);
    return PayloadDeclaration{
        std::move(*id),
        *runtimeId,
        static_cast<PayloadDirection>(*direction),
        static_cast<PayloadRequirement>(*requirement),
        std::move(*schemas),
        *maxSize
    };
}

Expected<WireErrorCode> readWireError(Decoder& in) {
    auto raw = in.readU16();
    if (!raw) return forwardError(raw.error());
    if (!validWireError(*raw)) return makeCodecError(CodecErrc::InvalidValue, "wire error code");
    return static_cast<WireErrorCode>(*raw);
}

Expected<ModuleResult> readModuleResult(Decoder& in) {
    auto rawId = in.readString(Limits::MaxModuleIdBytes);
    if (!rawId) return forwardError(rawId.error());
    auto id = ModuleId::parse(*rawId);
    if (!id) return makeCodecError(CodecErrc::InvalidValue, "module result ID");
    auto status = in.readU8();
    if (!status) return forwardError(status.error());
    auto protocol = in.readU16();
    if (!protocol) return forwardError(protocol.error());
    auto reason = readWireError(in);
    if (!reason) return forwardError(reason.error());
    auto features =
        readList<SelectedFeature>(in, Limits::MaxDeclaredFeatures, MinSelectedFeatureBytes, readSelectedFeature);
    if (!features) return forwardError(features.error());
    if (*status > 1 || (*status == 1) != (*protocol != 0) || (*status == 1) != (*reason == WireErrorCode::None)
        || (*status == 0 && !features->empty())
        || !strictlySorted(*features, [](SelectedFeature const& value) { return value.name.value(); })) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    return ModuleResult{
        std::move(*id),
        static_cast<NegotiationStatus>(*status),
        *protocol,
        *reason,
        std::move(*features)
    };
}

Expected<PayloadResult> readPayloadResult(Decoder& in) {
    auto rawId = in.readString(Limits::MaxPayloadIdBytes);
    if (!rawId) return forwardError(rawId.error());
    auto id = PayloadId::parse(*rawId);
    if (!id) return makeCodecError(CodecErrc::InvalidValue, "payload result ID");
    auto runtimeId = in.readU64();
    if (!runtimeId) return forwardError(runtimeId.error());
    auto direction = in.readU8();
    if (!direction) return forwardError(direction.error());
    auto status = in.readU8();
    if (!status) return forwardError(status.error());
    auto reason = readWireError(in);
    if (!reason) return forwardError(reason.error());
    auto schema = in.readU16();
    if (!schema) return forwardError(schema.error());
    auto maxSize = in.readU32();
    if (!maxSize) return forwardError(maxSize.error());
    if (*runtimeId == 0 || *direction > 1 || *status > 1 || ((*status == 1) != (*schema != 0 && *maxSize != 0))
        || ((*status == 1) != (*reason == WireErrorCode::None)) || *maxSize > Limits::MaxPayloadBody)
        return makeCodecError(CodecErrc::InvalidValue);
    return PayloadResult{
        std::move(*id),
        *runtimeId,
        static_cast<PayloadDirection>(*direction),
        static_cast<NegotiationStatus>(*status),
        *reason,
        *schema,
        *maxSize
    };
}

Expected<Nonce> readNonce(Decoder& in) {
    auto bytes = in.readBytes(16);
    if (!bytes) return forwardError(bytes.error());

    Nonce result{};
    std::ranges::copy(*bytes, result.begin());
    if (!nonzero(result)) return makeCodecError(CodecErrc::InvalidValue, "zero nonce");

    return result;
}

Expected<TranscriptDigest> readDigest(Decoder& in) {
    auto bytes = in.readBytes(32);
    if (!bytes) return forwardError(bytes.error());

    TranscriptDigest result{};
    std::ranges::copy(*bytes, result.begin());
    return result;
}

std::uint64_t controlRuntimeId(ControlMessage const& message) noexcept {
    return std::visit(
        [](auto const& value) -> std::uint64_t {
            using T = std::remove_cvref_t<decltype(value)>;
            if constexpr (std::same_as<T, Hello>) return HelloRuntimeId;
            else if constexpr (std::same_as<T, HelloAck>) return HelloAckRuntimeId;
            else if constexpr (std::same_as<T, Declaration>) return DeclarationRuntimeId;
            else if constexpr (std::same_as<T, NegotiationResult>) return NegotiationResultRuntimeId;
            else if constexpr (std::same_as<T, Ready>) return ReadyRuntimeId;
            else return ProtocolErrorRuntimeId;
        },
        message
    );
}

Expected<> writeControlBody(Encoder& out, Hello const& value) {
    if (!nonzero(value.serverNonce) || !value.coreProtocols.valid() || !validFeatures(value.features)) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    if (auto result = out.writeBytes(value.serverNonce); !result) return result;
    if (auto result = out.writeU16(value.coreProtocols.min); !result) return result;
    if (auto result = out.writeU16(value.coreProtocols.max); !result) return result;
    if (auto result = writeTransportLimits(out, value.limits); !result) return result;
    return writeList(out, value.features, Limits::MaxDeclaredFeatures, writeFeatureDeclaration);
}

Expected<> writeControlBody(Encoder& out, HelloAck const& value) {
    if (!nonzero(value.echoedServerNonce) || !nonzero(value.clientNonce) || value.selectedCoreProtocol == 0
        || !validSelectedFeatures(value.features)) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    if (auto result = out.writeBytes(value.echoedServerNonce); !result) return result;
    if (auto result = out.writeBytes(value.clientNonce); !result) return result;
    if (auto result = out.writeU16(value.selectedCoreProtocol); !result) return result;
    if (auto result = writeTransportLimits(out, value.acceptedLimits); !result) return result;
    return writeList(out, value.features, Limits::MaxDeclaredFeatures, writeSelectedFeature);
}

Expected<> writeControlBody(Encoder& out, Declaration const& value) {
    if (value.senderRole != EndpointRole::Client && value.senderRole != EndpointRole::Server) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    if (value.totalModuleCount > Limits::MaxDeclaredModules || value.totalPayloadCount > Limits::MaxDeclaredPayloads
        || !entriesFitDeclaredTotals(value.modules, value.totalModuleCount, value.payloads, value.totalPayloadCount)
        || !validCumulativeFeatureCount(value.modules, Limits::MaxDeclaredFeatures)
        || !strictlySorted(value.modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(value.payloads, [](auto const& entry) { return entry.id.value(); })) {
        return malformed();
    }
    if (auto result =
            validateChunkMetadata(value.header, value.chunkIndex, value.chunkCount, Limits::MaxDeclarationChunks);
        !result) {
        return result;
    }
    if (value.chunkCount != 1 && value.modules.empty() && value.payloads.empty()) return malformed("empty chunk");
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.senderRole)); !result) return result;
    if (auto result = out.writeU64(value.registryRevision); !result) return result;
    if (auto result = out.writeU16(value.chunkIndex); !result) return result;
    if (auto result = out.writeU16(value.chunkCount); !result) return result;
    if (auto result = out.writeU32(value.totalModuleCount); !result) return result;
    if (auto result = out.writeU32(value.totalPayloadCount); !result) return result;
    if (auto result = writeList(out, value.modules, Limits::MaxDeclaredModules, writeModule); !result) return result;
    return writeList(out, value.payloads, Limits::MaxDeclaredPayloads, writePayload);
}

Expected<> writeControlBody(Encoder& out, NegotiationResult const& value, bool includeDigest) {
    if (value.selectedCoreProtocol == 0 || value.totalModuleResultCount > Limits::MaxResultModules
        || value.totalPayloadResultCount > Limits::MaxResultPayloads
        || !entriesFitDeclaredTotals(
            value.modules,
            value.totalModuleResultCount,
            value.payloads,
            value.totalPayloadResultCount
        )
        || !validCumulativeFeatureCount(value.modules, static_cast<std::size_t>(Limits::MaxDeclaredFeatures) * 2)
        || !strictlySorted(value.modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(value.payloads, [](auto const& entry) { return entry.id.value(); })) {
        return malformed();
    }
    if (auto result =
            validateChunkMetadata(value.header, value.chunkIndex, value.chunkCount, Limits::MaxNegotiationResultChunks);
        !result) {
        return result;
    }
    if (value.chunkCount != 1 && value.modules.empty() && value.payloads.empty()) return malformed("empty chunk");
    if (auto result = out.writeU16(value.selectedCoreProtocol); !result) return result;
    if (auto result = out.writeU64(value.serverRegistryRevision); !result) return result;
    if (auto result = out.writeU64(value.clientRegistryRevision); !result) return result;
    if (auto result = out.writeU16(value.chunkIndex); !result) return result;
    if (auto result = out.writeU16(value.chunkCount); !result) return result;
    if (auto result = out.writeU32(value.totalModuleResultCount); !result) return result;
    if (auto result = out.writeU32(value.totalPayloadResultCount); !result) return result;
    if (auto result = writeList(out, value.modules, Limits::MaxResultModules, writeModuleResult); !result) {
        return result;
    }
    if (auto result = writeList(out, value.payloads, Limits::MaxResultPayloads, writePayloadResult); !result) {
        return result;
    }
    return includeDigest ? out.writeBytes(value.transcriptDigest) : Expected<>{};
}

Expected<> writeControlBody(Encoder& out, Ready const& value) {
    if (value.senderRole != EndpointRole::Client && value.senderRole != EndpointRole::Server) {
        return makeCodecError(CodecErrc::InvalidValue, "ready sender role");
    }
    if (auto result = out.writeU8(static_cast<std::uint8_t>(value.senderRole)); !result) return result;
    return out.writeBytes(value.transcriptDigest);
}

Expected<> writeControlBody(Encoder& out, ProtocolErrorMessage const& value) {
    if (value.code == WireErrorCode::None || !validWireError(static_cast<std::uint16_t>(value.code))) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    if (auto result = out.writeU16(static_cast<std::uint16_t>(value.code)); !result) return result;
    if (auto result = out.writeBool(value.fatal); !result) return result;
    if (auto result = out.writeU32(value.offendingMessageSequence); !result) return result;
    return out.writeString(value.diagnostic, Limits::MaxErrorContextBytes);
}

Expected<std::string> encodeControl(
    ControlMessage const& message,
    CoreVersion           coreProtocol,
    bool                  includeNegotiationDigest,
    std::size_t           maxBody
) {
    auto const* definition = findCoreProtocolDefinition(coreProtocol);
    if (!definition) return makeProtocolError(ProtocolErrc::VersionIncompatible);

    Encoder out{std::min<std::size_t>(maxBody, Limits::MaxControlBody)};
    auto    result = std::visit(
        [&](auto const& value) -> Expected<> {
            using T = std::remove_cvref_t<decltype(value)>;

            if (auto header = writeHeader(out, value.header, definition->controlSchema); !header) return header;
            if constexpr (std::same_as<T, NegotiationResult>) {
                return writeControlBody(out, value, includeNegotiationDigest);
            } else {
                return writeControlBody(out, value);
            }
        },
        message
    );

    if (!result) return forwardError(result.error());
    return out.takeBuffer();
}

Expected<ControlMessage> readHelloBody(Decoder& in, ControlHeader const& header) {
    auto nonce = readNonce(in);
    if (!nonce) return forwardError(nonce.error());
    auto min = in.readU16();
    if (!min) return forwardError(min.error());
    auto max = in.readU16();
    if (!max) return forwardError(max.error());
    VersionRange range{*min, *max};
    if (!range.valid()) return makeCodecError(CodecErrc::InvalidValue);
    auto limits = readTransportLimits(in);
    if (!limits) return forwardError(limits.error());
    auto features = readList<WireFeatureDeclaration>(
        in,
        Limits::MaxDeclaredFeatures,
        MinFeatureDeclarationBytes,
        readFeatureDeclaration
    );
    if (!features) return forwardError(features.error());
    if (!strictlySorted(*features, [](WireFeatureDeclaration const& value) { return value.name.value(); })) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    return ControlMessage{
        Hello{header, *nonce, range, *limits, std::move(*features)}
    };
}

Expected<ControlMessage> readHelloAckBody(Decoder& in, ControlHeader const& header) {
    auto echoed = readNonce(in);
    if (!echoed) return forwardError(echoed.error());
    auto client = readNonce(in);
    if (!client) return forwardError(client.error());
    auto selected = in.readU16();
    if (!selected) return forwardError(selected.error());
    if (*selected == 0) return makeCodecError(CodecErrc::InvalidValue);
    auto limits = readTransportLimits(in);
    if (!limits) return forwardError(limits.error());
    auto features =
        readList<SelectedFeature>(in, Limits::MaxDeclaredFeatures, MinSelectedFeatureBytes, readSelectedFeature);
    if (!features) return forwardError(features.error());
    if (!strictlySorted(*features, [](SelectedFeature const& value) { return value.name.value(); })) {
        return makeCodecError(CodecErrc::InvalidValue);
    }
    return ControlMessage{
        HelloAck{header, *echoed, *client, *selected, *limits, std::move(*features)}
    };
}

Expected<ControlMessage> readDeclarationBody(Decoder& in, ControlHeader const& header) {
    auto role = in.readU8();
    if (!role) return forwardError(role.error());
    if (*role > 1) return makeCodecError(CodecErrc::InvalidValue);
    auto revision = in.readU64();
    if (!revision) return forwardError(revision.error());
    auto index = in.readU16();
    if (!index) return forwardError(index.error());
    auto count = in.readU16();
    if (!count) return forwardError(count.error());
    auto totalModules = in.readU32();
    if (!totalModules) return forwardError(totalModules.error());
    auto totalPayloads = in.readU32();
    if (!totalPayloads) return forwardError(totalPayloads.error());
    if (*totalModules > Limits::MaxDeclaredModules || *totalPayloads > Limits::MaxDeclaredPayloads) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }
    if (auto result = validateChunkMetadata(header, *index, *count, Limits::MaxDeclarationChunks); !result) {
        return forwardError(result.error());
    }
    auto modules = readModuleList<ModuleDeclaration>(
        in,
        *totalModules,
        MinModuleDeclarationBytes,
        Limits::MaxDeclaredFeatures,
        readModule
    );
    if (!modules) return forwardError(modules.error());
    auto payloads = readList<PayloadDeclaration>(in, *totalPayloads, MinPayloadDeclarationBytes, readPayload);
    if (!payloads) return forwardError(payloads.error());
    if (!strictlySorted(*modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(*payloads, [](auto const& entry) { return entry.id.value(); })) {
        return malformed();
    }
    if (*count != 1 && modules->empty() && payloads->empty()) return malformed("empty chunk");
    return ControlMessage{
        Declaration{
                    header, static_cast<EndpointRole>(*role),
                    *revision,
                    *index,
                    *count,
                    *totalModules,
                    *totalPayloads,
                    std::move(*modules),
                    std::move(*payloads)
        }
    };
}

Expected<ControlMessage> readNegotiationResultBody(Decoder& in, ControlHeader const& header) {
    auto selected = in.readU16();
    if (!selected) return forwardError(selected.error());
    if (*selected == 0) return makeCodecError(CodecErrc::InvalidValue);
    auto serverRevision = in.readU64();
    if (!serverRevision) return forwardError(serverRevision.error());
    auto clientRevision = in.readU64();
    if (!clientRevision) return forwardError(clientRevision.error());
    auto index = in.readU16();
    if (!index) return forwardError(index.error());
    auto count = in.readU16();
    if (!count) return forwardError(count.error());
    auto totalModules = in.readU32();
    if (!totalModules) return forwardError(totalModules.error());
    auto totalPayloads = in.readU32();
    if (!totalPayloads) return forwardError(totalPayloads.error());
    if (*totalModules > Limits::MaxResultModules || *totalPayloads > Limits::MaxResultPayloads) {
        return makeCodecError(CodecErrc::SizeLimitExceeded);
    }
    if (auto result = validateChunkMetadata(header, *index, *count, Limits::MaxNegotiationResultChunks); !result) {
        return forwardError(result.error());
    }
    auto modules = readModuleList<ModuleResult>(
        in,
        *totalModules,
        MinModuleResultBytes,
        static_cast<std::size_t>(Limits::MaxDeclaredFeatures) * 2,
        readModuleResult
    );
    if (!modules) return forwardError(modules.error());
    auto payloads = readList<PayloadResult>(in, *totalPayloads, MinPayloadResultBytes, readPayloadResult);
    if (!payloads) return forwardError(payloads.error());
    auto digest = readDigest(in);
    if (!digest) return forwardError(digest.error());
    if (!strictlySorted(*modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(*payloads, [](auto const& entry) { return entry.id.value(); })) {
        return malformed();
    }
    if (*count != 1 && modules->empty() && payloads->empty()) return malformed("empty chunk");
    return ControlMessage{
        NegotiationResult{
                          header, *selected,
                          *serverRevision,
                          *clientRevision,
                          *index,
                          *count,
                          *totalModules,
                          *totalPayloads,
                          std::move(*modules),
                          std::move(*payloads),
                          *digest
        }
    };
}

Expected<ControlMessage> readReadyBody(Decoder& in, ControlHeader const& header) {
    auto role = in.readU8();
    if (!role) return forwardError(role.error());
    if (*role > 1) return makeCodecError(CodecErrc::InvalidValue);
    auto digest = readDigest(in);
    if (!digest) return forwardError(digest.error());
    return ControlMessage{
        Ready{header, static_cast<EndpointRole>(*role), *digest}
    };
}

Expected<ControlMessage> readProtocolErrorBody(Decoder& in, ControlHeader const& header) {
    auto code = readWireError(in);
    if (!code) return forwardError(code.error());
    auto fatal = in.readBool();
    if (!fatal) return forwardError(fatal.error());
    if (*code == WireErrorCode::None) return makeCodecError(CodecErrc::InvalidValue, "protocol error code");
    auto sequence = in.readU32();
    if (!sequence) return forwardError(sequence.error());
    auto diagnostic = in.readString(Limits::MaxErrorContextBytes);
    if (!diagnostic) return forwardError(diagnostic.error());
    return ControlMessage{
        ProtocolErrorMessage{header, *code, *fatal, *sequence, std::move(*diagnostic)}
    };
}

Expected<ControlMessage> readControlBody(std::uint64_t runtimeId, Decoder& in, ControlHeader const& header) {
    if (runtimeId == HelloRuntimeId) return readHelloBody(in, header);
    if (runtimeId == HelloAckRuntimeId) return readHelloAckBody(in, header);
    if (runtimeId == DeclarationRuntimeId) return readDeclarationBody(in, header);
    if (runtimeId == NegotiationResultRuntimeId) return readNegotiationResultBody(in, header);
    if (runtimeId == ReadyRuntimeId) return readReadyBody(in, header);
    if (runtimeId == ProtocolErrorRuntimeId) return readProtocolErrorBody(in, header);
    return makeProtocolError(ProtocolErrc::UnexpectedMessage);
}

Expected<ControlMessage>
decodeControl(std::uint64_t runtimeId, std::span<std::byte const> body, CoreVersion coreProtocol, std::size_t maxBody) {
    auto const* definition = findCoreProtocolDefinition(coreProtocol);
    if (!definition) return makeProtocolError(ProtocolErrc::VersionIncompatible);
    if (!knownControlRuntimeId(runtimeId)) return makeProtocolError(ProtocolErrc::UnexpectedMessage);

    if (body.size() > maxBody || body.size() > Limits::MaxControlBody)
        return makeCodecError(CodecErrc::SizeLimitExceeded);

    Decoder in{body, maxBody};
    auto    header = readHeader(in, definition->controlSchema);
    if (!header) return forwardError(header.error());

    auto result = readControlBody(runtimeId, in, *header);
    if (!result) return forwardError(result.error());

    if (auto consumed = in.requireFullyConsumed(); !consumed) return forwardError(consumed.error());
    return result;
}

template <class Chunk, class Entry>
Expected<std::size_t> appendLongestFittingPrefix(
    Chunk&                    chunk,
    std::vector<Entry>&       destination,
    std::vector<Entry> const& source,
    std::size_t               nextEntry,
    CoreVersion               protocol,
    std::size_t               maxBody
) {
    destination.clear();
    if (nextEntry > source.size()) {
        return makeCodecError(CodecErrc::InvalidValue, "chunk source offset");
    }
    auto const remaining = source.size() - nextEntry;
    if (remaining == 0) return 0;

    std::size_t accepted{};
    std::size_t upperBound = remaining;
    while (accepted < upperBound) {
        auto const distance  = upperBound - accepted;
        auto const candidate = accepted + distance / 2 + distance % 2;
        destination.assign(source.begin() + nextEntry, source.begin() + nextEntry + candidate);

        auto encoded = encodeControl(ControlMessage{chunk}, protocol, true, maxBody);
        if (encoded) {
            accepted = candidate;
            continue;
        }

        auto& error = encoded.error();
        if (error.isA<CodecErrorInfo>() && error.as<CodecErrorInfo>().code == CodecErrc::SizeLimitExceeded) {
            upperBound = candidate - 1;
            continue;
        }

        destination.clear();
        return forwardError(error);
    }

    destination.assign(source.begin() + nextEntry, source.begin() + nextEntry + accepted);
    return accepted;
}

template <class Chunk>
Expected<> finalizeChunkMetadata(std::vector<Chunk>& chunks) {
    auto const chunkCount = static_cast<std::uint16_t>(chunks.size());
    auto const sequence   = chunks.front().header.messageSequence;
    if (static_cast<std::uint32_t>(chunkCount - 1) > std::numeric_limits<std::uint32_t>::max() - sequence) {
        return makeCodecError(CodecErrc::InvalidValue, "chunk message sequence overflow");
    }
    for (std::uint16_t index = 0; index < chunkCount; ++index) {
        chunks[index].chunkIndex              = index;
        chunks[index].chunkCount              = chunkCount;
        chunks[index].header.messageSequence += index;
    }
    return {};
}

template <class Chunk, class ModuleEntry, class PayloadEntry, class ChunkFactory>
Expected<std::vector<Chunk>> packChunks(
    std::vector<ModuleEntry> const&  modules,
    std::vector<PayloadEntry> const& payloads,
    std::size_t                      maxChunks,
    std::size_t                      maxBody,
    CoreVersion                      protocol,
    ChunkFactory                     makeChunk
) {
    if (maxChunks == 0 || maxChunks > std::numeric_limits<std::uint16_t>::max()) {
        return makeCodecError(CodecErrc::InvalidValue, "chunk limit");
    }

    std::vector<Chunk> chunks;
    chunks.reserve(maxChunks);

    std::size_t nextModule{};
    std::size_t nextPayload{};
    do {
        if (chunks.size() == maxChunks) {
            return makeCodecError(CodecErrc::SizeLimitExceeded, "chunk count");
        }

        Chunk      current            = makeChunk();
        auto const moduleCountBefore  = nextModule;
        auto const payloadCountBefore = nextPayload;

        auto moduleCount = appendLongestFittingPrefix(current, current.modules, modules, nextModule, protocol, maxBody);
        if (!moduleCount) return forwardError(moduleCount.error());
        nextModule += *moduleCount;

        if (nextModule == modules.size()) {
            auto payloadCount =
                appendLongestFittingPrefix(current, current.payloads, payloads, nextPayload, protocol, maxBody);
            if (!payloadCount) return forwardError(payloadCount.error());
            nextPayload += *payloadCount;
        }

        bool const addedEntry = nextModule != moduleCountBefore || nextPayload != payloadCountBefore;
        bool const hasPending = nextModule != modules.size() || nextPayload != payloads.size();
        if (!addedEntry && hasPending) {
            return makeCodecError(CodecErrc::SizeLimitExceeded, "single declaration entry");
        }

        auto encoded = encodeControl(ControlMessage{current}, protocol, true, maxBody);
        if (!encoded) return forwardError(encoded.error());

        chunks.emplace_back(std::move(current));
    } while (nextModule != modules.size() || nextPayload != payloads.size());

    if (auto result = finalizeChunkMetadata(chunks); !result) return forwardError(result.error());
    return chunks;
}

Expected<std::vector<Declaration>>
packDeclaration(DeclarationSource source, CoreVersion protocol, std::size_t maxBody) {
    auto const* definition = findCoreProtocolDefinition(protocol);
    if (!definition || source.firstHeader.schema != definition->controlSchema || source.firstHeader.handshakeId == 0
        || source.firstHeader.messageSequence == 0
        || (source.senderRole != EndpointRole::Client && source.senderRole != EndpointRole::Server)
        || source.modules.size() > Limits::MaxDeclaredModules || source.payloads.size() > Limits::MaxDeclaredPayloads
        || !validCumulativeFeatureCount(source.modules, Limits::MaxDeclaredFeatures)
        || !strictlySorted(source.modules, [](auto const& e) { return e.id.value(); })
        || !strictlySorted(source.payloads, [](auto const& e) { return e.id.value(); })
        || !payloadModulesExist(source.modules, source.payloads)) {
        return malformed();
    }

    auto totalModules  = static_cast<std::uint32_t>(source.modules.size());
    auto totalPayloads = static_cast<std::uint32_t>(source.payloads.size());
    return packChunks<Declaration>(
        source.modules,
        source.payloads,
        Limits::MaxDeclarationChunks,
        maxBody,
        protocol,
        [&] {
            return Declaration{
                source.firstHeader,
                source.senderRole,
                source.registryRevision,
                0,
                1,
                totalModules,
                totalPayloads,
                {},
                {}
            };
        }
    );
}

Expected<std::vector<NegotiationResult>>
packNegotiationResult(NegotiationResultSource source, CoreVersion protocol, std::size_t maxBody) {
    auto const* definition = findCoreProtocolDefinition(protocol);
    if (!definition || source.firstHeader.schema != definition->controlSchema || source.firstHeader.handshakeId == 0
        || source.firstHeader.messageSequence == 0 || source.selectedCoreProtocol == 0
        || source.modules.size() > Limits::MaxResultModules || source.payloads.size() > Limits::MaxResultPayloads
        || !validCumulativeFeatureCount(source.modules, static_cast<std::size_t>(Limits::MaxDeclaredFeatures) * 2)
        || !strictlySorted(source.modules, [](auto const& e) { return e.id.value(); })
        || !strictlySorted(source.payloads, [](auto const& e) { return e.id.value(); })
        || !payloadModulesExist(source.modules, source.payloads)) {
        return malformed();
    }

    auto totalModules  = static_cast<std::uint32_t>(source.modules.size());
    auto totalPayloads = static_cast<std::uint32_t>(source.payloads.size());
    return packChunks<NegotiationResult>(
        source.modules,
        source.payloads,
        Limits::MaxNegotiationResultChunks,
        maxBody,
        protocol,
        [&] {
            return NegotiationResult{
                source.firstHeader,
                source.selectedCoreProtocol,
                source.serverRegistryRevision,
                source.clientRegistryRevision,
                0,
                1,
                totalModules,
                totalPayloads,
                {},
                {},
                source.transcriptDigest
            };
        }
    );
}

struct DeclarationAssembler::Impl {
    std::vector<Declaration> chunks;
    std::size_t              moduleCount{};
    std::size_t              payloadCount{};
    std::size_t              featureCount{};
    bool                     accepting{true};
    CoreVersion              protocol{1};
    std::size_t              maxBody{Limits::MaxControlBody};

    void invalidate() noexcept {
        chunks.clear();
        moduleCount  = 0;
        payloadCount = 0;
        featureCount = 0;
        accepting    = false;
    }
};

DeclarationAssembler::DeclarationAssembler(CoreVersion protocol, std::size_t maxBody)
: mImpl(std::make_unique<Impl>()) {
    mImpl->protocol = protocol;
    mImpl->maxBody  = maxBody;
}

DeclarationAssembler::~DeclarationAssembler()                                          = default;
DeclarationAssembler::DeclarationAssembler(DeclarationAssembler&&) noexcept            = default;
DeclarationAssembler& DeclarationAssembler::operator=(DeclarationAssembler&&) noexcept = default;

Expected<> DeclarationAssembler::push(Declaration chunk) {
    if (!mImpl) return malformed("declaration assembler was moved from");
    if (!mImpl->accepting) return malformed("declaration assembler is closed");
    auto reject = [&](std::string context) -> Expected<> {
        mImpl->invalidate();
        return malformed(std::move(context));
    };

    if (auto validation =
            validateChunkMetadata(chunk.header, chunk.chunkIndex, chunk.chunkCount, Limits::MaxDeclarationChunks);
        !validation) {
        return reject("chunk metadata");
    }
    if (chunk.totalModuleCount > Limits::MaxDeclaredModules || chunk.totalPayloadCount > Limits::MaxDeclaredPayloads
        || (chunk.senderRole != EndpointRole::Client && chunk.senderRole != EndpointRole::Server)
        || (chunk.chunkCount != 1 && chunk.modules.empty() && chunk.payloads.empty())
        || !strictlySorted(chunk.modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(chunk.payloads, [](auto const& entry) { return entry.id.value(); })) {
        return reject("declaration totals");
    }
    if (chunk.chunkIndex != mImpl->chunks.size()) return reject("chunk index");
    if (!mImpl->chunks.empty()) {
        auto const& first    = mImpl->chunks.front();
        auto const& previous = mImpl->chunks.back();
        if (chunk.header.handshakeId != first.header.handshakeId || chunk.header.schema != first.header.schema
            || chunk.header.messageSequence != previous.header.messageSequence + 1
            || chunk.senderRole != first.senderRole || chunk.registryRevision != first.registryRevision
            || chunk.chunkCount != first.chunkCount || chunk.totalModuleCount != first.totalModuleCount
            || chunk.totalPayloadCount != first.totalPayloadCount)
            return reject("inconsistent chunk");
        if (!previous.payloads.empty() && !chunk.modules.empty()) return reject("modules after payloads");
        if ((!previous.modules.empty() && !chunk.modules.empty()
             && previous.modules.back().id.value() >= chunk.modules.front().id.value())
            || (!previous.payloads.empty() && !chunk.payloads.empty()
                && previous.payloads.back().id.value() >= chunk.payloads.front().id.value()))
            return reject("chunk ordering");
    }

    if (mImpl->moduleCount > chunk.totalModuleCount
        || chunk.modules.size() > chunk.totalModuleCount - mImpl->moduleCount
        || mImpl->payloadCount > chunk.totalPayloadCount
        || chunk.payloads.size() > chunk.totalPayloadCount - mImpl->payloadCount) {
        return reject("declaration cumulative totals");
    }

    auto featureCount = mImpl->featureCount;
    for (auto const& module : chunk.modules) {
        if (featureCount > Limits::MaxDeclaredFeatures
            || module.features.size() > Limits::MaxDeclaredFeatures - featureCount) {
            return reject("declaration feature total");
        }
        featureCount += module.features.size();
    }

    mImpl->chunks.emplace_back(std::move(chunk));
    auto const& retained  = mImpl->chunks.back();
    mImpl->moduleCount   += retained.modules.size();
    mImpl->payloadCount  += retained.payloads.size();
    mImpl->featureCount   = featureCount;
    return {};
}
Expected<DeclarationSource> DeclarationAssembler::finish() {
    if (!mImpl) return malformed("declaration assembler was moved from");
    if (!mImpl->accepting) return malformed("declaration assembler is closed");
    if (mImpl->chunks.empty() || mImpl->chunks.size() != mImpl->chunks.front().chunkCount) {
        mImpl->invalidate();
        return malformed("incomplete declaration");
    }

    auto&             first = mImpl->chunks.front();
    DeclarationSource result{first.header, first.senderRole, first.registryRevision, {}, {}};
    result.modules.reserve(first.totalModuleCount);
    result.payloads.reserve(first.totalPayloadCount);
    for (auto const& chunk : mImpl->chunks) {
        std::ranges::copy(chunk.modules, std::back_inserter(result.modules));
        std::ranges::copy(chunk.payloads, std::back_inserter(result.payloads));
    }

    if (result.modules.size() != first.totalModuleCount || result.payloads.size() != first.totalPayloadCount) {
        mImpl->invalidate();
        return malformed("declaration totals");
    }

    if (!payloadModulesExist(result.modules, result.payloads)) {
        mImpl->invalidate();
        return malformed("payload module reference");
    }

    auto canonical = packDeclaration(result, mImpl->protocol, mImpl->maxBody);
    if (!canonical || *canonical != mImpl->chunks) {
        mImpl->invalidate();
        return malformed("non-canonical declaration chunking");
    }

    mImpl->invalidate();
    return result;
}

struct NegotiationResultAssembler::Impl {
    std::vector<NegotiationResult> chunks;
    std::size_t                    moduleCount{};
    std::size_t                    payloadCount{};
    std::size_t                    featureCount{};
    bool                           accepting{true};
    CoreVersion                    protocol{1};
    std::size_t                    maxBody{Limits::MaxControlBody};

    void invalidate() noexcept {
        chunks.clear();
        moduleCount  = 0;
        payloadCount = 0;
        featureCount = 0;
        accepting    = false;
    }
};

NegotiationResultAssembler::NegotiationResultAssembler(CoreVersion protocol, std::size_t maxBody)
: mImpl(std::make_unique<Impl>()) {
    mImpl->protocol = protocol;
    mImpl->maxBody  = maxBody;
}

NegotiationResultAssembler::~NegotiationResultAssembler()                                                = default;
NegotiationResultAssembler::NegotiationResultAssembler(NegotiationResultAssembler&&) noexcept            = default;
NegotiationResultAssembler& NegotiationResultAssembler::operator=(NegotiationResultAssembler&&) noexcept = default;

Expected<> NegotiationResultAssembler::push(NegotiationResult chunk) {
    if (!mImpl) return malformed("result assembler was moved from");
    if (!mImpl->accepting) return malformed("result assembler is closed");
    auto reject = [&](std::string context) -> Expected<> {
        mImpl->invalidate();
        return malformed(std::move(context));
    };

    if (auto validation =
            validateChunkMetadata(chunk.header, chunk.chunkIndex, chunk.chunkCount, Limits::MaxNegotiationResultChunks);
        !validation) {
        return reject("result chunk metadata");
    }
    if (chunk.totalModuleResultCount > Limits::MaxResultModules
        || chunk.totalPayloadResultCount > Limits::MaxResultPayloads || chunk.selectedCoreProtocol == 0
        || (chunk.chunkCount != 1 && chunk.modules.empty() && chunk.payloads.empty())
        || !strictlySorted(chunk.modules, [](auto const& entry) { return entry.id.value(); })
        || !strictlySorted(chunk.payloads, [](auto const& entry) { return entry.id.value(); })) {
        return reject("result totals");
    }
    if (chunk.chunkIndex != mImpl->chunks.size()) return reject("result chunk index");
    if (!mImpl->chunks.empty()) {
        auto const& first    = mImpl->chunks.front();
        auto const& previous = mImpl->chunks.back();

        if (chunk.header.handshakeId != first.header.handshakeId || chunk.header.schema != first.header.schema
            || chunk.header.messageSequence != previous.header.messageSequence + 1
            || chunk.selectedCoreProtocol != first.selectedCoreProtocol
            || chunk.serverRegistryRevision != first.serverRegistryRevision
            || chunk.clientRegistryRevision != first.clientRegistryRevision || chunk.chunkCount != first.chunkCount
            || chunk.totalModuleResultCount != first.totalModuleResultCount
            || chunk.totalPayloadResultCount != first.totalPayloadResultCount
            || chunk.transcriptDigest != first.transcriptDigest)
            return reject("inconsistent result chunk");
        if (!previous.payloads.empty() && !chunk.modules.empty()) return reject("result modules after payloads");
        if ((!previous.modules.empty() && !chunk.modules.empty()
             && previous.modules.back().id.value() >= chunk.modules.front().id.value())
            || (!previous.payloads.empty() && !chunk.payloads.empty()
                && previous.payloads.back().id.value() >= chunk.payloads.front().id.value()))
            return reject("result ordering");
    }

    if (mImpl->moduleCount > chunk.totalModuleResultCount
        || chunk.modules.size() > chunk.totalModuleResultCount - mImpl->moduleCount
        || mImpl->payloadCount > chunk.totalPayloadResultCount
        || chunk.payloads.size() > chunk.totalPayloadResultCount - mImpl->payloadCount) {
        return reject("result cumulative totals");
    }

    constexpr auto MaxResultFeatures = static_cast<std::size_t>(Limits::MaxDeclaredFeatures) * 2;
    auto           featureCount      = mImpl->featureCount;
    for (auto const& module : chunk.modules) {
        if (featureCount > MaxResultFeatures || module.features.size() > MaxResultFeatures - featureCount) {
            return reject("result feature total");
        }
        featureCount += module.features.size();
    }

    mImpl->chunks.emplace_back(std::move(chunk));
    auto const& retained  = mImpl->chunks.back();
    mImpl->moduleCount   += retained.modules.size();
    mImpl->payloadCount  += retained.payloads.size();
    mImpl->featureCount   = featureCount;
    return {};
}
Expected<NegotiationResultSource> NegotiationResultAssembler::finish() {
    if (!mImpl) return malformed("result assembler was moved from");
    if (!mImpl->accepting) return malformed("result assembler is closed");
    if (mImpl->chunks.empty() || mImpl->chunks.size() != mImpl->chunks.front().chunkCount) {
        mImpl->invalidate();
        return malformed("incomplete result");
    }

    auto&                   first = mImpl->chunks.front();
    NegotiationResultSource result{
        first.header,
        first.selectedCoreProtocol,
        first.serverRegistryRevision,
        first.clientRegistryRevision,
        {},
        {},
        first.transcriptDigest
    };
    result.modules.reserve(first.totalModuleResultCount);
    result.payloads.reserve(first.totalPayloadResultCount);

    for (auto const& chunk : mImpl->chunks) {
        std::ranges::copy(chunk.modules, std::back_inserter(result.modules));
        std::ranges::copy(chunk.payloads, std::back_inserter(result.payloads));
    }

    if (result.modules.size() != first.totalModuleResultCount
        || result.payloads.size() != first.totalPayloadResultCount) {
        mImpl->invalidate();
        return malformed("result totals");
    }

    if (!payloadModulesExist(result.modules, result.payloads)) {
        mImpl->invalidate();
        return malformed("result payload module reference");
    }

    auto canonical = packNegotiationResult(result, mImpl->protocol, mImpl->maxBody);
    if (!canonical || *canonical != mImpl->chunks) {
        mImpl->invalidate();
        return malformed("non-canonical result chunking");
    }

    mImpl->invalidate();
    return result;
}

} // namespace ll::protocol::detail
