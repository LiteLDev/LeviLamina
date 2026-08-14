#pragma once

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/Constants.h"

namespace ll::protocol::detail {

[[nodiscard]] WireErrorCode toWireErrorCode(ProtocolErrc code) noexcept;

[[nodiscard]] WireErrorCode toPayloadWireErrorCode(CodecErrc code) noexcept;

[[nodiscard]] WireErrorCode toWireErrorCode(SessionErrc code) noexcept;

[[nodiscard]] WireErrorCode toWireErrorCode(TransportErrc code) noexcept;

} // namespace ll::protocol::detail
