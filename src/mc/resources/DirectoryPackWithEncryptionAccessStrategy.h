#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DirectoryPackWithEncryptionAccessStrategy : public ::PackAccessStrategy {
public:
    // prevent constructor by default
    DirectoryPackWithEncryptionAccessStrategy& operator=(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getPackSize@DirectoryPackWithEncryptionAccessStrategy@@UEBA_KXZ
    virtual uint64 getPackSize() const;

    // vIndex: 2, symbol: ?getPackLocation@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBVResourceLocation@@XZ
    virtual class ResourceLocation const& getPackLocation() const;

    // vIndex: 3, symbol:
    // ?getPackName@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getPackName() const;

    // vIndex: 4, symbol: ?isWritable@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
    virtual bool isWritable() const;

    // vIndex: 5, symbol: ?setIsTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEAAX_N@Z
    virtual void setIsTrusted(bool);

    // vIndex: 6, symbol: ?isTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
    virtual bool isTrusted() const;

    // vIndex: 7, symbol: ?hasAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@_N1@Z
    virtual bool hasAsset(class Core::Path const&, bool, bool) const;

    // vIndex: 8, symbol: ?hasFolder@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
    virtual bool hasFolder(class Core::Path const&) const;

    // vIndex: 9, symbol:
    // ?getAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const;

    // vIndex: 10, symbol:
    // ?deleteAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&);

    // vIndex: 11, symbol:
    // ?writeAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool writeAsset(class Core::Path const&, std::string const&);

    // vIndex: 12, symbol:
    // ?forEachIn@DirectoryPackWithEncryptionAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
    virtual void forEachIn(class Core::Path const&, std::function<void(class Core::Path const&)>, bool) const;

    // vIndex: 14, symbol:
    // ?getStrategyType@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
    virtual ::PackAccessStrategyType getStrategyType() const;

    // vIndex: 16, symbol:
    // ?createSubPack@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const;

    // vIndex: 17, symbol:
    // ?generateAssetSet@DirectoryPackWithEncryptionAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 19, symbol: ?unload@DirectoryPackWithEncryptionAccessStrategy@@UEAAXXZ
    virtual void unload();

    // vIndex: 20, symbol: ?hasUpgradeFiles@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
    virtual bool hasUpgradeFiles() const;

    // vIndex: 21, symbol: ?readContentIdentity@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AVContentIdentity@@XZ
    virtual class ContentIdentity readContentIdentity() const;

    // symbol:
    // ??0DirectoryPackWithEncryptionAccessStrategy@@QEAA@AEBVResourceLocation@@0AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI
    DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const&, class ResourceLocation const&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _getUnencryptedAsset(class Core::Path const&, std::string&) const;

    // symbol: ?_hasUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@@Z
    MCAPI bool _hasUnencryptedAsset(class Core::Path const&) const;

    // NOLINTEND
};
