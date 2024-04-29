#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "pl/SymbolProvider.h"

#include "ll/api/Logger.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "memoryapi.h"

namespace ll::memory {

FuncPtr resolveSymbol(char const* symbol) {
    static Logger sLogger("LeviLamina", true);
    auto          res = pl::symbol_provider::pl_resolve_symbol_silent(symbol);
    if (res == nullptr) {
        sLogger.fatal("Could not find symbol in memory: {}", symbol);
        sLogger.fatal("In module: {}", win_utils::getCallerModuleFileName());
    }
    return res;
}

FuncPtr resolveSymbol(std::string_view symbol, bool disableErrorOutput) {
    static Logger sLogger("LeviLamina", true);
    auto          res = pl::symbol_provider::pl_resolve_symbol_silent_n(symbol.data(), symbol.size());
    if (!disableErrorOutput && res == nullptr) {
        sLogger.fatal("Could not find symbol in memory: {}", symbol);
        sLogger.fatal("In module: {}", win_utils::getCallerModuleFileName());
    }
    return res;
}

FuncPtr resolveSignature(std::string_view signature) {
    static auto      bdsSpan = win_utils::getImageRange();
    std::span<uchar> span;

    if (auto pos = signature.find('!'); pos != std::string_view::npos) {
        span      = win_utils::getImageRange(signature.substr(0, pos));
        signature = signature.substr(1 + pos);
    } else {
        span = bdsSpan;
    }
    if (span.empty()) {
        return nullptr;
    }
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

void modify(void* ptr, size_t len, const std::function<void()>& callback) {
    std::unique_ptr<thread::GlobalThreadPauser> pauser;
    if (getServerStatus() != ServerStatus::Default) {
        pauser = std::make_unique<thread::GlobalThreadPauser>();
    }
    DWORD oldProtect;
    VirtualProtect(ptr, len, PAGE_EXECUTE_READWRITE, &oldProtect);
    callback();
    VirtualProtect(ptr, len, oldProtect, &oldProtect);
}

size_t getUsableSize(void* ptr) { return getDefaultAllocator().getUsableSize(ptr); }

} // namespace ll::memory
