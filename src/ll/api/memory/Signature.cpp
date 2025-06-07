#include "ll/api/memory/Signature.h"

#include <execution>

#include "ll/api/base/Containers.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory {

struct SigCacheKey {
    std::span<std::byte> range;
    Signature            signature;

    [[nodiscard]] constexpr bool operator==(SigCacheKey const& other) const {
        return range.data() == other.range.data() && range.size() == other.range.size() && signature == other.signature;
    }
};

static size_t hash_value(SigCacheKey const& k) {
    return hash_utils::HashCombiner{}.add(k.range.data()).add(k.range.size()).add(k.signature);
}

void* SignatureView::resolve(std::span<std::byte> range, bool disableErrorOutput) const {
    static ConcurrentDenseMap<SigCacheKey, void*> resultCache;

    auto  key = SigCacheKey(range, Signature{*this});
    void* res{};
    resultCache.lazy_emplace_l(
        key,
        [&](auto& pair) { res = pair.second; },
        [&](auto const& ctor) {
            res = uncachedResolve(range);
            ctor(std::move(key), res);
        }
    );
    if (!res && !disableErrorOutput) {
        getLogger().fatal("Couldn't find: {}", toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}

void* SignatureView::resolve(bool disableErrorOutput) const {
    auto res = resolve(sys_utils::getImageRange(), true);
    if (!res && !disableErrorOutput) {
        getLogger().fatal("Couldn't find: {}", toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
std::string SignatureView::toString(bool alignWildcard, bool upperCase) const {
    std::string result;
    bool        first = true;
    for (auto& element : elements) {
        if (first) {
            first = false;
        } else {
            result += " ";
        }
        if (element.isWildcard()) {
            result += alignWildcard ? "??" : "?";
        } else {
            auto x  = static_cast<uchar>(*element);
            result += string_utils::charFromInt(upperCase, x / 16);
            result += string_utils::charFromInt(upperCase, x % 16);
        }
    }
    return result;
}

} // namespace ll::memory
