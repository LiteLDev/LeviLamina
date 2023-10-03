#include "liteloader/api/memory/MemoryUtils.h"

#include "pl/SymbolProvider.h"

#include "liteloader/api/utils/WinHelper.h"

namespace ll::memory {

FuncPtr resolveSymbol(const char* symbol) { return pl::symbol_provider::pl_resolve_symbol(symbol); }

FuncPtr resolveSignature(const char* signature) { return reinterpret_cast<FuncPtr>(FindSig(signature)); }

std::vector<std::string> lookupSymbol(FuncPtr func) {
    std::vector<std::string> symbols;

    size_t length;
    auto   result = pl::symbol_provider::pl_lookup_symbol(func, &length);
    for (size_t i = 0; i < length; i++) { symbols.emplace_back(result[i]); }
    pl::symbol_provider::pl_free_lookup_result(result);
    return symbols;
}

} // namespace ll::memory
