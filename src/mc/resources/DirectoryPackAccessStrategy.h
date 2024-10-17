#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
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
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    // vIndex: 8
    virtual bool hasFolder(class Core::Path const& packRelativePath) const;

    // vIndex: 9
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10
    virtual bool deleteAsset(class Core::Path const& packRelativePath);

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ResourceLocation const& packLocation, bool recurse);

    MCAPI void dtor$();

    MCAPI bool canRecurse$() const;

    MCAPI std::unique_ptr<class PackAccessStrategy> createSubPack$(class Core::Path const& subPath) const;

    MCAPI bool deleteAsset$(class Core::Path const& packRelativePath);

    MCAPI void forEachIn$(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback,
        bool                                         recurseAnyways
    ) const;

    MCAPI void forEachInAssetSet$(
        class Core::Path const&                      packRelativePath,
        std::function<void(class Core::Path const&)> callback
    ) const;

    MCAPI bool getAsset$(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    MCAPI class ResourceLocation const& getPackLocation$() const;

    MCAPI std::string const& getPackName$() const;

    MCAPI uint64 getPackSize$() const;

    MCAPI ::PackAccessStrategyType getStrategyType$() const;

    MCAPI bool hasAsset$(class Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCAPI bool hasFolder$(class Core::Path const& packRelativePath) const;

    MCAPI bool isTrusted$() const;

    MCAPI bool isWritable$() const;

    MCAPI void setIsTrusted$(bool);

    MCAPI void unload$();

    MCAPI bool writeAsset$(class Core::Path const& packRelativePath, std::string const& fileContent);

    // NOLINTEND
};
