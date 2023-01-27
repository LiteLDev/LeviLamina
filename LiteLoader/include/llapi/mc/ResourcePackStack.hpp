/**
 * @file  ResourcePackStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackStack();
    /**
     * @hash   -905019869
     * @vftbl  1
     * @symbol  ?loadAllVersionsOf\@ResourcePackStack\@\@UEBA?AV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /**
     * @hash   -2047197730
     * @vftbl  2
     * @symbol  ?loadAllVersionsOf\@ResourcePackStack\@\@UEBA_NAEBVResourceLocation\@\@AEAVResourcePackMergeStrategy\@\@\@Z
     */
    virtual bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    /**
     * @vftbl  3
     * @symbol  ?loadAllVersionsOf\@ResourcePackStack\@\@UEBA_NAEBVResourceLocation\@\@AEBV?$function\@$$A6A_NAEBVPackInstance\@\@\@Z\@std\@\@AEAVResourcePackMergeStrategy\@\@\@Z
     */
    virtual bool loadAllVersionsOf(class ResourceLocation const &, class std::function<bool (class PackInstance const &)> const &, class ResourcePackMergeStrategy &) const;
    /**
     * @hash   1907730536
     * @symbol  ?add\@ResourcePackStack\@\@QEAAXVPackInstance\@\@AEBVIResourcePackRepository\@\@_N\@Z
     */
    MCAPI void add(class PackInstance, class IResourcePackRepository const &, bool);
    /**
     * @hash   1413730273
     * @symbol  ?generateAssetSet\@ResourcePackStack\@\@QEAAXXZ
     */
    MCAPI void generateAssetSet();
    /**
     * @hash   1805497771
     * @symbol  ?getSplitStacks\@ResourcePackStack\@\@QEBAXAEAV1\@0\@Z
     */
    MCAPI void getSplitStacks(class ResourcePackStack &, class ResourcePackStack &) const;
    /**
     * @hash   -1082156581
     * @symbol  ?hasCapabilityInStack\@ResourcePackStack\@\@QEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool hasCapabilityInStack(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -2052988210
     * @symbol  ?hasPlatformLockedContent\@ResourcePackStack\@\@QEBA_NXZ
     */
    MCAPI bool hasPlatformLockedContent() const;
    /**
     * @symbol  ?iteratePacks\@ResourcePackStack\@\@QEBAXAEBV?$function\@$$A6AXAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void iteratePacks(class std::function<void (class PackInstance const &)> const &) const;
    /**
     * @hash   -817175509
     * @symbol  ?removeDuplicates\@ResourcePackStack\@\@QEAAXXZ
     */
    MCAPI void removeDuplicates();
    /**
     * @hash   934208280
     * @symbol  ?removeIf\@ResourcePackStack\@\@QEAAXAEBV?$function\@$$A6A_NAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void removeIf(class std::function<bool (class PackInstance const &)> const &);
    /**
     * @hash   2130869553
     * @symbol  ?removeInvalidPacks\@ResourcePackStack\@\@QEAAXXZ
     */
    MCAPI void removeInvalidPacks();
    /**
     * @hash   683737434
     * @symbol  ?deserialize\@ResourcePackStack\@\@SA?AV?$unique_ptr\@VResourcePackStack\@\@U?$default_delete\@VResourcePackStack\@\@\@std\@\@\@std\@\@AEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@3\@AEBVIResourcePackRepository\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ResourcePackStack> deserialize(class std::basic_istream<char, struct std::char_traits<char>> &, class IResourcePackRepository const &);

//private:
    /**
     * @hash   -784779558
     * @symbol  ?_populateDependencies\@ResourcePackStack\@\@CAXAEAV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@std\@\@AEAVPackInstance\@\@AEBVIResourcePackRepository\@\@_N\@Z
     */
    MCAPI static void _populateDependencies(std::vector<class PackInstance> &, class PackInstance &, class IResourcePackRepository const &, bool);

private:
    /**
     * @hash   -71908498
     * @symbol  ?mUpgradePathMap\@ResourcePackStack\@\@0V?$map\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V12\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V12\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::map<class Core::PathBuffer<std::string>, class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, class Core::PathBuffer<std::string>>>> mUpgradePathMap;

};