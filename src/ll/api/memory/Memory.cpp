#include "ll/api/memory/Memory.h"

#include "pl/SymbolProvider.h"

#include "ll/api/utils/WinUtils.h"

#include <windows.h>

using namespace ll::utils;

namespace ll::memory {

FuncPtr resolveSymbol(char const* symbol) { return pl::symbol_provider::pl_resolve_symbol(symbol); }

FuncPtr resolveSignature(char const* signature) { return reinterpret_cast<FuncPtr>(win_utils::findSig(signature)); }

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

Handle getModuleHandle(void* addr) {
    HMODULE hModule = nullptr;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCTSTR>(addr),
        &hModule
    );
    return hModule;
}

} // namespace ll::memory
