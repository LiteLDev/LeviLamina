#include "ll/core/protocol/ProtocolEnvelopePacket.h"

#include <algorithm>
#include <limits>
#include <system_error>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/Constants.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

namespace ll::protocol::detail {

[[nodiscard]] static Bedrock::Result<void> makeEnvelopeReadFailure() {
    return nonstd::make_unexpected(Bedrock::ErrorInfo<>{std::error_code{}});
}

[[nodiscard]] static bool supportedEnvelopeSchema(std::uint8_t schema) noexcept {
    return std::ranges::any_of(CoreProtocolDefinitions, [schema](CoreProtocolDefinition const& definition) {
        return definition.payloadEnvelopeSchema == schema;
    });
}

ProtocolEnvelopePacket::ProtocolEnvelopePacket(std::uint64_t runtimeId, std::size_t maxBody) noexcept
: mRuntimeId(runtimeId),
  mMaxBody(std::min(maxBody, static_cast<std::size_t>(Limits::MaxPayloadBody))) {}

Expected<std::unique_ptr<ProtocolEnvelopePacket>> ProtocolEnvelopePacket::create(
    std::uint64_t runtimeId,
    CoreVersion   coreProtocol,
    SchemaVersion payloadSchema,
    std::string   body,
    SubClientId   senderSubId,
    std::size_t   maxBody
) {
    try {
        auto const* definition = findCoreProtocolDefinition(coreProtocol);
        if (!definition) {
            return makeProtocolError(ProtocolErrc::VersionIncompatible);
        }
        auto const effectiveMaximum = std::min(maxBody, static_cast<std::size_t>(Limits::MaxPayloadBody));
        if (runtimeId == 0 || payloadSchema == 0) {
            return makeCodecError(CodecErrc::InvalidValue, "protocol envelope identity");
        }
        if (body.size() > effectiveMaximum || body.size() > std::numeric_limits<std::uint32_t>::max()) {
            return makeCodecError(CodecErrc::SizeLimitExceeded, "protocol envelope body");
        }

        auto packet = std::make_unique<ProtocolEnvelopePacket>(runtimeId, effectiveMaximum);

        packet->mEnvelopeSchema = definition->payloadEnvelopeSchema;
        packet->mPayloadSchema  = payloadSchema;
        packet->mBody           = std::move(body);
        packet->mSenderSubId    = senderSubId;
        return packet;
    } catch (...) {
        return makeExceptionError();
    }
}

std::span<std::byte const> ProtocolEnvelopePacket::body() const noexcept {
    return {reinterpret_cast<std::byte const*>(mBody.data()), mBody.size()};
}

void ProtocolEnvelopePacket::write(BinaryStream& stream) const {
    stream.writeUnsignedChar(mEnvelopeSchema, "EnvelopeSchema", "LeviLamina protocol envelope schema");
    stream.writeUnsignedShort(mPayloadSchema, "PayloadSchema", "Negotiated payload schema");
    stream.writeUnsignedInt(static_cast<uint>(mBody.size()), "BodyLength", "Encoded payload body length");
    stream.write(mBody.data(), mBody.size());
}

Bedrock::Result<void> ProtocolEnvelopePacket::read(ReadOnlyBinaryStream& stream) {
    try {
        auto envelopeSchema = stream.getUnsignedChar();
        if (!envelopeSchema || !supportedEnvelopeSchema(*envelopeSchema)) {
            return makeEnvelopeReadFailure();
        }

        auto payloadSchema = stream.getUnsignedShort();
        if (!payloadSchema || *payloadSchema == 0) {
            return makeEnvelopeReadFailure();
        }

        auto bodyLength = stream.getUnsignedInt();
        if (!bodyLength || *bodyLength > mMaxBody || *bodyLength > Limits::MaxPayloadBody) {
            return makeEnvelopeReadFailure();
        }
        if (stream.mReadPointer > stream.mView.size()
            || static_cast<std::size_t>(*bodyLength) != stream.mView.size() - stream.mReadPointer) {
            return makeEnvelopeReadFailure();
        }

        std::string body(static_cast<std::size_t>(*bodyLength), '\0');
        if (!body.empty()) {
            auto read = stream.read(body.data(), body.size());
            if (!read) {
                return makeEnvelopeReadFailure();
            }
        }
        if (auto completed = stream.ensureReadCompleted(); !completed) {
            return makeEnvelopeReadFailure();
        }

        mEnvelopeSchema = *envelopeSchema;
        mPayloadSchema  = *payloadSchema;

        mBody = std::move(body);
        return {};
    } catch (...) {
        return makeEnvelopeReadFailure();
    }
}

std::string_view ProtocolEnvelopePacket::getName() const { return "LeviLaminaProtocolEnvelopePacket"; }

ll::network::PacketRuntimeId ProtocolEnvelopePacket::getRuntimeId() const { return mRuntimeId; }

} // namespace ll::protocol::detail
