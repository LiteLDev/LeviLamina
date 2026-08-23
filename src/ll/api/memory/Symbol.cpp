#include "ll/api/memory/Symbol.h"

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "demangler/Demangle.h"
#include "pl/SymbolProvider.h"

namespace ll::memory {
void* SymbolView::resolve(bool disableErrorOutput) const {
    static ll::ConcurrentDenseMap<std::string, void*> resultCache;

    void* res{};
    resultCache.lazy_emplace_l(
        sym,
        [&](auto& pair) { res = pair.second; },
        [&](auto const& ctor) {
            res = pl::symbol_provider::pl_resolve_symbol_silent_n(sym.data(), sym.size());
            ctor(sym, res);
        }
    );

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
} // namespace ll::memory
