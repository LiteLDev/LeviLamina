#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {
public:
    // prevent constructor by default
    DirectoryPackAccessStrategy& operator=(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DirectoryPackAccessStrategy@@UEAA@XZ
    virtual ~DirectoryPackAccessStrategy();

    // vIndex: 1, symbol: ?getPackSize@DirectoryPackAccessStrategy@@UEBA_KXZ
    virtual uint64 getPackSize() const;

    // vIndex: 2, symbol: ?getPackLocation@DirectoryPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
    virtual class ResourceLocation const& getPackLocation() const;

    // vIndex: 3, symbol:
    // ?getPackName@DirectoryPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getPackName() const;

    // vIndex: 4, symbol: ?isWritable@DirectoryPackAccessStrategy@@UEBA_NXZ
    virtual bool isWritable() const;

    // vIndex: 5, symbol: ?setIsTrusted@DirectoryPackAccessStrategy@@UEAAX_N@Z
    virtual void setIsTrusted(bool);

    // vIndex: 6, symbol: ?isTrusted@DirectoryPackAccessStrategy@@UEBA_NXZ
    virtual bool isTrusted() const;

    // vIndex: 7, symbol: ?hasAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N1@Z
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool) const;

    // vIndex: 8, symbol: ?hasFolder@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
    virtual bool hasFolder(class Core::Path const& packRelativePath) const;

    // vIndex: 9, symbol:
    // ?getAsset@DirectoryPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10, symbol: ?deleteAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@@Z
    virtual bool deleteAsset(class Core::Path const&);

    // vIndex: 11, symbol:
    // ?writeAsset@DirectoryPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent);

    // vIndex: 12, symbol:
    // ?forEachIn@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
    virtual void forEachIn(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const;

    // vIndex: 13, symbol:
    // ?forEachInAssetSet@DirectoryPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@@Z
    virtual void forEachInAssetSet(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback
    ) const;

    // vIndex: 14, symbol: ?getStrategyType@DirectoryPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
    virtual ::PackAccessStrategyType getStrategyType() const;

    // vIndex: 16, symbol:
    // ?createSubPack@DirectoryPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 18, symbol: ?canRecurse@DirectoryPackAccessStrategy@@UEBA_NXZ
    virtual bool canRecurse() const;

    // vIndex: 19, symbol: ?unload@DirectoryPackAccessStrategy@@UEAAXXZ
    virtual void unload();

    // symbol: ??0DirectoryPackAccessStrategy@@QEAA@AEBVResourceLocation@@_N@Z
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const& packLocation, bool recurse);

    // NOLINTEND
};
