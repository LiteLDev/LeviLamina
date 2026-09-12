#pragma once

#include <memory>

#include "ll/api/Expected.h"

namespace ll::protocol::detail {

class ProtocolEnvelopePacket;
class ProtocolSession;

class PayloadDispatcher {
public:
    [[nodiscard]] Expected<>
    dispatch(std::shared_ptr<ProtocolSession> const& session, ProtocolEnvelopePacket const& packet) const noexcept;
};

} // namespace ll::protocol::detail
