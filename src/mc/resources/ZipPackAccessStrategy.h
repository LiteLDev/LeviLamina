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

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // prevent constructor by default
    ZipPackAccessStrategy& operator=(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ZipPackAccessStrategy@@UEAA@XZ
    virtual ~ZipPackAccessStrategy();

    // vIndex: 1, symbol: ?getPackSize@ZipPackAccessStrategy@@UEBA_KXZ
    virtual uint64 getPackSize() const;

    // vIndex: 2, symbol: ?getPackLocation@ZipPackAccessStrategy@@UEBAAEBVResourceLocation@@XZ
    virtual class ResourceLocation const& getPackLocation() const;

    // vIndex: 3, symbol:
    // ?getPackName@ZipPackAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getPackName() const;

    // vIndex: 4, symbol: ?isWritable@ZipPackAccessStrategy@@UEBA_NXZ
    virtual bool isWritable() const;

    // vIndex: 5, symbol: ?setIsTrusted@ZipPackAccessStrategy@@UEAAX_N@Z
    virtual void setIsTrusted(bool newValue);

    // vIndex: 6, symbol: ?isTrusted@ZipPackAccessStrategy@@UEBA_NXZ
    virtual bool isTrusted() const;

    // vIndex: 7, symbol: ?hasAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@_N1@Z
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool) const;

    // vIndex: 8, symbol: ?hasFolder@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
    virtual bool hasFolder(class Core::Path const& packRelativePath) const;

    // vIndex: 9, symbol:
    // ?getAsset@ZipPackAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10, symbol: ?deleteAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@@Z
    virtual bool deleteAsset(class Core::Path const&);

    // vIndex: 11, symbol:
    // ?writeAsset@ZipPackAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent);

    // vIndex: 12, symbol:
    // ?forEachIn@ZipPackAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
    virtual void forEachIn(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const;

    // vIndex: 14, symbol: ?getStrategyType@ZipPackAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
    virtual ::PackAccessStrategyType getStrategyType() const;

    // vIndex: 15, symbol:
    // ?getSubPath@ZipPackAccessStrategy@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const& getSubPath() const;

    // vIndex: 16, symbol:
    // ?createSubPack@ZipPackAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 19, symbol: ?unload@ZipPackAccessStrategy@@UEAAXXZ
    virtual void unload();

    // vIndex: 21, symbol: ?readContentIdentity@ZipPackAccessStrategy@@UEBA?AVContentIdentity@@XZ
    virtual class ContentIdentity readContentIdentity() const;

    // symbol:
    // ??0ZipPackAccessStrategy@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@AEBVResourceLocation@@AEBVPath@Core@@@Z
    MCAPI ZipPackAccessStrategy(
        Bedrock::NotNullNonOwnerPtr<class IFileAccess> const& fileAccess,
        class ResourceLocation const&                         location,
        class Core::Path const&                               subPath
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryReadFromPendingQueue@ZipPackAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const& packRelativePath, std::string& result) const;

    // NOLINTEND
};
