#include "ll/api/memory/Memory.h"

#include "pl/SymbolProvider.h"

#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"

#include "memoryapi.h"

#include <optional>
#include <vector>
#include <ranges>

using namespace ll::utils;

namespace ll::memory {

FuncPtr resolveSymbol(char const* symbol) { return pl::symbol_provider::pl_resolve_symbol(symbol); }

FuncPtr resolveSignature(char const* signature) {
    std::string_view pattern = signature;
    void* match = nullptr;

    for (auto& c : win_utils::getImageRangeSpan()) {
        while (pattern.starts_with(' ')) pattern.remove_prefix(1);
        if (pattern.empty()) return match;
        if (!match) match = &c;
        if (pattern.starts_with('?')) {
            pattern.remove_prefix(1);
        } else if (c == string_utils::svtouc(pattern.substr(0, 2), nullptr, 16)) {
            pattern.remove_prefix(2);
        } else {
            pattern = signature;
            match   = nullptr;
        }
    }
    // std::vector<std::optional<uchar>> pattern;
    // for (;;) {
    //     while (signature.starts_with(' ')) signature.remove_prefix(1);
    //     if (signature.empty()) break;
    //     if (signature.starts_with('?')) {
    //         pattern.emplace_back(std::nullopt);
    //         signature.remove_prefix(1);
    //     } else {
    //         pattern.emplace_back(string_utils::svtouc(signature.substr(0, 2), nullptr, 16));
    //         signature.remove_prefix(2);
    //     }
    // }
    // if (pattern.empty()) { return nullptr; }
    // auto span = win_utils::getImageRangeSpan();
    // for (size_t i = 0; i < span.size() - pattern.size(); ++i) {
    //     bool   match = true;
    //     size_t iter  = 0;
    //     for (auto& c : pattern) {
    //         if (c && span[i + iter] != *c) {
    //             match = false;
    //             break;
    //         }
    //         iter++;
    //     }
    //     if (match) { return &span[i]; }
    // }
    return nullptr;
}

std::vector<std::string> lookupSymbol(FuncPtr func) {
    std::vector<std::string> symbols;

    size_t length;
    auto   result = pl::symbol_provider::pl_lookup_symbol(func, &length);
    for (size_t i = 0; i < length; i++) { symbols.emplace_back(result[i]); }
    pl::symbol_provider::pl_free_lookup_result(result);
    return symbols;
}

void modify(void* ptr, size_t len, const std::function<void()>& callback) {
    DWORD oldProtect;
    VirtualProtect(ptr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
    callback();
    VirtualProtect(ptr, len, oldProtect, &oldProtect);
}

} // namespace ll::memory
