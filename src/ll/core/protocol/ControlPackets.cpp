#include "ll/core/protocol/ControlPackets.h"

#include <algorithm>
#include <array>
#include <system_error>
#include <utility>

#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlCodec.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

namespace ll::protocol::detail {

inline constexpr std::array ControlRuntimeIds{
    HelloRuntimeId,
    HelloAckRuntimeId,
    DeclarationRuntimeId,
    NegotiationResultRuntimeId,
    ReadyRuntimeId,
    ProtocolErrorRuntimeId,
};

[[nodiscard]] static Bedrock::Result<void> makeControlReadFailure() {
    return nonstd::make_unexpected(Bedrock::ErrorInfo<>{std::error_code{}});
}

ControlPacket::ControlPacket(std::uint64_t runtimeId, std::size_t maxBody) noexcept
: mRuntimeId(runtimeId),
  mMaxBody(std::min(maxBody, static_cast<std::size_t>(Limits::MaxControlBody))) {}

Expected<std::unique_ptr<ControlPacket>> ControlPacket::create(
    ControlMessage const& message,
    CoreVersion           coreProtocol,
    SubClientId           senderSubId,
    std::size_t           maxBody
) noexcept {
    try {
        auto runtimeId = controlRuntimeId(message);
        auto encoded   = encodeControl(message, coreProtocol, true, maxBody);
        if (!encoded) {
            return forwardError(encoded.error());
        }

        auto packet          = std::make_unique<ControlPacket>(runtimeId, maxBody);
        packet->mBody        = std::move(*encoded);
        packet->mSenderSubId = senderSubId;
        return packet;
    } catch (...) {
        return makeExceptionError();
    }
}

std::span<std::byte const> ControlPacket::body() const noexcept {
    return {reinterpret_cast<std::byte const*>(mBody.data()), mBody.size()};
}

Expected<ControlMessage> ControlPacket::decode(CoreVersion coreProtocol, std::size_t maxBody) const noexcept {
    try {
        return decodeControl(mRuntimeId, body(), coreProtocol, maxBody);
    } catch (...) {
        return makeExceptionError();
    }
}

void ControlPacket::write(BinaryStream& stream) const { stream.write(mBody.data(), mBody.size()); }

Bedrock::Result<void> ControlPacket::read(ReadOnlyBinaryStream& stream) {
    try {
        if (stream.mReadPointer > stream.mView.size()) {
            return makeControlReadFailure();
        }

        auto const bodyLength = stream.mView.size() - stream.mReadPointer;
        if (bodyLength > mMaxBody || bodyLength > Limits::MaxControlBody) {
            return makeControlReadFailure();
        }

        std::string body(bodyLength, '\0');
        if (!body.empty()) {
            auto read = stream.read(body.data(), body.size());
            if (!read) {
                return makeControlReadFailure();
            }
        }

        if (auto completed = stream.ensureReadCompleted(); !completed) {
            return makeControlReadFailure();
        }

        mBody = std::move(body);
        return {};
    } catch (...) {
        return makeControlReadFailure();
    }
}

std::string_view ControlPacket::getName() const { return "LeviLaminaControlPacket"; }

ll::network::PacketRuntimeId ControlPacket::getRuntimeId() const { return mRuntimeId; }

bool isControlRuntimeId(std::uint64_t runtimeId) {
    return std::ranges::find(ControlRuntimeIds, runtimeId) != ControlRuntimeIds.end();
}

} // namespace ll::protocol::detail
