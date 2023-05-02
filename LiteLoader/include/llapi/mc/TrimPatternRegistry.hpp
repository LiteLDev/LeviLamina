/**
 * @file  TrimPatternRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TrimPatternRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMPATTERNREGISTRY
public:
    class TrimPatternRegistry& operator=(class TrimPatternRegistry const &) = delete;
    TrimPatternRegistry(class TrimPatternRegistry const &) = delete;
    TrimPatternRegistry() = delete;
#endif

public:
    /**
     * @symbol ?getAllEntries\@TrimPatternRegistry\@\@QEBA?AV?$vector\@UTrimPattern\@\@V?$allocator\@UTrimPattern\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimPattern> getAllEntries() const;
    /**
     * @symbol ?getPatternIdByItem\@TrimPatternRegistry\@\@QEBA?AV?$optional\@VHashedString\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<class HashedString> getPatternIdByItem(class HashedString const &) const;
    /**
     * @symbol ?initializeServer\@TrimPatternRegistry\@\@QEAAXVItemRegistryRef\@\@\@Z
     */
    MCAPI void initializeServer(class ItemRegistryRef);

};
