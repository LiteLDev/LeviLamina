#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimPatternRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMPATTERNREGISTRY
public:
    TrimPatternRegistry& operator=(TrimPatternRegistry const&) = delete;
    TrimPatternRegistry(TrimPatternRegistry const&)            = delete;
    TrimPatternRegistry()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?getAllEntries\@TrimPatternRegistry\@\@QEBA?AV?$vector\@UTrimPattern\@\@V?$allocator\@UTrimPattern\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimPattern> getAllEntries() const;
    /**
     * @symbol
     * ?getPatternIdByItem\@TrimPatternRegistry\@\@QEBA?AV?$optional\@VHashedString\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<class HashedString> getPatternIdByItem(class HashedString const&) const;
    /**
     * @symbol ?initializeServer\@TrimPatternRegistry\@\@QEAAXVItemRegistryRef\@\@\@Z
     */
    MCAPI void initializeServer(class ItemRegistryRef);
};
