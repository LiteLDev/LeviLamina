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
#include "ll/api/utils/HashUtils.h"
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

    [[nodiscard]] constexpr bool operator==(SignatureElement const& other) const { return element == other.element; }

    [[nodiscard]] constexpr bool operator==(std::byte other) const { return isWildcard() || *element == other; }

    [[nodiscard]] constexpr bool operator==(uchar other) const { return operator==(static_cast<std::byte>(other)); }

    [[nodiscard]] size_t hash() const { return std::hash<std::optional<std::byte>>{}(element); }
};

class SignatureView {
    std::span<SignatureElement const> elements;

    void* uncachedResolve(std::span<std::byte> range) const;

public:
    [[nodiscard]] constexpr SignatureView() = default;

    [[nodiscard]] constexpr SignatureView(SignatureView&&) noexcept          = default;
    LL_MAY_CONSTEXPR SignatureView& operator=(SignatureView&&) noexcept      = default;
    [[nodiscard]] constexpr SignatureView(SignatureView const&) noexcept     = default;
    LL_MAY_CONSTEXPR SignatureView& operator=(SignatureView const&) noexcept = default;

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

    [[nodiscard]] constexpr bool operator==(SignatureView const& other) const {
        return std::equal(begin(), end(), other.begin(), other.end());
    }
};

class Signature {
    std::vector<SignatureElement> elements;

    [[nodiscard]] constexpr Signature(std::vector<SignatureElement> vec) : elements(std::move(vec)) {}

public:
    [[nodiscard]] explicit constexpr Signature(SignatureView view) : elements(view.begin(), view.end()) {}

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

    [[nodiscard]] constexpr bool operator==(Signature const& other) const { return elements == other.elements; }
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

template <size_t N>
[[nodiscard]] constexpr SignatureView::SignatureView(FixedSignature<N> const& signature)
: SignatureView(signature.view()) {}

template <FixedString signature>
constexpr inline auto signatureCache = []() {
    constexpr size_t N = []() {
        size_t i = 0;
        string_utils::splitByPattern(
            [&](std::string_view) {
                i++;
                return true;
            },
            signature,
            " "
        );
        return i;
    }();
    FixedSignature<N> res{Signature::parse(signature)};
    return res;
}();
} // namespace ll::memory

namespace ll::inline literals::inline memory_literals {
template <FixedString signature>
consteval memory::SignatureView operator""_sig() noexcept {
    return memory::signatureCache<signature>.view();
}
template <FixedString signature>
constexpr void* operator""_sigp() noexcept {
    return memory::signatureCache<signature>.view().resolve();
}
} // namespace ll::inline literals::inline memory_literals

namespace std {
template <>
struct hash<ll::memory::SignatureElement> {
    size_t operator()(ll::memory::SignatureElement const& e) const noexcept { return e.hash(); }
};
template <>
struct hash<ll::memory::Signature> {
    size_t operator()(ll::memory::Signature const& s) const noexcept {
        return ll::hash_utils::HashCombiner{s.size()}.addRange(s);
    }
};
template <>
struct hash<ll::memory::SignatureView> {
    size_t operator()(ll::memory::SignatureView const& s) const noexcept {
        return ll::hash_utils::HashCombiner{s.size()}.addRange(s);
    }
};
} // namespace std
