/**
 * @file  ZipPackAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ZipPackAccessStrategy.
 *
 */
class ZipPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGY
public:
    class ZipPackAccessStrategy& operator=(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ZipPackAccessStrategy();
    /**
     * @hash   -1940713569
     * @vftbl  1
     * @symbol ?getPackSize@ZipPackAccessStrategy@@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @hash   -92115811
     * @vftbl  2
     * @symbol ?getPackLocation@ZipPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @hash   -1348927567
     * @vftbl  3
     * @symbol ?getPackName@ZipPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @hash   -1741302431
     * @vftbl  4
     * @symbol ?isWritable@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   1671663771
     * @vftbl  5
     * @symbol ?setIsTrusted@ZipPackAccessStrategy@@UEAAX_N@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @hash   403021844
     * @vftbl  6
     * @symbol ?isTrusted@ZipPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   -191486012
     * @vftbl  7
     * @symbol ?hasAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   1987378068
     * @vftbl  8
     * @symbol ?hasFolder@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @hash   832540751
     * @vftbl  9
     * @symbol ?getAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   440841907
     * @vftbl  10
     * @symbol ?deleteAsset@ZipPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   -1630742944
     * @vftbl  11
     * @symbol ?writeAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   646607135
     * @vftbl  12
     * @symbol ?forEachIn@ZipPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   1179380728
     * @vftbl  14
     * @symbol ?getStrategyType@ZipPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     */
    virtual enum PackAccessStrategyType getStrategyType() const;
    /**
     * @hash   -1282032374
     * @vftbl  15
     * @symbol ?getSubPath@ZipPackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getSubPath() const;
    /**
     * @hash   280553262
     * @vftbl  16
     * @symbol ?createSubPack@ZipPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   -1833867019
     * @vftbl  19
     * @symbol ?unload@ZipPackAccessStrategy@@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   216754608
     * @vftbl  21
     * @symbol ?readContentIdentity@ZipPackAccessStrategy@@UEBA?AVContentIdentity@@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @hash   -1680779986
     * @symbol ??0ZipPackAccessStrategy@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@AEBVResourceLocation@@AEBVPath@Core@@@Z
     */
    MCAPI ZipPackAccessStrategy(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const &, class ResourceLocation const &, class Core::Path const &);

//private:
    /**
     * @hash   -804748140
     * @symbol ?_tryReadFromPendingQueue@ZipPackAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const &, std::string &) const;

private:

};