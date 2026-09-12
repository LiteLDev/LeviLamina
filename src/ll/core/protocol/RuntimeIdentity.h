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

[[nodiscard]] std::uint64_t payloadRuntimeId(PayloadId const& id);

[[nodiscard]] bool isReservedProtocolNamespace(std::string_view value);

Expected<> validateManifestProtocolNamespace(mod::Manifest const& manifest);

Expected<ProtocolNamespace> resolveModProtocolNamespace(mod::Manifest const& manifest);

ProtocolNamespace const& resolveCoreProtocolNamespace(CoreProtocolOwner const&);

} // namespace ll::protocol::detail
