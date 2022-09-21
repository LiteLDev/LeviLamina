/**
 * @file  MC/BiomeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1216170462
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @hash   -210476200
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
#endif
    /**
     * @hash   -527105239
     * @symbol ??0BiomeRegistry@@QEAA@XZ
     */
    MCAPI BiomeRegistry();
    /**
     * @hash   -1601612393
     * @symbol ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
     */
    MCAPI void forEachBiome(class std::function<void (class Biome &)>) const;
    /**
     * @hash   381485715
     * @symbol ?getTagRegistry@BiomeRegistry@@QEAAAEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> & getTagRegistry();
    /**
     * @hash   -2114282739
     * @symbol ?getTagRegistry@BiomeRegistry@@QEBAAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const & getTagRegistry() const;
    /**
     * @hash   1963312479
     * @symbol ?initServerFromPacks@BiomeRegistry@@QEAAXAEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI void initServerFromPacks(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @hash   1415745510
     * @symbol ?isRegistrationFinished@BiomeRegistry@@QEBA_NXZ
     */
    MCAPI bool isRegistrationFinished() const;
    /**
     * @symbol ?lookupByHash@BiomeRegistry@@QEBAPEAVBiome@@AEBVHashedString@@@Z
     */
    MCAPI class Biome * lookupByHash(class HashedString const &) const;
    /**
     * @hash   -2030979664
     * @symbol ?lookupById@BiomeRegistry@@QEBAPEAVBiome@@H@Z
     */
    MCAPI class Biome * lookupById(int) const;
    /**
     * @hash   512419206
     * @symbol ?lookupByName@BiomeRegistry@@QEBAPEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Biome * lookupByName(std::string const &) const;
    /**
     * @hash   1247437919
     * @symbol ?registerBiome@BiomeRegistry@@QEAAAEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Biome & registerBiome(std::string const &);
    /**
     * @hash   -375252631
     * @symbol ?registrationFinished@BiomeRegistry@@QEAAXXZ
     */
    MCAPI void registrationFinished();

//private:
    /**
     * @hash   -1026829665
     * @symbol ?_addToInheritanceTree@BiomeRegistry@@AEAA_NAEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &, class Json::Value &&, class SemVersion const &);
    /**
     * @hash   423903967
     * @symbol ?_buildInheritanceTree@BiomeRegistry@@AEAA?AV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEAVResourcePackManager@@@Z
     */
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent> _buildInheritanceTree(class ResourcePackManager &);
    /**
     * @hash   365598663
     * @symbol ?_initTagRegistry@BiomeRegistry@@AEAAXXZ
     */
    MCAPI void _initTagRegistry();
    /**
     * @hash   -434996924
     * @symbol ?_loadSingleBiome@BiomeRegistry@@AEAA_NAEAVResourcePackManager@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool _loadSingleBiome(class ResourcePackManager &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &);
    /**
     * @hash   -1404785607
     * @symbol ?_mergeDataInheritance@BiomeRegistry@@AEAAXAEAVValue@Json@@AEAVSemVersion@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBUBiomeParent@1@@Z
     */
    MCAPI void _mergeDataInheritance(class Json::Value &, class SemVersion &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, struct BiomeRegistry::BiomeParent const &);

private:

};