#include "ll/core/protocol/RuntimeIdentity.h"

#include <algorithm>
#include <cstdint>
#include <string_view>

#include "ll/api/mod/Manifest.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/core/protocol/Constants.h"

namespace ll::protocol::detail {

namespace runtime_identity_detail {

Expected<ProtocolNamespace> parseOwnedNamespace(std::string_view value) noexcept {
    auto parsed = ProtocolNamespace::parse(value);
    if (!parsed) {
        return forwardError(parsed.error());
    }
    if (isReservedProtocolNamespace(parsed->value())) {
        return makeRegistrationError(RegistrationErrc::ReservedNamespace, parsed->str());
    }

    return parsed;
}

} // namespace runtime_identity_detail

CoreProtocolOwner const& getCoreProtocolOwner() noexcept {
    static CoreProtocolOwner const owner;
    return owner;
}

std::uint64_t payloadRuntimeId(PayloadId const& id) noexcept {
    return hash_utils::doHash(PayloadHashDomain, id.value());
}

bool isReservedProtocolNamespace(std::string_view value) noexcept {
    return std::ranges::contains(ReservedProtocolNamespaces, value);
}

Expected<> validateManifestProtocolNamespace(mod::Manifest const& manifest) noexcept {
    if (manifest.protocolNamespace) {
        auto parsed = runtime_identity_detail::parseOwnedNamespace(*manifest.protocolNamespace);
        if (!parsed) {
            return forwardError(parsed.error());
        }

        return {};
    }

    auto fallback = ProtocolNamespace::parse(manifest.name);
    if (fallback && isReservedProtocolNamespace(fallback->value())) {
        return makeRegistrationError(RegistrationErrc::ReservedNamespace, fallback->str());
    }

    return {};
}

Expected<ProtocolNamespace> resolveModProtocolNamespace(mod::Manifest const& manifest) noexcept {
    return runtime_identity_detail::parseOwnedNamespace(
        manifest.protocolNamespace ? std::string_view{*manifest.protocolNamespace} : std::string_view{manifest.name}
    );
}

ProtocolNamespace const& resolveCoreProtocolNamespace(CoreProtocolOwner const&) noexcept {
    static ProtocolNamespace const value = ProtocolNamespace::parse(ReservedProtocolNamespaces.front()).value();
    return value;
}

} // namespace ll::protocol::detail
