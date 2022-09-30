/**
 * @file  PackAccessStrategy.hpp
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
 * @brief MC class PackAccessStrategy.
 *
 */
class PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKACCESSSTRATEGY
public:
    class PackAccessStrategy& operator=(class PackAccessStrategy const &) = delete;
    PackAccessStrategy(class PackAccessStrategy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PackAccessStrategy();
    /**
     * @hash   1158016347
     * @vftbl  1
     * @symbol ?getPackSize@ZipPackAccessStrategy@@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const = 0;
    /**
     * @hash   -1288337815
     * @vftbl  2
     * @symbol ?getPackLocation@ZipPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const = 0;
    /**
     * @hash   1728143757
     * @vftbl  3
     * @symbol ?getPackName@ZipPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getPackName() const = 0;
    /**
     * @hash   1690364013
     * @vftbl  4
     * @symbol ?isWritable@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const = 0;
    /**
     * @hash   2100942309
     * @vftbl  5
     * @symbol ?setIsTrusted@ZipPackAccessStrategy@@UEAAX_N@Z
     */
    virtual void setIsTrusted(bool) = 0;
    /**
     * @hash   -795368176
     * @vftbl  6
     * @symbol ?isTrusted@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const = 0;
    /**
     * @hash   -782877872
     * @vftbl  7
     * @symbol ?hasAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const = 0;
    /**
     * @hash   -1875420002
     * @vftbl  8
     * @symbol ?hasFolder@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     */
    virtual bool hasFolder(class Core::Path const &) const = 0;
    /**
     * @hash   -1442801895
     * @vftbl  9
     * @symbol ?getAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const = 0;
    /**
     * @hash   877070397
     * @vftbl  10
     * @symbol ?deleteAsset@ZipPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &) = 0;
    /**
     * @hash   2069265260
     * @vftbl  11
     * @symbol ?writeAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &) = 0;
    /**
     * @hash   -1627244039
     * @vftbl  12
     * @symbol ?forEachIn@ZipPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const = 0;
    /**
     * @hash   1543370974
     * @vftbl  13
     * @symbol ?forEachInAssetSet@PackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
     */
    virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /**
     * @hash   -65084972
     * @vftbl  14
     * @symbol ?getStrategyType@ZipPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const = 0;
    /**
     * @hash   -683046309
     * @vftbl  15
     * @symbol ?getSubPath@PackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getSubPath() const;
    /**
     * @hash   717243032
     * @vftbl  16
     * @symbol ?createSubPack@ZipPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const = 0;
    /**
     * @hash   150993014
     * @vftbl  17
     * @symbol ?generateAssetSet@PackAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @hash   -310713737
     * @vftbl  18
     * @symbol ?canRecurse@PackAccessStrategy@@UEBA_NXZ
     */
    virtual bool canRecurse() const;
    /**
     * @hash   1260834385
     * @vftbl  19
     * @symbol ?unload@ZipPackAccessStrategy@@UEAAXXZ
     */
    virtual void unload() = 0;
    /**
     * @hash   1660969629
     * @vftbl  20
     * @symbol ?hasUpgradeFiles@PackAccessStrategy@@UEBA_NXZ
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @hash   -1268513567
     * @vftbl  21
     * @symbol ?readContentIdentity@PackAccessStrategy@@UEBA?AVContentIdentity@@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @hash   1859422844
     * @symbol ??0PackAccessStrategy@@QEAA@XZ
     */
    MCAPI PackAccessStrategy();
    /**
     * @hash   855396540
     * @symbol ?hasGeneratedAssetSet@PackAccessStrategy@@QEBA_NXZ
     */
    MCAPI bool hasGeneratedAssetSet() const;
    /**
     * @hash   701148248
     * @symbol ?PACK_IMPORT_LOCK_FILE@PackAccessStrategy@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     */
    MCAPI static class Core::PathBuffer<std::string> const PACK_IMPORT_LOCK_FILE;

//protected:
    /**
     * @hash   -521159197
     * @symbol ?_addToAssetSet@PackAccessStrategy@@IEAAXAEBVPath@Core@@@Z
     */
    MCAPI void _addToAssetSet(class Core::Path const &);
    /**
     * @hash   607396559
     * @symbol ?_deleteFromAssetSet@PackAccessStrategy@@IEAAXAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    MCAPI void _deleteFromAssetSet(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   -1073020681
     * @symbol ?_isInAssetSet@PackAccessStrategy@@IEBA_NAEBVPath@Core@@@Z
     */
    MCAPI bool _isInAssetSet(class Core::Path const &) const;

protected:

};