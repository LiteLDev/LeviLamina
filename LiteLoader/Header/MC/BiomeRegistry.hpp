/**
 * @file  BiomeRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
     * @hash   -1216170462
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     * @hash   -210476200
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
#endif
    /**
     * @symbol ??0BiomeRegistry@@QEAA@XZ
     * @hash   -527105239
     */
    MCAPI BiomeRegistry();
    /**
     * @symbol ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
     * @hash   -1601612393
     */
    MCAPI void forEachBiome(class std::function<void (class Biome &)>) const;
    /**
     * @symbol ?getTagRegistry@BiomeRegistry@@QEAAAEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     * @hash   381485715
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> & getTagRegistry();
    /**
     * @symbol ?getTagRegistry@BiomeRegistry@@QEBAAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     * @hash   -2114282739
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const & getTagRegistry() const;
    /**
     * @symbol ?initServerFromPacks@BiomeRegistry@@QEAAXAEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
     * @hash   1963312479
     */
    MCAPI void initServerFromPacks(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @symbol ?isRegistrationFinished@BiomeRegistry@@QEBA_NXZ
     * @hash   1415745510
     */
    MCAPI bool isRegistrationFinished() const;
    /**
     * @symbol ?lookupById@BiomeRegistry@@QEBAPEAVBiome@@H@Z
     * @hash   -2030979664
     */
    MCAPI class Biome * lookupById(int) const;
    /**
     * @symbol ?lookupByName@BiomeRegistry@@QEBAPEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   512419206
     */
    MCAPI class Biome * lookupByName(std::string const &) const;
    /**
     * @symbol ?registerBiome@BiomeRegistry@@QEAAAEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1247437919
     */
    MCAPI class Biome & registerBiome(std::string const &);
    /**
     * @symbol ?registrationFinished@BiomeRegistry@@QEAAXXZ
     * @hash   -375252631
     */
    MCAPI void registrationFinished();

//private:
    /**
     * @symbol ?_addToInheritanceTree@BiomeRegistry@@AEAA_NAEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -1026829665
     */
    MCAPI bool _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &, class Json::Value &&, class SemVersion const &);
    /**
     * @symbol ?_buildInheritanceTree@BiomeRegistry@@AEAA?AV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEAVResourcePackManager@@@Z
     * @hash   423903967
     */
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent> _buildInheritanceTree(class ResourcePackManager &);
    /**
     * @symbol ?_initTagRegistry@BiomeRegistry@@AEAAXXZ
     * @hash   365598663
     */
    MCAPI void _initTagRegistry();
    /**
     * @symbol ?_loadSingleBiome@BiomeRegistry@@AEAA_NAEAVResourcePackManager@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -434996924
     */
    MCAPI bool _loadSingleBiome(class ResourcePackManager &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &);
    /**
     * @symbol ?_mergeDataInheritance@BiomeRegistry@@AEAAXAEAVValue@Json@@AEAVSemVersion@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBUBiomeParent@1@@Z
     * @hash   -1404785607
     */
    MCAPI void _mergeDataInheritance(class Json::Value &, class SemVersion &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, struct BiomeRegistry::BiomeParent const &);

private:

};