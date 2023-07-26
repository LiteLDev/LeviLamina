#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/resources/PackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {

public:
    // prevent constructor by default
    DirectoryPackAccessStrategy& operator=(DirectoryPackAccessStrategy const&) = delete;
    DirectoryPackAccessStrategy(DirectoryPackAccessStrategy const&)            = delete;
    DirectoryPackAccessStrategy()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getPackSize\@DirectoryPackAccessStrategy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getPackLocation\@DirectoryPackAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const& getPackLocation() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getPackName\@DirectoryPackAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getPackName() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isWritable\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?setIsTrusted\@DirectoryPackAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isTrusted\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?hasAsset\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N1\@Z
     */
    virtual bool hasAsset(class Core::Path const&, bool, bool) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?hasFolder\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getAsset\@DirectoryPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?deleteAsset\@DirectoryPackAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?writeAsset\@DirectoryPackAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const&, std::string const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?forEachIn\@DirectoryPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void
    forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool) const; // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?forEachInAssetSet\@DirectoryPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@\@Z
     */
    virtual void
    forEachInAssetSet(class Core::Path const&, class std::function<void(class Core::Path const&)>) const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getStrategyType\@DirectoryPackAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?createSubPack\@DirectoryPackAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?canRecurse\@DirectoryPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool canRecurse() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?unload\@DirectoryPackAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKACCESSSTRATEGY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DirectoryPackAccessStrategy(); // NOLINT
#endif
    /**
     * @symbol ??0DirectoryPackAccessStrategy\@\@QEAA\@AEBVResourceLocation\@\@_N\@Z
     */
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const&, bool); // NOLINT
};
