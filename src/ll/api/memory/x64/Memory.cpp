#include "ll/api/memory/Memory.h"

namespace ll::memory {
void* unwrapFuncAddress(void* ptr) noexcept {
    if (*(char*)ptr == '\xE9') {
        (uintptr_t&)(ptr) += *(int*)((uintptr_t)ptr + 1);
    }
    return ptr;
}
} // namespace ll::memory
