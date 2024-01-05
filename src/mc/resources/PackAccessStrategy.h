#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackAccessStrategy {
public:
    // prevent constructor by default
    PackAccessStrategy& operator=(PackAccessStrategy const&);
    PackAccessStrategy(PackAccessStrategy const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PackAccessStrategy@@UEAA@XZ
    virtual ~PackAccessStrategy();

    // vIndex: 1, symbol: ?getPackSize@DirectoryPackAccessStrategy@@UEBA_KXZ
    virtual uint64 getPackSize() const = 0;

    // vIndex: 2, symbol: ?getPackLocation@DirectoryPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
    virtual class ResourceLocation const& getPackLocation() const = 0;

    // vIndex: 3, symbol:
    // ?getPackName@DirectoryPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getPackName() const = 0;

    // vIndex: 4, symbol: ?isWritable@DirectoryPackAccessStrategy@@UEBA_NXZ
    virtual bool isWritable() const = 0;

    // vIndex: 5, symbol: ?setIsTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEAAX_N@Z
    virtual void setIsTrusted(bool) = 0;

    // vIndex: 6, symbol: ?isTrusted@DirectoryPackAccessStrategy@@UEBA_NXZ
    virtual bool isTrusted() const = 0;

    // vIndex: 7, symbol: ?hasAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N1@Z
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool) const = 0;

    // vIndex: 8, symbol: ?hasFolder@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
    virtual bool hasFolder(class Core::Path const& packRelativePath) const = 0;

    // vIndex: 9, symbol:
    // ?getAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual bool
    getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const = 0;

    // vIndex: 10, symbol: ?deleteAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@@Z
    virtual bool deleteAsset(class Core::Path const&) = 0;

    // vIndex: 11, symbol:
    // ?writeAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent) = 0;

    // vIndex: 12, symbol:
    // ?forEachIn@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
    virtual void forEachIn(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const = 0;

    // vIndex: 13, symbol:
    // ?forEachInAssetSet@PackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
    virtual void forEachInAssetSet(class Core::Path const&, std::function<void(class Core::Path const&)>) const;

    // vIndex: 14, symbol: ?getStrategyType@DirectoryPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
    virtual ::PackAccessStrategyType getStrategyType() const = 0;

    // vIndex: 15, symbol:
    // ?getSubPath@PackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const& getSubPath() const;

    // vIndex: 16, symbol:
    // ?createSubPack@DirectoryPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const = 0;

    // vIndex: 17, symbol: ?generateAssetSet@PackAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 18, symbol: ?canRecurse@PackAccessStrategy@@UEBA_NXZ
    virtual bool canRecurse() const;

    // vIndex: 19, symbol: ?unload@DirectoryPackWithEncryptionAccessStrategy@@UEAAXXZ
    virtual void unload() = 0;

    // vIndex: 20, symbol: ?hasUpgradeFiles@PackAccessStrategy@@UEBA_NXZ
    virtual bool hasUpgradeFiles() const;

    // vIndex: 21, symbol: ?readContentIdentity@PackAccessStrategy@@UEBA?AVContentIdentity@@XZ
    virtual class ContentIdentity readContentIdentity() const;

    // symbol: ??0PackAccessStrategy@@QEAA@XZ
    MCAPI PackAccessStrategy();

    // symbol: ?hasGeneratedAssetSet@PackAccessStrategy@@QEBA_NXZ
    MCAPI bool hasGeneratedAssetSet() const;

    // symbol:
    // ?PACK_IMPORT_LOCK_FILE@PackAccessStrategy@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
    MCAPI static class Core::PathBuffer<std::string> const PACK_IMPORT_LOCK_FILE;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addToAssetSet@PackAccessStrategy@@IEAAXAEBVPath@Core@@@Z
    MCAPI void _addToAssetSet(class Core::Path const& path);

    // symbol: ?_deleteFromAssetSet@PackAccessStrategy@@IEAAXAEBVPath@Core@@@Z
    MCAPI void _deleteFromAssetSet(class Core::Path const&);

    // symbol: ?_isInAssetSet@PackAccessStrategy@@IEBA_NAEBVPath@Core@@@Z
    MCAPI bool _isInAssetSet(class Core::Path const& path) const;

    // symbol: ?_isInAssetSetCaseInsensative@PackAccessStrategy@@IEBA_NAEBVPath@Core@@@Z
    MCAPI bool _isInAssetSetCaseInsensative(class Core::Path const& path) const;

    // NOLINTEND
};
