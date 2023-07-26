#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimPatternRegistry {

public:
    // prevent constructor by default
    TrimPatternRegistry& operator=(TrimPatternRegistry const&) = delete;
    TrimPatternRegistry(TrimPatternRegistry const&)            = delete;
    TrimPatternRegistry()                                      = delete;

public:
    /**
     * @symbol
     * ?getAllEntries\@TrimPatternRegistry\@\@QEBA?AV?$vector\@UTrimPattern\@\@V?$allocator\@UTrimPattern\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimPattern> getAllEntries() const; // NOLINT
    /**
     * @symbol
     * ?getPatternIdByItem\@TrimPatternRegistry\@\@QEBA?AV?$optional\@VHashedString\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<class HashedString> getPatternIdByItem(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?initializeServer\@TrimPatternRegistry\@\@QEAAXVItemRegistryRef\@\@\@Z
     */
    MCAPI void initializeServer(class ItemRegistryRef); // NOLINT
};
