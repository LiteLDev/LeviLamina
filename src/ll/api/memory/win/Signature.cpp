#include "ll/api/memory/Signature.h"

#include <execution>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "libhat.hpp"

namespace ll::memory {
void* SignatureView::resolve(std::span<std::byte> range, bool disableErrorOutput) const {
    auto result = hat::find_pattern(range.begin(), range.end(), *(hat::signature_view*)&elements);
    if (result.has_result() && !disableErrorOutput) {
        getLogger().fatal("Couldn't find: {}", toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return (void*)result.get();
}
} // namespace ll::memory
