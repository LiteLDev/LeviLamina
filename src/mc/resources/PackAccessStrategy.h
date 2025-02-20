#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ResourceLocation;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2ff3dc;
    ::ll::UntypedStorage<8, 16> mUnkd705b7;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategy& operator=(PackAccessStrategy const&);
    PackAccessStrategy(PackAccessStrategy const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackAccessStrategy();

    // vIndex: 1
    virtual uint64 getPackSize() const = 0;

    // vIndex: 2
    virtual ::ResourceLocation const& getPackLocation() const = 0;

    // vIndex: 3
    virtual ::std::string const& getPackName() const = 0;

    // vIndex: 4
    virtual bool isWritable() const = 0;

    // vIndex: 5
    virtual void setIsTrusted(bool) = 0;

    // vIndex: 6
    virtual bool isTrusted() const = 0;

    // vIndex: 7
    virtual bool hasAsset(::Core::Path const&, bool, bool) const = 0;

    // vIndex: 8
    virtual bool hasFolder(::Core::Path const&) const = 0;

    // vIndex: 9
    virtual bool getAsset(::Core::Path const&, ::std::string&, bool) const = 0;

    // vIndex: 10
    virtual bool deleteAsset(::Core::Path const&) = 0;

    // vIndex: 11
    virtual bool writeAsset(::Core::Path const&, ::std::string const&) = 0;

    // vIndex: 12
    virtual void forEachIn(::Core::Path const&, ::std::function<void(::Core::Path const&)>, bool) const = 0;

    // vIndex: 13
    virtual void forEachInAssetSet(::Core::Path const&, ::std::function<void(::Core::Path const&)>) const;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const = 0;

    // vIndex: 15
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const;

    // vIndex: 16
    virtual bool supportsSignatureVerification() const;

    // vIndex: 17
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const&) const = 0;

    // vIndex: 18
    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    // vIndex: 19
    virtual ::PackAccessAssetGenerationResult regenerateAssetSet();

    // vIndex: 20
    virtual bool canRecurse() const;

    // vIndex: 21
    virtual void unload() = 0;

    // vIndex: 22
    virtual bool hasUpgradeFiles() const;

    // vIndex: 23
    virtual ::ContentIdentity readContentIdentity() const;

    // vIndex: 24
    virtual bool isAssetExtractionViable() const;

    // vIndex: 25
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackAccessStrategy();

    MCAPI void _addToAssetSet(::Core::Path const& path, ::std::string const& data);

    MCAPI void _forEachInAssetSet(::std::function<void(::Core::Path const&)> callback) const;

    MCAPI void _upgradeContentsFile(::Json::Value& root);

    MCAPI ::Bedrock::Resources::PreloadedPathHandle preload(::Core::Path const& packRelativePath) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& PACK_IMPORT_LOCK_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $forEachInAssetSet(::Core::Path const&, ::std::function<void(::Core::Path const&)>) const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCFOLD bool $supportsSignatureVerification() const;

    MCAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCAPI ::PackAccessAssetGenerationResult $regenerateAssetSet();

    MCFOLD bool $canRecurse() const;

    MCAPI bool $hasUpgradeFiles() const;

    MCAPI ::ContentIdentity $readContentIdentity() const;

    MCFOLD bool $isAssetExtractionViable() const;

    MCFOLD ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
