#pragma once

#include <cstdint>
#include <string_view>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Id.h"

namespace ll::mod {
struct Manifest;
}

namespace ll::protocol::detail {

class CoreProtocolOwner final {
    CoreProtocolOwner() = default;

    friend CoreProtocolOwner const& getCoreProtocolOwner() noexcept;
};

[[nodiscard]] CoreProtocolOwner const& getCoreProtocolOwner() noexcept;

[[nodiscard]] std::uint64_t payloadRuntimeId(PayloadId const& id) noexcept;

[[nodiscard]] bool isReservedProtocolNamespace(std::string_view value) noexcept;

Expected<> validateManifestProtocolNamespace(mod::Manifest const& manifest) noexcept;

Expected<ProtocolNamespace> resolveModProtocolNamespace(mod::Manifest const& manifest) noexcept;

ProtocolNamespace const& resolveCoreProtocolNamespace(CoreProtocolOwner const&) noexcept;

} // namespace ll::protocol::detail
