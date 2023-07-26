/**
 * @file  BiomeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeRegistry.
 *
 */
class BiomeRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct BiomeParent {
    BiomeParent() = delete;
    BiomeParent(BiomeParent const&) = delete;
    BiomeParent(BiomeParent const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEREGISTRY
public:
    class BiomeRegistry& operator=(class BiomeRegistry const &) = delete;
    BiomeRegistry(class BiomeRegistry const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEREGISTRY
    /**
     * @symbol  ?getEntityRegistry\@BiomeRegistry\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @symbol  ?getEntityRegistry\@BiomeRegistry\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
#endif
    /**
     * @symbol  ??0BiomeRegistry\@\@QEAA\@XZ
     */
    MCAPI BiomeRegistry();
    /**
     * @symbol  ?forEachBiome\@BiomeRegistry\@\@QEBAXV?$function\@$$A6AXAEAVBiome\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachBiome(class std::function<void (class Biome &)>) const;
    /**
     * @symbol  ?getTagRegistry\@BiomeRegistry\@\@QEAAAEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> & getTagRegistry();
    /**
     * @symbol  ?getTagRegistry\@BiomeRegistry\@\@QEBAAEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const & getTagRegistry() const;
    /**
     * @symbol  ?initServerFromPacks\@BiomeRegistry\@\@QEAAXAEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI void initServerFromPacks(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @symbol  ?isRegistrationFinished\@BiomeRegistry\@\@QEBA_NXZ
     */
    MCAPI bool isRegistrationFinished() const;
    /**
     * @symbol  ?lookupByHash\@BiomeRegistry\@\@QEBAPEAVBiome\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Biome * lookupByHash(class HashedString const &) const;
    /**
     * @symbol  ?lookupById\@BiomeRegistry\@\@QEBAPEAVBiome\@\@H\@Z
     */
    MCAPI class Biome * lookupById(int) const;
    /**
     * @symbol  ?lookupByName\@BiomeRegistry\@\@QEBAPEAVBiome\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome * lookupByName(std::string const &) const;
    /**
     * @symbol  ?registerBiome\@BiomeRegistry\@\@QEAAAEAVBiome\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome & registerBiome(std::string const &);
    /**
     * @symbol  ?registrationFinished\@BiomeRegistry\@\@QEAAXXZ
     */
    MCAPI void registrationFinished();

//private:
    /**
     * @symbol  ?_addToInheritanceTree\@BiomeRegistry\@\@AEAA_NAEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &, class Json::Value &&, class SemVersion const &);
    /**
     * @symbol  ?_buildInheritanceTree\@BiomeRegistry\@\@AEAA?AV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent> _buildInheritanceTree(class ResourcePackManager &);
    /**
     * @symbol  ?_initTagRegistry\@BiomeRegistry\@\@AEAAXXZ
     */
    MCAPI void _initTagRegistry();
    /**
     * @symbol  ?_loadSingleBiome\@BiomeRegistry\@\@AEAA_NAEAVResourcePackManager\@\@AEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _loadSingleBiome(class ResourcePackManager &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &);
    /**
     * @symbol  ?_mergeDataInheritance\@BiomeRegistry\@\@AEAAXAEAVValue\@Json\@\@AEAVSemVersion\@\@AEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBUBiomeParent\@1\@\@Z
     */
    MCAPI void _mergeDataInheritance(class Json::Value &, class SemVersion &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, struct BiomeRegistry::BiomeParent const &);

private:

};