#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimMaterialRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMMATERIALREGISTRY
public:
    TrimMaterialRegistry& operator=(TrimMaterialRegistry const&) = delete;
    TrimMaterialRegistry(TrimMaterialRegistry const&)            = delete;
    TrimMaterialRegistry()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?getAllEntries\@TrimMaterialRegistry\@\@QEBAAEBV?$vector\@UTrimMaterial\@\@V?$allocator\@UTrimMaterial\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimMaterial> const& getAllEntries() const;
    /**
     * @symbol
     * ?getTrimMaterialByItemName\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial> getTrimMaterialByItemName(class HashedString const&) const;
    /**
     * @symbol
     * ?getTrimMaterialByMaterialId\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial> getTrimMaterialByMaterialId(class HashedString const&) const;
    /**
     * @symbol ?initializeServer\@TrimMaterialRegistry\@\@QEAAXXZ
     */
    MCAPI void initializeServer();
};
