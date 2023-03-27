#include "llapi/memory/MemoryUtils.h"

#include "pl/SymbolProvider.h"

#include "llapi/utils/WinHelper.h"

namespace ll::memory {

FuncPtr resolveSymbol(const char* symbol) { return pl::symbol_provider::pl_resolve_symbol(symbol); }

FuncPtr resolveSignature(const char* signature) { return reinterpret_cast<FuncPtr>(FindSig(signature)); }

} // namespace ll::memory
