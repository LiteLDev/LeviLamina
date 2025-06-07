#include "ll/api/memory/Signature.h"

#include <execution>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "libhat.hpp"

namespace ll::memory {
void* SignatureView::uncachedResolve(std::span<std::byte> range) const {
    auto result = hat::find_pattern(range.begin(), range.end(), *(hat::signature_view*)&elements);
    return result.has_result() ? (void*)result.get() : nullptr;
}
} // namespace ll::memory
