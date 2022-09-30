/**
 * @file  EncryptedFileAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "DirectoryPackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedFileAccessStrategy.
 *
 */
class EncryptedFileAccessStrategy : public DirectoryPackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDFILEACCESSSTRATEGY
public:
    class EncryptedFileAccessStrategy& operator=(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy(class EncryptedFileAccessStrategy const &) = delete;
    EncryptedFileAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EncryptedFileAccessStrategy();
    /**
     * @hash   -2129322933
     * @vftbl  4
     * @symbol ?isWritable@EncryptedFileAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   1685790094
     * @vftbl  6
     * @symbol ?isTrusted@EncryptedFileAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   1127013438
     * @vftbl  7
     * @symbol ?hasAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   189451877
     * @vftbl  9
     * @symbol ?getAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   1514742793
     * @vftbl  10
     * @symbol ?deleteAsset@EncryptedFileAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   -1891367670
     * @vftbl  11
     * @symbol ?writeAsset@EncryptedFileAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   1050245844
     * @vftbl  16
     * @symbol ?createSubPack@EncryptedFileAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   1856796095
     * @vftbl  17
     * @symbol ?generateAssetSet@EncryptedFileAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @hash   -643655654
     * @vftbl  21
     * @symbol ?readContentIdentity@EncryptedFileAccessStrategy@@UEBA?AVContentIdentity@@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @hash   -1235576249
     * @symbol ??0EncryptedFileAccessStrategy@@QEAA@AEBVResourceLocation@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@_NV?$optional@V?$unordered_map@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@U?$equal_to@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@V?$allocator@U?$pair@$$CBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@4@@std@@@std@@@Z
     */
    MCAPI EncryptedFileAccessStrategy(class ResourceLocation const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, bool, class std::optional<class std::unordered_map<class Core::PathBuffer<std::string>, std::string, struct std::hash<class Core::PathBuffer<std::string>>, struct std::equal_to<class Core::PathBuffer<std::string>>, class std::allocator<struct std::pair<class Core::PathBuffer<std::string> const, std::string>>>>);
    /**
     * @hash   1302397256
     * @symbol ?isValidEncryptedPack@EncryptedFileAccessStrategy@@SA_NAEBVPath@Core@@AEAVContentIdentity@@@Z
     */
    MCAPI static bool isValidEncryptedPack(class Core::Path const &, class ContentIdentity &);

//protected:
    /**
     * @hash   1205100053
     * @symbol ?_getContentsFile@EncryptedFileAccessStrategy@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string _getContentsFile();

//private:
    /**
     * @hash   -600045117
     * @symbol ?_getContentIdentityFromEncryptedStream@EncryptedFileAccessStrategy@@CA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVContentIdentity@@@Z
     */
    MCAPI static bool _getContentIdentityFromEncryptedStream(std::string &, class ContentIdentity &);
    /**
     * @hash   -1900309235
     * @symbol ?_transformStream@EncryptedFileAccessStrategy@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_K@Z
     */
    MCAPI static void _transformStream(std::string &, std::string const &, unsigned __int64);

protected:

private:

};