#pragma once

#include <compare>
#include <cstddef>
#include <functional>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

namespace ll::protocol {

class ProtocolNamespace {
    std::string mValue;

    explicit ProtocolNamespace(std::string value) : mValue(std::move(value)) {}

public:
    LLNDAPI static Expected<ProtocolNamespace> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(ProtocolNamespace const&) const = default;
};

class ModuleName {
    std::string mValue;

    explicit ModuleName(std::string value) : mValue(std::move(value)) {}

public:
    LLNDAPI static Expected<ModuleName> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(ModuleName const&) const = default;
};

class PayloadName {
    std::string mValue;

    explicit PayloadName(std::string value) : mValue(std::move(value)) {}

public:
    LLNDAPI static Expected<PayloadName> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(PayloadName const&) const = default;
};

class FeatureName {
    std::string mValue;

    explicit FeatureName(std::string value) : mValue(std::move(value)) {}

public:
    LLNDAPI static Expected<FeatureName> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(FeatureName const&) const = default;
};

class ModuleId {
    std::string mValue;
    std::size_t mSeparator;

    ModuleId(std::string value, std::size_t separator) : mValue(std::move(value)), mSeparator(separator) {}

public:
    LLNDAPI static ModuleId const&    INVALID() noexcept;
    LLNDAPI static Expected<ModuleId> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] std::string_view protocolNamespace() const noexcept {
        return mSeparator == std::string::npos ? std::string_view{} : value().substr(0, mSeparator);
    }
    [[nodiscard]] std::string_view name() const noexcept {
        return mSeparator == std::string::npos ? std::string_view{} : value().substr(mSeparator + 1);
    }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(ModuleId const&) const = default;
};

class PayloadId {
    std::string mValue;
    std::size_t mNamespaceSeparator;
    std::size_t mPayloadSeparator;

    PayloadId(std::string value, std::size_t namespaceSeparator, std::size_t payloadSeparator)
    : mValue(std::move(value)),
      mNamespaceSeparator(namespaceSeparator),
      mPayloadSeparator(payloadSeparator) {}

public:
    LLNDAPI static PayloadId const&    INVALID() noexcept;
    LLNDAPI static Expected<PayloadId> parse(std::string_view value);

    [[nodiscard]] std::string const& str() const noexcept { return mValue; }
    [[nodiscard]] std::string_view   value() const noexcept { return mValue; }

    [[nodiscard]] std::string_view protocolNamespace() const noexcept {
        return mNamespaceSeparator == std::string::npos ? std::string_view{} : value().substr(0, mNamespaceSeparator);
    }
    [[nodiscard]] std::string_view module() const noexcept {
        return mPayloadSeparator == std::string::npos ? std::string_view{} : value().substr(0, mPayloadSeparator);
    }
    [[nodiscard]] std::string_view name() const noexcept {
        return mPayloadSeparator == std::string::npos ? std::string_view{} : value().substr(mPayloadSeparator + 1);
    }

    [[nodiscard]] explicit operator std::string_view() const noexcept { return value(); }

    auto operator<=>(PayloadId const&) const = default;
};

LLNDAPI Expected<ModuleId> makeModuleId(ProtocolNamespace const& protocolNamespace, ModuleName const& name);

LLNDAPI Expected<PayloadId> makePayloadId(ModuleId const& module, PayloadName const& name);

} // namespace ll::protocol

namespace std {

template <>
struct hash<ll::protocol::ProtocolNamespace> {
    size_t operator()(ll::protocol::ProtocolNamespace const& value) const noexcept {
        return hash<string_view>{}(value.value());
    }
};

template <>
struct hash<ll::protocol::ModuleName> {
    size_t operator()(ll::protocol::ModuleName const& value) const noexcept {
        return hash<string_view>{}(value.value());
    }
};

template <>
struct hash<ll::protocol::PayloadName> {
    size_t operator()(ll::protocol::PayloadName const& value) const noexcept {
        return hash<string_view>{}(value.value());
    }
};

template <>
struct hash<ll::protocol::FeatureName> {
    size_t operator()(ll::protocol::FeatureName const& value) const noexcept {
        return hash<string_view>{}(value.value());
    }
};

template <>
struct hash<ll::protocol::ModuleId> {
    size_t operator()(ll::protocol::ModuleId const& value) const noexcept { return hash<string_view>{}(value.value()); }
};

template <>
struct hash<ll::protocol::PayloadId> {
    size_t operator()(ll::protocol::PayloadId const& value) const noexcept {
        return hash<string_view>{}(value.value());
    }
};

} // namespace std
