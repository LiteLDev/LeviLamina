#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
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
    // vIndex: 0
    virtual ~ZipPackAccessStrategy();

    // vIndex: 1
    virtual uint64 getPackSize() const;

    // vIndex: 2
    virtual class ResourceLocation const& getPackLocation() const;

    // vIndex: 3
    virtual std::string const& getPackName() const;

    // vIndex: 4
    virtual bool isWritable() const;

    // vIndex: 5
    virtual void setIsTrusted(bool newValue);

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

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const;

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const& getSubPath() const;

    // vIndex: 16
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 19
    virtual void unload();

    // vIndex: 21
    virtual class ContentIdentity readContentIdentity() const;

    MCAPI ZipPackAccessStrategy(
        Bedrock::NotNullNonOwnerPtr<class IFileAccess> const& fileAccess,
        class ResourceLocation const&                         location,
        class Core::Path const&                               subPath
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const& packRelativePath, std::string& result) const;

    // NOLINTEND
};
