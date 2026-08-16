#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>
#include <string_view>

#include "ll/api/Expected.h"
#include "ll/api/network/packet/Packet.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/Version.h"

namespace ll::protocol::detail {

class ProtocolEnvelopePacket final : public ll::network::Packet {
    std::uint64_t mRuntimeId{};
    std::size_t   mMaxBody{Limits::MaxPayloadBody};
    std::uint8_t  mEnvelopeSchema{};
    SchemaVersion mPayloadSchema{};
    std::string   mBody;

public:
    explicit ProtocolEnvelopePacket(std::uint64_t runtimeId, std::size_t maxBody = Limits::MaxPayloadBody) noexcept;

    [[nodiscard]] static Expected<std::unique_ptr<ProtocolEnvelopePacket>> create(
        std::uint64_t runtimeId,
        CoreVersion   coreProtocol,
        SchemaVersion payloadSchema,
        std::string   body,
        SubClientId   senderSubId = SubClientId::PrimaryClient,
        std::size_t   maxBody     = Limits::MaxPayloadBody
    );

    [[nodiscard]] std::uint8_t               envelopeSchema() const noexcept { return mEnvelopeSchema; }
    [[nodiscard]] SchemaVersion              payloadSchema() const noexcept { return mPayloadSchema; }
    [[nodiscard]] std::span<std::byte const> body() const noexcept;

    void                                write(BinaryStream& stream) const override;
    [[nodiscard]] Bedrock::Result<void> read(ReadOnlyBinaryStream& stream) override;

    [[nodiscard]] std::string_view             getName() const override;
    [[nodiscard]] ll::network::PacketRuntimeId getRuntimeId() const override;
};

} // namespace ll::protocol::detail
