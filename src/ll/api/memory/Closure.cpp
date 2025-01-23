#include "ll/api/memory/Closure.h"

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory {
extern "C" { // from trampoline
std::size_t generate_trampoline(void* jit_code_address, void const* call_target, int = 0);
void*       _asm_get_this_pointer();
}
void* ClosureBase::getClosureData() { return _asm_get_this_pointer(); }

ClosureBase::ClosureBase(void const* impl) {
    storage.alloc(sizeof(PackedSelf));
    generate_trampoline(new (storage.writable()) PackedSelf{.self = this}, impl);
}
} // namespace ll::memory
