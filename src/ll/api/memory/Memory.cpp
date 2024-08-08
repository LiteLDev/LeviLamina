#include "ll/api/memory/Memory.h"

#include <optional>
#include <vector>

#include "libhat.hpp"
#include "pl/SymbolProvider.h"

#include "ll/api/Logger.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "memoryapi.h"

#include "demangler/Demangle.h"

namespace ll::memory {

std::string demangleSymbol(std::string_view symbol) {
    std::string res;
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
    return res;
}

FuncPtr resolveSymbol(char const* symbol) {
    auto res = pl::symbol_provider::pl_resolve_symbol_silent(symbol);
    if (res == nullptr) {
        getLogger().fatal("Could not find symbol in memory: {}", demangleSymbol(symbol));
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}

FuncPtr resolveSymbol(std::string_view symbol, bool disableErrorOutput) {
    auto res = pl::symbol_provider::pl_resolve_symbol_silent_n(symbol.data(), symbol.size());
    if (!disableErrorOutput && res == nullptr) {
        getLogger().fatal("Could not find symbol in memory: {}", demangleSymbol(symbol));
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}

FuncPtr resolveSignature(std::string_view signature) { return resolveSignature(signature, sys_utils::getImageRange()); }

FuncPtr resolveSignature(std::string_view signature, std::span<std::byte> range) {
    if (range.empty()) {
        return nullptr;
    }
    if (auto res = hat::parse_signature(signature); !res.has_value()) {
        return nullptr;
    } else {
        return const_cast<std::byte*>(hat::find_pattern(range.begin(), range.end(), res.value()).get());
    }
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
