#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
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
    // vIndex: 0
    virtual ~PackAccessStrategy();

    // vIndex: 1
    virtual uint64 getPackSize() const = 0;

    // vIndex: 2
    virtual class ResourceLocation const& getPackLocation() const = 0;

    // vIndex: 3
    virtual std::string const& getPackName() const = 0;

    // vIndex: 4
    virtual bool isWritable() const = 0;

    // vIndex: 5
    virtual void setIsTrusted(bool) = 0;

    // vIndex: 6
    virtual bool isTrusted() const = 0;

    // vIndex: 7
    virtual bool
    hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const = 0;

    // vIndex: 8
    virtual bool hasFolder(class Core::Path const& packRelativePath) const = 0;

    // vIndex: 9
    virtual bool
    getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const = 0;

    // vIndex: 10
    virtual bool deleteAsset(class Core::Path const& packRelativePath) = 0;

    // vIndex: 11
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent) = 0;

    // vIndex: 12
    virtual void forEachIn(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const = 0;

    // vIndex: 13
    virtual void forEachInAssetSet(class Core::Path const&, std::function<void(class Core::Path const&)>) const;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const = 0;

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const& getSubPath() const;

    // vIndex: 16
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const = 0;

    // vIndex: 17
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 18
    virtual bool canRecurse() const;

    // vIndex: 19
    virtual void unload() = 0;

    // vIndex: 20
    virtual bool hasUpgradeFiles() const;

    // vIndex: 21
    virtual class ContentIdentity readContentIdentity() const;

    MCAPI PackAccessStrategy();

    MCAPI bool hasGeneratedAssetSet() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addToAssetSet(class Core::Path const& path);

    MCAPI void _deleteFromAssetSet(class Core::Path const& path);

    MCAPI bool _isInAssetSet(class Core::Path const& path) const;

    MCAPI bool _isInAssetSetCaseInsensative(class Core::Path const& path) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool canRecurse$() const;

    MCAPI void forEachInAssetSet$(class Core::Path const&, std::function<void(class Core::Path const&)>) const;

    MCAPI ::PackAccessAssetGenerationResult generateAssetSet$();

    MCAPI class Core::PathBuffer<std::string> const& getSubPath$() const;

    MCAPI bool hasUpgradeFiles$() const;

    MCAPI class ContentIdentity readContentIdentity$() const;

    MCAPI static class Core::PathBuffer<std::string> const& PACK_IMPORT_LOCK_FILE();

    // NOLINTEND
};
