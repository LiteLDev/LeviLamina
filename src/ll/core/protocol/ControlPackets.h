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
#include "ll/core/protocol/ControlMessage.h"

namespace ll::protocol::detail {

class ControlPacket final : public ll::network::Packet {
    std::uint64_t mRuntimeId{};
    std::size_t   mMaxBody{Limits::MaxControlBody};
    std::string   mBody;

public:
    explicit ControlPacket(std::uint64_t runtimeId, std::size_t maxBody = Limits::MaxControlBody) noexcept;

    [[nodiscard]] static Expected<std::unique_ptr<ControlPacket>> create(
        ControlMessage const& message,
        CoreVersion           coreProtocol,
        SubClientId           senderSubId = SubClientId::PrimaryClient,
        std::size_t           maxBody     = Limits::MaxControlBody
    ) noexcept;

    [[nodiscard]] std::span<std::byte const> body() const noexcept;
    [[nodiscard]] Expected<ControlMessage>
    decode(CoreVersion coreProtocol, std::size_t maxBody = Limits::MaxControlBody) const noexcept;

    void                                write(BinaryStream& stream) const override;
    [[nodiscard]] Bedrock::Result<void> read(ReadOnlyBinaryStream& stream) override;

    [[nodiscard]] std::string_view             getName() const override;
    [[nodiscard]] ll::network::PacketRuntimeId getRuntimeId() const override;
};

[[nodiscard]] bool isControlRuntimeId(std::uint64_t runtimeId);

} // namespace ll::protocol::detail
