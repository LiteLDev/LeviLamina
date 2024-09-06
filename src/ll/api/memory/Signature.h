#pragma once

#include <array>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/FixedString.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/utils/StringUtils.h"

namespace ll::memory {

class Signature;
template <size_t N>
class FixedSignature;

class SignatureElement {
    std::optional<std::byte> element;

public:
    [[nodiscard]] constexpr SignatureElement() = default;

    [[nodiscard]] constexpr SignatureElement(std::nullptr_t) {}

    [[nodiscard]] constexpr SignatureElement(std::byte byte) : element(byte) {}

    [[nodiscard]] constexpr SignatureElement(uchar byte) : element(static_cast<std::byte>(byte)) {}

    [[nodiscard]] constexpr std::byte operator*() const { return *element; }

    [[nodiscard]] constexpr bool isWildcard() const { return !element.has_value(); }

    [[nodiscard]] constexpr bool operator==(std::byte other) const { return isWildcard() || *element == other; }

    [[nodiscard]] constexpr bool operator==(uchar other) const { return operator==(static_cast<std::byte>(other)); }
};

class SignatureView {
    std::span<SignatureElement const> const elements;

public:
    [[nodiscard]] constexpr SignatureView() = default;
    [[nodiscard]] constexpr SignatureView(std::span<SignatureElement const> span) : elements(span) {}

    [[nodiscard]] constexpr SignatureView(Signature const& signature);
    template <size_t N>
    [[nodiscard]] constexpr SignatureView(FixedSignature<N> const& signature);

    [[nodiscard]] constexpr auto           begin() const { return elements.begin(); }
    [[nodiscard]] constexpr auto           end() const { return elements.end(); }
    [[nodiscard]] constexpr decltype(auto) front() const { return elements.front(); }
    [[nodiscard]] constexpr decltype(auto) back() const { return elements.back(); }
    [[nodiscard]] constexpr decltype(auto) operator[](size_t idx) const { return elements[idx]; }

    [[nodiscard]] constexpr size_t size() const { return elements.size(); }

    LLNDAPI void* resolve(bool disableErrorOutput = false) const;
    LLNDAPI void* resolve(std::span<std::byte> range, bool disableErrorOutput = false) const;

    LLNDAPI std::string toString(bool alignWildcard = true, bool upperCase = true) const;
};

class Signature {
    std::vector<SignatureElement> const elements;

    [[nodiscard]] constexpr Signature(std::vector<SignatureElement> vec) : elements(std::move(vec)) {}

public:
    [[nodiscard]] static constexpr Signature parse(std::string_view str) {
        std::vector<SignatureElement> elements;
        string_utils::splitByPattern(
            [&](std::string_view sv) {
                if (sv.starts_with('?')) {
                    elements.emplace_back();
                } else {
                    elements.emplace_back(string_utils::digitFromChar(sv[0]) << 4 | string_utils::digitFromChar(sv[1]));
                }
                return true;
            },
            str,
            " "
        );
        return {std::move(elements)};
    }

    [[nodiscard]] constexpr auto           begin() const { return elements.begin(); }
    [[nodiscard]] constexpr auto           end() const { return elements.end(); }
    [[nodiscard]] constexpr decltype(auto) front() const { return elements.front(); }
    [[nodiscard]] constexpr decltype(auto) back() const { return elements.back(); }
    [[nodiscard]] constexpr decltype(auto) operator[](size_t idx) const { return elements[idx]; }

    [[nodiscard]] constexpr size_t size() const { return elements.size(); }

    [[nodiscard]] constexpr SignatureView view() const { return {std::span{elements}}; }
};

[[nodiscard]] constexpr SignatureView::SignatureView(Signature const& signature) : SignatureView(signature.view()) {}

template <size_t N>
class FixedSignature {
    std::array<SignatureElement, N> elements;

public:
    [[nodiscard]] constexpr FixedSignature(SignatureView signature) {
        for (size_t i = 0; i < N; ++i) {
            elements[i] = signature[i];
        }
    }

    [[nodiscard]] auto                     begin() const { return elements.begin(); }
    [[nodiscard]] auto                     end() const { return elements.end(); }
    [[nodiscard]] constexpr decltype(auto) front() const { return elements.front(); }
    [[nodiscard]] constexpr decltype(auto) back() const { return elements.back(); }
    [[nodiscard]] constexpr decltype(auto) operator[](size_t idx) const { return elements[idx]; }

    [[nodiscard]] consteval size_t size() const { return N; }

    [[nodiscard]] constexpr SignatureView view() const { return {std::span{elements}}; }
};

template <FixedString str>
constexpr auto signatureCache = []() {
    constexpr size_t N = []() {
        size_t i = 0;
        string_utils::splitByPattern(
            [&](std::string_view sv) {
                i++;
                return true;
            },
            str,
            " "
        );
        return i;
    }();
    FixedSignature<N> res{Signature::parse(str)};
    return res;
}();

template <size_t N>
[[nodiscard]] constexpr SignatureView::SignatureView(FixedSignature<N> const& signature)
: SignatureView(signature.view()) {}

} // namespace ll::memory

namespace ll::inline literals::inline memory_literals {
template <FixedString str>
consteval memory::SignatureView operator""_sig() noexcept {
    return memory::signatureCache<str>.view();
}
} // namespace ll::inline literals::inline memory_literals
