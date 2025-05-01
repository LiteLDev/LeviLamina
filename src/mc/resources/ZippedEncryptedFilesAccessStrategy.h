#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/EncryptedFileAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class ZippedEncryptedFilesAccessStrategy : public ::EncryptedFileAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c959c;
    ::ll::UntypedStorage<8, 8>  mUnkbe582d;
    // NOLINTEND

public:
    // prevent constructor by default
    ZippedEncryptedFilesAccessStrategy& operator=(ZippedEncryptedFilesAccessStrategy const&);
    ZippedEncryptedFilesAccessStrategy(ZippedEncryptedFilesAccessStrategy const&);
    ZippedEncryptedFilesAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    // vIndex: 7
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    // vIndex: 10
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    // vIndex: 12
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 13
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    // vIndex: 14
    virtual bool supportsSignatureVerification() const /*override*/;

    // vIndex: 15
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 23
    virtual ::std::string _getContentsFile() /*override*/;

    // vIndex: 24
    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const /*override*/;

    // vIndex: 0
    virtual ~ZippedEncryptedFilesAccessStrategy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZippedEncryptedFilesAccessStrategy(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _getRawContentsFile(::Core::Path const& pathToPack, ::Core::Path const& subPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCNAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI ::std::string $_getContentsFile();

    MCNAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
