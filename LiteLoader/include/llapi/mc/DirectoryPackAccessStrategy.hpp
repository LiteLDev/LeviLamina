/**
 * @file  DirectoryPackAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackAccessStrategy.
 *
 */
class DirectoryPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKACCESSSTRATEGY
public:
    class DirectoryPackAccessStrategy& operator=(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DirectoryPackAccessStrategy();
    /**
     * @hash   940738691
     * @vftbl  1
     * @symbol ?getPackSize@DirectoryPackAccessStrategy@@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @hash   -1114615343
     * @vftbl  2
     * @symbol ?getPackLocation@DirectoryPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @hash   1533225093
     * @vftbl  3
     * @symbol ?getPackName@DirectoryPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @hash   1706961701
     * @vftbl  4
     * @symbol ?isWritable@DirectoryPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   -1010272777
     * @vftbl  5
     * @symbol ?setIsTrusted@DirectoryPackAccessStrategy@@UEAAX_N@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @hash   1364513560
     * @vftbl  6
     * @symbol ?isTrusted@DirectoryPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   -1055537208
     * @vftbl  7
     * @symbol ?hasAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   -1567732960
     * @vftbl  8
     * @symbol ?hasFolder@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @hash   1714449659
     * @vftbl  9
     * @symbol ?getAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   -1359489025
     * @vftbl  10
     * @symbol ?deleteAsset@DirectoryPackAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   -1721922412
     * @vftbl  11
     * @symbol ?writeAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   -1437813365
     * @vftbl  12
     * @symbol ?forEachIn@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   -874616095
     * @vftbl  13
     * @symbol ?forEachInAssetSet@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
     */
    virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /**
     * @hash   1728318940
     * @vftbl  14
     * @symbol ?getStrategyType@DirectoryPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     */
    virtual enum PackAccessStrategyType getStrategyType() const;
    /**
     * @hash   -1011642918
     * @vftbl  16
     * @symbol ?createSubPack@DirectoryPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   -1615311382
     * @vftbl  18
     * @symbol ?canRecurse@DirectoryPackAccessStrategy@@UEBA_NXZ
     */
    virtual bool canRecurse() const;
    /**
     * @hash   -2144763351
     * @vftbl  19
     * @symbol ?unload@DirectoryPackAccessStrategy@@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   1421382469
     * @symbol ??0DirectoryPackAccessStrategy@@QEAA@AEBVResourceLocation@@_N@Z
     */
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const &, bool);

};