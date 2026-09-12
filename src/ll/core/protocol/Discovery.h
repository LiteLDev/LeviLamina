#pragma once

#include <string>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Version.h"

namespace Json {
class Value;
}

namespace ll::protocol::detail {

struct DiscoveryMarker {
    VersionRange protocols;
    std::string  version;
    std::string  build;

    bool operator==(DiscoveryMarker const&) const = default;
};

[[nodiscard]] Expected<DiscoveryMarker> parseDiscoveryMarker(Json::Value const& root) noexcept;

[[nodiscard]] Expected<>
injectDiscoveryMarker(Json::Value& root, std::string_view version, std::string_view build) noexcept;

} // namespace ll::protocol::detail
