#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LinkedAssetValidator : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LinkedAssetValidator inner types declare
    // clang-format off
    struct KnownObject;
    struct KnownObjectHasher;
    struct Reference;
    struct AssetCollection;
    // clang-format on

    // LinkedAssetValidator inner types define
    enum class ValidatorStatus : uchar {
        New       = 0,
        Loaded    = 1,
        Validated = 2,
    };

    struct KnownObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mAssetType;
        ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
        // NOLINTEND
    };

    struct KnownObjectHasher {};

    struct Reference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mAssetType;
        ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
        ::ll::TypedStorage<8, 32, ::std::string> mReferencedFromContext;
        // NOLINTEND
    };

    struct AssetCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                              mIsClientAssetCollection;
        ::ll::TypedStorage<8, 24, ::std::vector<::LinkedAssetValidator::Reference>> mAssetReferences;
        ::ll::TypedStorage<8, 24, ::std::vector<::LinkedAssetValidator::Reference>> mFileReferences;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_set<
                ::LinkedAssetValidator::KnownObject,
                ::LinkedAssetValidator::KnownObjectHasher,
                ::std::equal_to<::LinkedAssetValidator::KnownObject>>>
            mAllIdentifiers;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_set<
                ::LinkedAssetValidator::KnownObject,
                ::LinkedAssetValidator::KnownObjectHasher,
                ::std::equal_to<::LinkedAssetValidator::KnownObject>>>
            mAllFiles;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        104,
        ::Bedrock::Threading::
            BasicLockbox<::std::vector<::std::shared_ptr<::LinkedAssetValidator::AssetCollection>>, ::std::mutex>>
                                                                                     mAllAssetCollections;
    ::ll::TypedStorage<1, 1, ::std::atomic<::LinkedAssetValidator::ValidatorStatus>> mIsLoadingReferences;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsClient;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkedAssetValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinkedAssetValidator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LinkedAssetValidator(bool isClient);

    MCNAPI void _initThreadAssetCollection();

#ifdef LL_PLAT_C
    MCNAPI void addFile(int assetType, ::std::string const& filepath);
#endif

    MCNAPI void addFileReference(int assetType, ::std::string const& filepath, ::std::string contextString);

    MCNAPI void addIdentifier(int assetType, ::std::string const& identifier);

    MCNAPI void addReference(int assetType, ::std::string const& identifier, ::std::string contextString);

    MCNAPI void reset();

#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::std::string> validateLinkedAssets();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::weak_ptr<::LinkedAssetValidator::AssetCollection>& mPerThreadAssetCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool isClient);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
