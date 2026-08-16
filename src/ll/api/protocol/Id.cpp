#include "ll/api/protocol/Id.h"

#include <string>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"

namespace ll::protocol {

namespace detail {

constexpr bool isLower(char value) noexcept { return value >= 'a' && value <= 'z'; }

constexpr bool isDigit(char value) noexcept { return value >= '0' && value <= '9'; }

constexpr bool isLowerAlphaNumeric(char value) noexcept { return isLower(value) || isDigit(value); }

constexpr bool isSimpleTail(char value) noexcept {
    return isLowerAlphaNumeric(value) || value == '_' || value == '.' || value == '-';
}

bool validSimpleName(std::string_view value) noexcept {
    if (value.empty() || !isLowerAlphaNumeric(value.front())) {
        return false;
    }

    for (char character : value.substr(1)) {
        if (!isSimpleTail(character)) {
            return false;
        }
    }

    return true;
}

bool validPayloadName(std::string_view value) noexcept {
    if (value.empty() || !isLowerAlphaNumeric(value.front())) {
        return false;
    }

    for (char character : value.substr(1)) {
        if (!isSimpleTail(character) && character != '/') {
            return false;
        }
    }

    return true;
}

bool validFeatureName(std::string_view value) noexcept {
    if (value.empty() || !isLower(value.front())) {
        return false;
    }

    for (char character : value.substr(1)) {
        if (!isSimpleTail(character)) {
            return false;
        }
    }

    return true;
}

Unexpected tooLong(std::string_view type) { return makeIdentityError(IdentityErrc::TooLong, std::string{type}); }

Unexpected invalid(std::string_view type) { return makeIdentityError(IdentityErrc::InvalidSyntax, std::string{type}); }

} // namespace detail

Expected<ProtocolNamespace> ProtocolNamespace::parse(std::string_view value) {
    if (value.size() > Limits::MaxProtocolNamespaceBytes) {
        return detail::tooLong("protocol namespace");
    }
    if (!detail::validSimpleName(value)) {
        return detail::invalid("protocol namespace");
    }

    return ProtocolNamespace{std::string{value}};
}

Expected<ModuleName> ModuleName::parse(std::string_view value) {
    if (value.size() > Limits::MaxModuleNameBytes) {
        return detail::tooLong("module name");
    }
    if (!detail::validSimpleName(value)) {
        return detail::invalid("module name");
    }

    return ModuleName{std::string{value}};
}

Expected<PayloadName> PayloadName::parse(std::string_view value) {
    if (value.size() > Limits::MaxPayloadNameBytes) {
        return detail::tooLong("payload name");
    }
    if (!detail::validPayloadName(value)) {
        return detail::invalid("payload name");
    }

    return PayloadName{std::string{value}};
}

Expected<FeatureName> FeatureName::parse(std::string_view value) {
    if (value.size() > Limits::MaxFeatureNameBytes) {
        return detail::tooLong("feature name");
    }
    if (!detail::validFeatureName(value)) {
        return detail::invalid("feature name");
    }

    return FeatureName{std::string{value}};
}

Expected<ModuleId> ModuleId::parse(std::string_view value) {
    if (value.size() > Limits::MaxModuleIdBytes) {
        return detail::tooLong("module ID");
    }

    auto const separator = value.find(':');
    if (separator == std::string_view::npos || value.find(':', separator + 1) != std::string_view::npos) {
        return detail::invalid("module ID");
    }
    if (!ProtocolNamespace::parse(value.substr(0, separator)) || !ModuleName::parse(value.substr(separator + 1))) {
        return detail::invalid("module ID");
    }

    return ModuleId{std::string{value}, separator};
}

Expected<PayloadId> PayloadId::parse(std::string_view value) {
    if (value.size() > Limits::MaxPayloadIdBytes) {
        return detail::tooLong("payload ID");
    }

    auto const namespaceSeparator = value.find(':');
    auto const payloadSeparator =
        value.find('/', namespaceSeparator == std::string_view::npos ? 0 : namespaceSeparator + 1);
    if (namespaceSeparator == std::string_view::npos || payloadSeparator == std::string_view::npos
        || value.find(':', namespaceSeparator + 1) != std::string_view::npos) {
        return detail::invalid("payload ID");
    }
    if (!ProtocolNamespace::parse(value.substr(0, namespaceSeparator))
        || !ModuleName::parse(value.substr(namespaceSeparator + 1, payloadSeparator - namespaceSeparator - 1))
        || !PayloadName::parse(value.substr(payloadSeparator + 1))) {
        return detail::invalid("payload ID");
    }

    return PayloadId{std::string{value}, namespaceSeparator, payloadSeparator};
}

Expected<ModuleId> makeModuleId(ProtocolNamespace const& protocolNamespace, ModuleName const& name) {
    std::string value;
    value.reserve(protocolNamespace.value().size() + 1 + name.value().size());
    value.append(protocolNamespace.value());
    value.push_back(':');
    value.append(name.value());

    return ModuleId::parse(value);
}

Expected<PayloadId> makePayloadId(ModuleId const& module, PayloadName const& name) {
    std::string value;
    value.reserve(module.value().size() + 1 + name.value().size());
    value.append(module.value());
    value.push_back('/');
    value.append(name.value());

    return PayloadId::parse(value);
}

} // namespace ll::protocol
