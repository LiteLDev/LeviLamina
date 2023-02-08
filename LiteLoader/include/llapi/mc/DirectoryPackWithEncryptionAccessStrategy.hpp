/**
 * @file  DirectoryPackWithEncryptionAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackWithEncryptionAccessStrategy.
 *
 */
class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
public:
    class DirectoryPackWithEncryptionAccessStrategy& operator=(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
    /**
     * @hash   909498186
     * @vftbl  1
     * @symbol  ?getPackSize\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @hash   668472424
     * @vftbl  2
     * @symbol  ?getPackLocation\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @hash   586413676
     * @vftbl  3
     * @symbol  ?getPackName\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @hash   1972291884
     * @vftbl  4
     * @symbol  ?isWritable\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   -1270516128
     * @vftbl  5
     * @symbol  ?setIsTrusted\@DirectoryPackWithEncryptionAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @hash   2118972879
     * @vftbl  6
     * @symbol  ?isTrusted\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   358649487
     * @vftbl  7
     * @symbol  ?hasAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N\@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   397858297
     * @vftbl  8
     * @symbol  ?hasFolder\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @hash   125212804
     * @vftbl  9
     * @symbol  ?getAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   -637529240
     * @vftbl  10
     * @symbol  ?deleteAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   897114859
     * @vftbl  11
     * @symbol  ?writeAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   -462200732
     * @vftbl  12
     * @symbol  ?forEachIn\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   -1115075693
     * @vftbl  14
     * @symbol  ?getStrategyType\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @hash   1175965187
     * @vftbl  16
     * @symbol  ?createSubPack\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   1076522576
     * @vftbl  17
     * @symbol  ?generateAssetSet\@DirectoryPackWithEncryptionAccessStrategy\@\@UEAA?AW4PackAccessAssetGenerationResult\@\@XZ
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @hash   1683171056
     * @vftbl  19
     * @symbol  ?unload\@DirectoryPackWithEncryptionAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   380505911
     * @vftbl  20
     * @symbol  ?hasUpgradeFiles\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @hash   -539673541
     * @vftbl  21
     * @symbol  ?readContentIdentity\@DirectoryPackWithEncryptionAccessStrategy\@\@UEBA?AVContentIdentity\@\@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
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
     * @hash   -285708302
     * @symbol  ??0DirectoryPackWithEncryptionAccessStrategy\@\@QEAA\@AEBVResourceLocation\@\@0AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const &, class ResourceLocation const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

//private:
    /**
     * @hash   -1566575883
     * @symbol  ?_getUnencryptedAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@AEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _getUnencryptedAsset(class Core::Path const &, std::string &) const;
    /**
     * @hash   418323572
     * @symbol  ?_hasUnencryptedAsset\@DirectoryPackWithEncryptionAccessStrategy\@\@AEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool _hasUnencryptedAsset(class Core::Path const &) const;

private:

};