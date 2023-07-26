#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TrimPatternRegistryHardCodedInit {
/**
 * @symbol
 * ?getPatterns\@TrimPatternRegistryHardCodedInit\@\@YA?AV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@VItemRegistryRef\@\@\@Z
 */
MCAPI class std::unordered_map<
    class HashedString,
    class HashedString,
    struct std::hash<class HashedString>,
    struct std::equal_to<class HashedString>,
    class std::allocator<struct std::pair<class HashedString const, class HashedString>>>
    getPatterns(class ItemRegistryRef); // NOLINT

}; // namespace TrimPatternRegistryHardCodedInit
