#include "ll/core/protocol/Discovery.h"

#include <array>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/Constants.h"

#include "mc/deps/json/Value.h"

namespace ll::protocol::detail {

namespace discovery_detail {

Expected<DiscoveryMarker> malformed(std::string_view context) {
    return makeProtocolError(ProtocolErrc::InvalidControlSchema, std::string{context});
}

std::optional<std::string> boundedText(Json::Value const& value) {
    if (!value.isString()) return std::nullopt;

    auto text = value.asString({});
    if (text.empty() || text.size() > Limits::MaxDiscoveryTextBytes) return std::nullopt;

    return text;
}

} // namespace discovery_detail

Expected<DiscoveryMarker> parseDiscoveryMarker(Json::Value const& root) noexcept {
    try {
        if (!root.isObject() || !root.isMember(DiscoveryRootKey.data())) {
            return discovery_detail::malformed("missing discovery marker");
        }

        auto const& marker = root[DiscoveryRootKey.data()];
        if (!marker.isObject() || marker.size() != 5) {
            return discovery_detail::malformed("discovery marker shape");
        }

        constexpr std::array RequiredKeys{
            DiscoveryIdKey,
            DiscoveryProtocolMinKey,
            DiscoveryProtocolMaxKey,
            DiscoveryVersionKey,
            DiscoveryBuildKey,
        };
        for (auto key : RequiredKeys) {
            if (!marker.isMember(key.data())) return discovery_detail::malformed("discovery marker field");
        }

        auto const& id          = marker[DiscoveryIdKey.data()];
        auto const& protocolMin = marker[DiscoveryProtocolMinKey.data()];
        auto const& protocolMax = marker[DiscoveryProtocolMaxKey.data()];
        auto const& version     = marker[DiscoveryVersionKey.data()];
        auto const& build       = marker[DiscoveryBuildKey.data()];

        auto parsedId      = discovery_detail::boundedText(id);
        auto parsedVersion = discovery_detail::boundedText(version);
        auto parsedBuild   = discovery_detail::boundedText(build);
        if (!parsedId || *parsedId != DiscoveryLoaderId || !protocolMin.isUInt() || !protocolMax.isUInt()
            || !parsedVersion || !parsedBuild) {
            return discovery_detail::malformed("invalid discovery marker field");
        }

        auto const minimum = protocolMin.asUInt(0);
        auto const maximum = protocolMax.asUInt(0);
        if (minimum == 0 || maximum == 0 || minimum > maximum || maximum > UINT16_MAX) {
            return discovery_detail::malformed("invalid discovery protocol range");
        }

        return DiscoveryMarker{
            VersionRange{static_cast<CoreVersion>(minimum), static_cast<CoreVersion>(maximum)},
            std::move(*parsedVersion),
            std::move(*parsedBuild),
        };
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> injectDiscoveryMarker(Json::Value& root, std::string_view version, std::string_view build) noexcept {
    try {
        if (!root.isObject() || version.empty() || version.size() > Limits::MaxDiscoveryTextBytes || build.empty()
            || build.size() > Limits::MaxDiscoveryTextBytes) {
            return makeProtocolError(ProtocolErrc::InvalidControlSchema, "invalid local discovery marker");
        }

        Json::Value marker{Json::ValueType::ObjectValue};
        marker[DiscoveryIdKey.data()]          = std::string{DiscoveryLoaderId};
        marker[DiscoveryProtocolMinKey.data()] = SupportedCoreProtocolVersions.min;
        marker[DiscoveryProtocolMaxKey.data()] = SupportedCoreProtocolVersions.max;
        marker[DiscoveryVersionKey.data()]     = std::string{version};
        marker[DiscoveryBuildKey.data()]       = std::string{build};

        root[DiscoveryRootKey.data()] = std::move(marker);
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol::detail
