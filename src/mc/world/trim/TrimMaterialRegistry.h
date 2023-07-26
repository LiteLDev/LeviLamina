#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimMaterialRegistry {

public:
    // prevent constructor by default
    TrimMaterialRegistry& operator=(TrimMaterialRegistry const&) = delete;
    TrimMaterialRegistry(TrimMaterialRegistry const&)            = delete;
    TrimMaterialRegistry()                                       = delete;

public:
    /**
     * @symbol
     * ?getAllEntries\@TrimMaterialRegistry\@\@QEBAAEBV?$vector\@UTrimMaterial\@\@V?$allocator\@UTrimMaterial\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimMaterial> const& getAllEntries() const; // NOLINT
    /**
     * @symbol
     * ?getTrimMaterialByItemName\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial> getTrimMaterialByItemName(class HashedString const&) const; // NOLINT
    /**
     * @symbol
     * ?getTrimMaterialByMaterialId\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial>
    getTrimMaterialByMaterialId(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?initializeServer\@TrimMaterialRegistry\@\@QEAAXXZ
     */
    MCAPI void initializeServer(); // NOLINT
};
