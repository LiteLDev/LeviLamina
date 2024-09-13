#pragma once

#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::memory {
class Symbol;
template <size_t N>
class FixedSymbol;

class SymbolView {
    std::string_view sym;

public:
    [[nodiscard]] constexpr SymbolView() = default;

    [[nodiscard]] constexpr SymbolView(SymbolView&&) noexcept          = default;
    LL_MAY_CONSTEXPR SymbolView& operator=(SymbolView&&) noexcept      = default;
    [[nodiscard]] constexpr SymbolView(SymbolView const&) noexcept     = default;
    LL_MAY_CONSTEXPR SymbolView& operator=(SymbolView const&) noexcept = default;

    [[nodiscard]] constexpr explicit SymbolView(std::string_view symbol) : sym(symbol) {}

    [[nodiscard]] constexpr SymbolView(Symbol const& symbol);
    template <size_t N>
    [[nodiscard]] constexpr SymbolView(FixedSymbol<N> const& symbol);

    [[nodiscard]] constexpr size_t size() const { return sym.size(); }

    LLNDAPI void* resolve(bool disableErrorOutput = false) const;

    [[nodiscard]] constexpr std::string_view raw() const { return sym; }

    LLNDAPI std::string toString() const;
};

class Symbol {
    std::string sym;

public:
    [[nodiscard]] explicit constexpr Symbol(std::string symbol) : sym(std::move(symbol)) {}

    LLNDAPI static std::vector<Symbol> fromAddress(void*);

    [[nodiscard]] constexpr size_t size() const { return sym.size(); }

    [[nodiscard]] constexpr SymbolView view() const { return SymbolView{sym}; }
};

[[nodiscard]] constexpr SymbolView::SymbolView(Symbol const& symbol) : SymbolView(symbol.view()) {}

template <size_t N>
class FixedSymbol {
public:
    char sym[N + 1]{};

    [[nodiscard]] consteval FixedSymbol(std::string_view symbol) { std::copy_n(symbol.data(), symbol.size(), sym); }
    [[nodiscard]] consteval FixedSymbol(char const* symbol) { std::copy_n(symbol, N, sym); }

    [[nodiscard]] consteval size_t size() const { return N; }

    [[nodiscard]] constexpr SymbolView view() const { return SymbolView{std::string_view{sym}}; }
};
template <size_t N>
FixedSymbol(char const (&)[N]) -> FixedSymbol<N - 1>;

template <size_t N>
[[nodiscard]] constexpr SymbolView::SymbolView(FixedSymbol<N> const& symbol) : SymbolView(symbol.view()) {}

template <FixedSymbol symbol>
inline void* symbolAddressCache = symbol.view().resolve();

} // namespace ll::memory

namespace ll::inline literals::inline memory_literals {
template <memory::FixedSymbol symbol>
consteval memory::SymbolView operator""_symv() noexcept {
    return symbol.view();
}
template <memory::FixedSymbol symbol>
constexpr void* operator""_sym() noexcept {
    return memory::symbolAddressCache<symbol>;
}
} // namespace ll::inline literals::inline memory_literals
