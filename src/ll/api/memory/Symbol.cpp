#include "ll/api/memory/Symbol.h"

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "demangler/Demangle.h"
#include "pl/SymbolProvider.h"

namespace ll::memory {
void* SymbolView::resolve(bool disableErrorOutput) const {
    auto res = pl::symbol_provider::pl_resolve_symbol_silent_n(sym.data(), sym.size());
    if (!disableErrorOutput && res == nullptr) {
        getLogger().fatal("Couldn't find: {}", toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
std::string SymbolView::toString() const {
    std::string res;
    if (demangler::nonMicrosoftDemangle(sym, res)) return res;
    else if (sym.starts_with("_")) { // some platform's external sym style...
        demangler::nonMicrosoftDemangle(sym.substr(1), res);
    } else {
        if (char* demangled = demangler::microsoftDemangle(
                sym,
                nullptr,
                nullptr,
                (demangler::MSDemangleFlags)(demangler::MSDF_NoAccessSpecifier | demangler::MSDF_NoCallingConvention)
            )) {
            res = demangled;
            std::free(demangled);
        } else {
            res = sym;
        }
    }
    return res;
}
std::vector<Symbol> Symbol::fromAddress(void* func) {
    std::vector<Symbol> result;
    size_t              length{};
    auto                symbols = pl::symbol_provider::pl_lookup_symbol(func, &length);
    for (size_t i = 0; i < length; i++) {
        result.emplace_back(symbols[i]);
    }
    if (symbols) pl::symbol_provider::pl_free_lookup_result(symbols);
    return result;
}
} // namespace ll::memory
