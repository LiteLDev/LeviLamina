#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "pl/SymbolProvider.h"

#include "ll/api/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "demangler/Demangle.h"

namespace ll::memory {

std::string demangleSymbol(std::string_view symbol) {
    std::string res;
    if (demangler::nonMicrosoftDemangle(symbol, res)) return res;
    else if (symbol.starts_with("_")) { // some platform's external symbol style...
        demangler::nonMicrosoftDemangle(symbol.substr(1), res);
    } else {
        if (char* demangled = demangler::microsoftDemangle(
                symbol,
                nullptr,
                nullptr,
                (demangler::MSDemangleFlags)(demangler::MSDF_NoAccessSpecifier | demangler::MSDF_NoCallingConvention)
            )) {
            res = demangled;
            std::free(demangled);
        } else {
            res = symbol;
        }
    }
    return res;
}
FuncPtr resolveSymbol(char const* symbol) {
    auto res = pl::symbol_provider::pl_resolve_symbol_silent(symbol);
    if (res == nullptr) {
        getLogger().fatal("Couldn't find: {}", demangleSymbol(symbol));
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
FuncPtr resolveSymbol(std::string_view symbol, bool disableErrorOutput) {
    auto res = pl::symbol_provider::pl_resolve_symbol_silent_n(symbol.data(), symbol.size());
    if (!disableErrorOutput && res == nullptr) {
        getLogger().fatal("Couldn't find: {}", demangleSymbol(symbol));
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
FuncPtr resolveSignature(std::string_view signature) { return resolveSignature(signature, sys_utils::getImageRange()); }

// TODO: Find a better cross-platform search library
FuncPtr resolveSignature(std::string_view signature, std::span<std::byte> range) {
    if (range.empty()) {
        return nullptr;
    }
    std::span<uchar> span = *(std::span<uchar>*)&range;

    std::vector<std::optional<uchar>> pattern;
    for (size_t i = 0; i < signature.size(); ++i) {
        auto& c = signature[i];
        if (c == ' ') {
            continue;
        } else if (c == '?') {
            pattern.emplace_back(std::nullopt);
        } else if (isxdigit(c) && (++i < signature.size() && isxdigit(signature[i]))) {
            pattern.emplace_back(string_utils::svtouc(signature.substr(i - 1, 2), nullptr, 16).value());
        } else {
            return nullptr;
        }
    }
    if (pattern.empty()) {
        return nullptr;
    }
    for (size_t i = 0; i < span.size() - pattern.size(); ++i) {
        bool   match = true;
        size_t iter  = 0;
        for (auto& c : pattern) {
            if (span[i + iter] != c) {
                match = false;
                break;
            }
            iter++;
        }
        if (match) {
            return &span[i];
        }
    }
    return nullptr;
}

std::vector<std::string> lookupSymbol(FuncPtr func) {
    std::vector<std::string> symbols;
    size_t                   length;
    auto                     result = pl::symbol_provider::pl_lookup_symbol(func, &length);
    for (size_t i = 0; i < length; i++) {
        symbols.emplace_back(result[i]);
    }
    if (result) pl::symbol_provider::pl_free_lookup_result(result);
    return symbols;
}
size_t getUsableSize(void* ptr) { return getDefaultAllocator().getUsableSize(ptr); }

[[noreturn]] void throwMemoryException(size_t size) {
    if (size == std::numeric_limits<size_t>::max()) {
        throw std::bad_array_new_length();
    } else {
        throw std::bad_alloc();
    }
}
} // namespace ll::memory
