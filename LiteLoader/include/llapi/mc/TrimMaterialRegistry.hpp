/**
 * @file  TrimMaterialRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TrimMaterialRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMMATERIALREGISTRY
public:
    class TrimMaterialRegistry& operator=(class TrimMaterialRegistry const &) = delete;
    TrimMaterialRegistry(class TrimMaterialRegistry const &) = delete;
    TrimMaterialRegistry() = delete;
#endif

public:
    /**
     * @symbol ?getAllEntries\@TrimMaterialRegistry\@\@QEBAAEBV?$vector\@UTrimMaterial\@\@V?$allocator\@UTrimMaterial\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct TrimMaterial> const & getAllEntries() const;
    /**
     * @symbol ?getTrimMaterialByItemName\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial> getTrimMaterialByItemName(class HashedString const &) const;
    /**
     * @symbol ?getTrimMaterialByMaterialId\@TrimMaterialRegistry\@\@QEBA?AV?$optional\@UTrimMaterial\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::optional<struct TrimMaterial> getTrimMaterialByMaterialId(class HashedString const &) const;
    /**
     * @symbol ?initializeServer\@TrimMaterialRegistry\@\@QEAAXXZ
     */
    MCAPI void initializeServer();

};
