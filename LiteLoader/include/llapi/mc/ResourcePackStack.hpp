/**
 * @file  ResourcePackStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackStack.
 *
 */
class ResourcePackStack {

#define AFTER_EXTRA
// Add Member There
public:
    std::vector<PackInstance> mStack;
    std::unique_ptr<PackSourceReport> mPackSourceReport;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKSTACK
public:
    class ResourcePackStack& operator=(class ResourcePackStack const &) = delete;
    ResourcePackStack(class ResourcePackStack const &) = delete;
    ResourcePackStack() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ResourcePackStack();
    /**
     * @hash   -607551181
     * @vftbl  1
     * @symbol ?loadAllVersionsOf@ResourcePackStack@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /**
     * @hash   -1749928930
     * @vftbl  2
     * @symbol ?loadAllVersionsOf@ResourcePackStack@@UEBA_NAEBVResourceLocation@@AEAVResourcePackMergeStrategy@@@Z
     */
    virtual bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    /**
     * @hash   -2089414424
     * @symbol ?add@ResourcePackStack@@QEAAXVPackInstance@@AEBVIResourcePackRepository@@_N@Z
     */
    MCAPI void add(class PackInstance, class IResourcePackRepository const &, bool);
    /**
     * @hash   1711506481
     * @symbol ?generateAssetSet@ResourcePackStack@@QEAAXXZ
     */
    MCAPI void generateAssetSet();
    /**
     * @hash   2103135595
     * @symbol ?getSplitStacks@ResourcePackStack@@QEBAXAEAV1@0@Z
     */
    MCAPI void getSplitStacks(class ResourcePackStack &, class ResourcePackStack &) const;
    /**
     * @hash   -784595637
     * @symbol ?hasCapabilityInStack@ResourcePackStack@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool hasCapabilityInStack(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1755442642
     * @symbol ?hasPlatformLockedContent@ResourcePackStack@@QEBA_NXZ
     */
    MCAPI bool hasPlatformLockedContent() const;
    /**
     * @hash   -519614565
     * @symbol ?removeDuplicates@ResourcePackStack@@QEAAXXZ
     */
    MCAPI void removeDuplicates();
    /**
     * @hash   1231415576
     * @symbol ?removeIf@ResourcePackStack@@QEAAXAEBV?$function@$$A6A_NAEBVPackInstance@@@Z@std@@@Z
     */
    MCAPI void removeIf(class std::function<bool (class PackInstance const &)> const &);
    /**
     * @hash   -1867259471
     * @symbol ?removeInvalidPacks@ResourcePackStack@@QEAAXXZ
     */
    MCAPI void removeInvalidPacks();
    /**
     * @hash   981559770
     * @symbol ?deserialize@ResourcePackStack@@SA?AV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@AEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEBVIResourcePackRepository@@@Z
     */
    MCAPI static std::unique_ptr<class ResourcePackStack> deserialize(class std::basic_istream<char, struct std::char_traits<char>> &, class IResourcePackRepository const &);

//private:
    /**
     * @hash   -486911094
     * @symbol ?_populateDependencies@ResourcePackStack@@CAXAEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@std@@AEAVPackInstance@@AEBVIResourcePackRepository@@_N@Z
     */
    MCAPI static void _populateDependencies(std::vector<class PackInstance> &, class PackInstance &, class IResourcePackRepository const &, bool);

private:
    /**
     * @hash   -1209071330
     * @symbol ?mUpgradePathMap@ResourcePackStack@@0V?$map@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V12@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@U?$pair@$$CBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V12@@std@@@4@@std@@A
     */
    MCAPI static class std::map<class Core::PathBuffer<std::string>, class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, class Core::PathBuffer<std::string>>>> mUpgradePathMap;

};