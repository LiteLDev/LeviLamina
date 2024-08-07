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
    // vIndex: 0
    virtual ~DirectoryPackAccessStrategy();

    // vIndex: 1
    virtual uint64 getPackSize() const;

    // vIndex: 2
    virtual class ResourceLocation const& getPackLocation() const;

    // vIndex: 3
    virtual std::string const& getPackName() const;

    // vIndex: 4
    virtual bool isWritable() const;

    // vIndex: 5
    virtual void setIsTrusted(bool);

    // vIndex: 6
    virtual bool isTrusted() const;

    // vIndex: 7
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool) const;

    // vIndex: 8
    virtual bool hasFolder(class Core::Path const& packRelativePath) const;

    // vIndex: 9
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10
    virtual bool deleteAsset(class Core::Path const&);

    // vIndex: 11
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent);

    // vIndex: 12
    virtual void forEachIn(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const;

    // vIndex: 13
    virtual void forEachInAssetSet(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback
    ) const;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const;

    // vIndex: 16
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 18
    virtual bool canRecurse() const;

    // vIndex: 19
    virtual void unload();

    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const& packLocation, bool recurse);

    // NOLINTEND
};
