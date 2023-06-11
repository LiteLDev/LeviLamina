/**
 * @file  ResourcePackManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackManager.
 *
 */
class ResourcePackManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKMANAGER
public:
    class ResourcePackManager& operator=(class ResourcePackManager const &) = delete;
    ResourcePackManager(class ResourcePackManager const &) = delete;
    ResourcePackManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool load(class ResourceLocation const &, std::string &) const;
    /**
     * @vftbl 2
     * @symbol ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocation const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @vftbl 3
     * @symbol ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocationPair\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @vftbl 4
     * @symbol ?loadAllVersionsOf\@ResourcePackManager\@\@UEBA?AV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /**
     * @vftbl 5
     * @symbol ?isInStreamableLocation\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &) const;
    /**
     * @vftbl 6
     * @symbol ?isInStreamableLocation\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl 7
     * @symbol ?getPath\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /**
     * @vftbl 8
     * @symbol ?getPath\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl 9
     * @symbol ?getPathContainingResource\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /**
     * @vftbl 10
     * @symbol ?getPathContainingResource\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /**
     * @vftbl 11
     * @symbol ?getPackStackIndexOfResource\@ResourcePackManager\@\@UEBA?AU?$pair\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl 12
     * @symbol ?hasCapability\@ResourcePackManager\@\@UEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual bool hasCapability(class std::basic_string_view<char, struct std::char_traits<char>>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackManager();
#endif
    /**
     * @symbol ??0ResourcePackManager\@\@QEAA\@V?$function\@$$A6A?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ\@std\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@gsl\@\@_N\@Z
     */
    MCAPI ResourcePackManager(class std::function<class Core::PathBuffer<std::string> (void)>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, bool);
    /**
     * @symbol ?clearStack\@ResourcePackManager\@\@QEAAXW4ResourcePackStackType\@\@_N\@Z
     */
    MCAPI void clearStack(enum class ResourcePackStackType, bool);
    /**
     * @symbol ?composeFullStack\@ResourcePackManager\@\@QEBAHAEAVResourcePackStack\@\@AEBV2\@11\@Z
     */
    MCAPI int composeFullStack(class ResourcePackStack &, class ResourcePackStack const &, class ResourcePackStack const &, class ResourcePackStack const &) const;
    /**
     * @symbol ?getFullStackMinEngineVersion\@ResourcePackManager\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getFullStackMinEngineVersion() const;
    /**
     * @symbol ?getPackSourceReport\@ResourcePackManager\@\@QEBAPEBVPackSourceReport\@\@XZ
     */
    MCAPI class PackSourceReport const * getPackSourceReport() const;
    /**
     * @symbol ?getResourcesOfGroup\@ResourcePackManager\@\@QEBA?AV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const &) const;
    /**
     * @symbol ?getResourcesOfGroup\@ResourcePackManager\@\@QEBA?AV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPackInstance\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(class PackInstance const &, std::string const &) const;
    /**
     * @symbol ?getStack\@ResourcePackManager\@\@QEBAAEBVResourcePackStack\@\@W4ResourcePackStackType\@\@\@Z
     */
    MCAPI class ResourcePackStack const & getStack(enum class ResourcePackStackType) const;
    /**
     * @symbol ?handlePendingStackChanges\@ResourcePackManager\@\@QEAAXXZ
     */
    MCAPI void handlePendingStackChanges();
    /**
     * @symbol ?hasResource\@ResourcePackManager\@\@QEBA_NAEBVResourceLocation\@\@\@Z
     */
    MCAPI bool hasResource(class ResourceLocation const &) const;
    /**
     * @symbol ?isOnlyBaseGamePacks\@ResourcePackManager\@\@QEBA_NXZ
     */
    MCAPI bool isOnlyBaseGamePacks() const;
    /**
     * @symbol ?iteratePacks\@ResourcePackManager\@\@QEBAXAEBV?$function\@$$A6AXAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void iteratePacks(class std::function<void (class PackInstance const &)> const &) const;
    /**
     * @symbol ?loadAllVersionsOf\@ResourcePackManager\@\@QEBA_NAEBVResourceLocation\@\@AEAVResourcePackMergeStrategy\@\@\@Z
     */
    MCAPI bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    /**
     * @symbol ?registerResourcePackListener\@ResourcePackManager\@\@QEAAXAEAVResourcePackListener\@\@\@Z
     */
    MCAPI void registerResourcePackListener(class ResourcePackListener &);
    /**
     * @symbol ?removeIf\@ResourcePackManager\@\@QEAAXAEBV?$function\@$$A6A_NAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void removeIf(class std::function<bool (class PackInstance const &)> const &);
    /**
     * @symbol ?setPackSourceReport\@ResourcePackManager\@\@QEAAX$$QEAVPackSourceReport\@\@\@Z
     */
    MCAPI void setPackSourceReport(class PackSourceReport &&);
    /**
     * @symbol ?setStack\@ResourcePackManager\@\@QEAA_NV?$unique_ptr\@VResourcePackStack\@\@U?$default_delete\@VResourcePackStack\@\@\@std\@\@\@std\@\@W4ResourcePackStackType\@\@_N\@Z
     */
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum class ResourcePackStackType, bool);
    /**
     * @symbol ?unRegisterResourcePackListener\@ResourcePackManager\@\@QEAAXAEAVResourcePackListener\@\@\@Z
     */
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener &);

//private:
    /**
     * @symbol ?_calculateMinEngineVersionFromFullStack\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _calculateMinEngineVersionFromFullStack();
    /**
     * @symbol ?_composeFullStack\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _composeFullStack();
    /**
     * @symbol ?_getPackForResource\@ResourcePackManager\@\@AEBAPEAVPackInstance\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class PackInstance * _getPackForResource(class Core::Path const &) const;
    /**
     * @symbol ?_getResourcesOfGroup\@ResourcePackManager\@\@AEBAXAEBVPackInstance\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void _getResourcesOfGroup(class PackInstance const &, std::string const &, std::vector<class Core::PathBuffer<std::string>> &) const;
    /**
     * @symbol ?_updateLanguageSubpacks\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _updateLanguageSubpacks();

private:

};
