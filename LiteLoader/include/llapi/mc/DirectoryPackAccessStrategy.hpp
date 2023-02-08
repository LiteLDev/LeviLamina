/**
 * @file  DirectoryPackAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~DirectoryPackAccessStrategy();
    /**
     * @hash   508142723
     * @vftbl  1
     * @symbol  ?getPackSize\@DirectoryPackAccessStrategy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @hash   557955185
     * @vftbl  2
     * @symbol  ?getPackLocation\@DirectoryPackAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @hash   617107637
     * @vftbl  3
     * @symbol  ?getPackName\@DirectoryPackAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @hash   1806859573
     * @vftbl  4
     * @symbol  ?isWritable\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   -918385801
     * @vftbl  5
     * @symbol  ?setIsTrusted\@DirectoryPackAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @hash   931886840
     * @vftbl  6
     * @symbol  ?isTrusted\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   -1488148552
     * @vftbl  7
     * @symbol  ?hasAsset\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N\@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   -2000344304
     * @vftbl  8
     * @symbol  ?hasFolder\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @hash   1281838315
     * @vftbl  9
     * @symbol  ?getAsset\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   -1792084993
     * @vftbl  10
     * @symbol  ?deleteAsset\@DirectoryPackAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   2139480228
     * @vftbl  11
     * @symbol  ?writeAsset\@DirectoryPackAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   -1870440085
     * @vftbl  12
     * @symbol  ?forEachIn\@DirectoryPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   -1307242815
     * @vftbl  13
     * @symbol  ?forEachInAssetSet\@DirectoryPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@\@Z
     */
    virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /**
     * @hash   1824941724
     * @vftbl  14
     * @symbol  ?getStrategyType\@DirectoryPackAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @hash   -1444223510
     * @vftbl  16
     * @symbol  ?createSubPack\@DirectoryPackAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   222060714
     * @vftbl  18
     * @symbol  ?canRecurse\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool canRecurse() const;
    /**
     * @hash   -2052876375
     * @vftbl  19
     * @symbol  ?unload\@DirectoryPackAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol  __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol  __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @hash   988863381
     * @symbol  ??0DirectoryPackAccessStrategy\@\@QEAA\@AEBVResourceLocation\@\@_N\@Z
     */
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const &, bool);

};