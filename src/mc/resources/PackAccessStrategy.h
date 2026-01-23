#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
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
    virtual ~PackAccessStrategy();

    virtual uint64 getPackSize() const = 0;

    virtual ::ResourceLocation const& getPackLocation() const = 0;

    virtual ::std::string const& getPackName() const = 0;

    virtual bool isWritable() const = 0;

    virtual bool isTrusted() const = 0;

    virtual bool hasAsset(::Core::Path const&, bool, bool) const = 0;

    virtual bool hasFolder(::Core::Path const&) const = 0;

    virtual bool getAsset(::Core::Path const&, ::std::string&, bool) const = 0;

    virtual void forEachIn(::Core::Path const&, ::std::function<void(::Core::Path const&)>, bool) const = 0;

    virtual void forEachInAssetSet(::Core::Path const&, ::std::function<void(::Core::Path const&)>) const;

    virtual ::PackAccessStrategyType getStrategyType() const = 0;

    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const;

    virtual bool supportsSignatureVerification() const;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const&) const = 0;

    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    virtual ::PackAccessAssetGenerationResult regenerateAssetSet();

    virtual bool canRecurse() const;

    virtual void unload() = 0;

    virtual ::ContentIdentity readContentIdentity() const;

    virtual bool isAssetExtractionViable() const;

    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackAccessStrategy();

    MCNAPI void _forEachInAssetSet(::std::function<void(::Core::Path const&)> callback) const;

    MCNAPI bool _isInAssetSet(::Core::Path const& path) const;

    MCNAPI bool _isInAssetSetCaseInsensative(::Core::Path const& path) const;

    MCNAPI void _upgradeContentsFile(::Json::Value& root);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const& packRelativePath) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_EXTENSION();

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_FOLDER();

    MCNAPI static ::Core::PathBuffer<::std::string> const& PACK_IMPORT_LOCK_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachInAssetSet(::Core::Path const&, ::std::function<void(::Core::Path const&)>) const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI ::PackAccessAssetGenerationResult $regenerateAssetSet();

    MCNAPI bool $canRecurse() const;

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI bool $isAssetExtractionViable() const;

    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
