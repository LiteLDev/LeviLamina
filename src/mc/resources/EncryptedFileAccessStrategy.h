#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class EncryptedFileAccessStrategy : public ::DirectoryPackAccessStrategy {
public:
    // prevent constructor by default
    EncryptedFileAccessStrategy& operator=(EncryptedFileAccessStrategy const&);
    EncryptedFileAccessStrategy(EncryptedFileAccessStrategy const&);
    EncryptedFileAccessStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EncryptedFileAccessStrategy@@UEAA@XZ
    virtual ~EncryptedFileAccessStrategy() = default;

    // vIndex: 4, symbol: ?isWritable@EncryptedFileAccessStrategy@@UEBA_NXZ
    virtual bool isWritable() const;

    // vIndex: 6, symbol: ?isTrusted@EncryptedFileAccessStrategy@@UEBA_NXZ
    virtual bool isTrusted() const;

    // vIndex: 7, symbol: ?hasAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@_N1@Z
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool) const;

    // vIndex: 9, symbol:
    // ?getAsset@EncryptedFileAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10, symbol: ?deleteAsset@EncryptedFileAccessStrategy@@UEAA_NAEBVPath@Core@@@Z
    virtual bool deleteAsset(class Core::Path const&);

    // vIndex: 11, symbol:
    // ?writeAsset@EncryptedFileAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent);

    // vIndex: 16, symbol:
    // ?createSubPack@EncryptedFileAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 17, symbol: ?generateAssetSet@EncryptedFileAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 21, symbol: ?readContentIdentity@EncryptedFileAccessStrategy@@UEBA?AVContentIdentity@@XZ
    virtual class ContentIdentity readContentIdentity() const;

    // symbol:
    // ??0EncryptedFileAccessStrategy@@QEAA@AEBVResourceLocation@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@_NV?$optional@V?$unordered_map@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@U?$equal_to@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@V?$allocator@U?$pair@$$CBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@4@@std@@@std@@@Z
    MCAPI EncryptedFileAccessStrategy(
        class ResourceLocation const&                                                       resourceLocation,
        class ContentIdentity const&                                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&                 keyProvider,
        bool                                                                                canRecurse,
        std::optional<std::unordered_map<class Core::PathBuffer<std::string>, std::string>> assetSet
    );

    // symbol: ?isValidEncryptedPack@EncryptedFileAccessStrategy@@SA_NAEBVPath@Core@@AEAVContentIdentity@@@Z
    MCAPI static bool isValidEncryptedPack(class Core::Path const& pathToPack, class ContentIdentity& contentIdentity);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getContentsFile@EncryptedFileAccessStrategy@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _getContentsFile();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getContentIdentityFromEncryptedStream@EncryptedFileAccessStrategy@@CA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVContentIdentity@@@Z
    MCAPI static bool
    _getContentIdentityFromEncryptedStream(std::string& stream, class ContentIdentity& contentIdentity);

    // symbol:
    // ?_transformStream@EncryptedFileAccessStrategy@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@_K@Z
    MCAPI static void _transformStream(std::string& stream, std::string const& key, uint64 offset);

    // NOLINTEND
};
