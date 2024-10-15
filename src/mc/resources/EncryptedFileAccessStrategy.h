#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
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
    // vIndex: 0
    virtual ~EncryptedFileAccessStrategy() = default;

    // vIndex: 4
    virtual bool isWritable() const;

    // vIndex: 6
    virtual bool isTrusted() const;

    // vIndex: 7
    virtual bool hasAsset(class Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    // vIndex: 9
    virtual bool getAsset(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    // vIndex: 10
    virtual bool deleteAsset(class Core::Path const& packRelativePath);

    // vIndex: 11
    virtual bool writeAsset(class Core::Path const& packRelativePath, std::string const& fileContent);

    // vIndex: 16
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const& subPath) const;

    // vIndex: 17
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 21
    virtual class ContentIdentity readContentIdentity() const;

    MCAPI EncryptedFileAccessStrategy(
        class ResourceLocation const&                                                       resourceLocation,
        class ContentIdentity const&                                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&                 keyProvider,
        bool                                                                                canRecurse,
        std::optional<std::unordered_map<class Core::PathBuffer<std::string>, std::string>> assetSet
    );

    MCAPI static bool isValidEncryptedPack(class Core::Path const& pathToPack, class ContentIdentity& contentIdentity);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::string _getContentsFile();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool
    _getContentIdentityFromEncryptedStream(std::string& stream, class ContentIdentity& contentIdentity);

    MCAPI static void _transformStream(std::string& stream, std::string const& key, uint64 offset);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ResourceLocation const&                                                       resourceLocation,
        class ContentIdentity const&                                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&                 keyProvider,
        bool                                                                                canRecurse,
        std::optional<std::unordered_map<class Core::PathBuffer<std::string>, std::string>> assetSet
    );

    MCAPI std::unique_ptr<class PackAccessStrategy> createSubPack$(class Core::Path const& subPath) const;

    MCAPI bool deleteAsset$(class Core::Path const& packRelativePath);

    MCAPI ::PackAccessAssetGenerationResult generateAssetSet$();

    MCAPI bool getAsset$(class Core::Path const& packRelativePath, std::string& result, bool trustedContentOnly) const;

    MCAPI bool hasAsset$(class Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCAPI bool isTrusted$() const;

    MCAPI bool isWritable$() const;

    MCAPI class ContentIdentity readContentIdentity$() const;

    MCAPI bool writeAsset$(class Core::Path const& packRelativePath, std::string const& fileContent);

    // NOLINTEND
};
