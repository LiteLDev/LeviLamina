#include <llapi/memory/MemoryUtils.h>

#include <pl/SymbolProvider.h>

#include <llapi/utils/WinHelper.h>

namespace ll::memory {

template <>
FuncPtr getPtr(const char* t) {
    auto p = pl::symbol_provider::pl_resolve_symbol(t);
    return p != nullptr ? p : reinterpret_cast<void*>(FindSig(t));
}

} // namespace ll::memory
