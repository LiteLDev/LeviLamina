#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class EncryptedFileAccessStrategy : public ::DirectoryPackAccessStrategy {

public:
    // prevent constructor by default
    EncryptedFileAccessStrategy& operator=(EncryptedFileAccessStrategy const&) = delete;
    EncryptedFileAccessStrategy(EncryptedFileAccessStrategy const&)            = delete;
    EncryptedFileAccessStrategy()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?isWritable\@EncryptedFileAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @vftbl 6
     * @symbol ?isTrusted\@EncryptedFileAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @vftbl 7
     * @symbol ?hasAsset\@EncryptedFileAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N1\@Z
     */
    virtual bool hasAsset(class Core::Path const&, bool, bool) const;
    /**
     * @vftbl 9
     * @symbol
     * ?getAsset\@EncryptedFileAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const;
    /**
     * @vftbl 10
     * @symbol
     * ?deleteAsset\@EncryptedFileAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&);
    /**
     * @vftbl 11
     * @symbol
     * ?writeAsset\@EncryptedFileAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const&, std::string const&);
    /**
     * @vftbl 16
     * @symbol
     * ?createSubPack\@EncryptedFileAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const;
    /**
     * @vftbl 17
     * @symbol ?generateAssetSet\@EncryptedFileAccessStrategy\@\@UEAA?AW4PackAccessAssetGenerationResult\@\@XZ
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @vftbl 21
     * @symbol ?readContentIdentity\@EncryptedFileAccessStrategy\@\@UEBA?AVContentIdentity\@\@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @symbol
     * ??0EncryptedFileAccessStrategy\@\@QEAA\@AEBVResourceLocation\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@_NV?$optional\@V?$unordered_map\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@U?$equal_to\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@V?$allocator\@U?$pair\@$$CBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@4\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    EncryptedFileAccessStrategy(class ResourceLocation const&, class ContentIdentity const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&, bool, std::optional<std::unordered_map<class Core::PathBuffer<std::string>, std::string>>);
    /**
     * @symbol ?isValidEncryptedPack\@EncryptedFileAccessStrategy\@\@SA_NAEBVPath\@Core\@\@AEAVContentIdentity\@\@\@Z
     */
    MCAPI static bool isValidEncryptedPack(class Core::Path const&, class ContentIdentity&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getContentsFile\@EncryptedFileAccessStrategy\@\@IEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getContentsFile();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getContentIdentityFromEncryptedStream\@EncryptedFileAccessStrategy\@\@CA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVContentIdentity\@\@\@Z
     */
    MCAPI static bool _getContentIdentityFromEncryptedStream(std::string&, class ContentIdentity&);
    /**
     * @symbol
     * ?_transformStream\@EncryptedFileAccessStrategy\@\@CAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@_K\@Z
     */
    MCAPI static void _transformStream(std::string&, std::string const&, uint64_t);
    // NOLINTEND
};
