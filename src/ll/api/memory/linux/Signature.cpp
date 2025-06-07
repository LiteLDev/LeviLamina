#include "ll/api/memory/Signature.h"

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory {
void* SignatureView::uncachedResolve(std::span<std::byte> range) const {
    const auto firstByte = *elements.front();
    const auto scanEnd   = range.end() - elements.size() + 1;

    for (auto i = range.begin(); i != scanEnd; i++) {
        i = std::find(i, scanEnd, firstByte);
        if (i == scanEnd) [[unlikely]] {
            break;
        }
        if (std::equal(elements.begin() + 1, elements.end(), i + 1, std::equal_to<>{})) [[unlikely]] {
            return &*i;
        }
    }
    return nullptr;
}
} // namespace ll::memory
