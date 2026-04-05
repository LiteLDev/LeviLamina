#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<4, 4>  mUnk34eb49;
        ::ll::UntypedStorage<8, 32> mUnka5ac8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        KnownObject& operator=(KnownObject const&);
        KnownObject(KnownObject const&);
        KnownObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~KnownObject();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct KnownObjectHasher {};

    struct Reference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk6cb2bf;
        ::ll::UntypedStorage<8, 32> mUnk41daf1;
        ::ll::UntypedStorage<8, 32> mUnkce0e5d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Reference& operator=(Reference const&);
        Reference(Reference const&);
        Reference();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Reference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AssetCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkb4df7f;
        ::ll::UntypedStorage<8, 24> mUnkce6ed9;
        ::ll::UntypedStorage<8, 24> mUnk76fe3d;
        ::ll::UntypedStorage<8, 64> mUnkd26c34;
        ::ll::UntypedStorage<8, 64> mUnkf668bd;
        // NOLINTEND

    public:
        // prevent constructor by default
        AssetCollection& operator=(AssetCollection const&);
        AssetCollection(AssetCollection const&);
        AssetCollection();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit AssetCollection(bool isClientCollection);

        MCNAPI ~AssetCollection();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(bool isClientCollection);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk23ba6e;
    ::ll::UntypedStorage<1, 1>   mUnk86474b;
    ::ll::UntypedStorage<1, 1>   mUnk1d7f18;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkedAssetValidator& operator=(LinkedAssetValidator const&);
    LinkedAssetValidator(LinkedAssetValidator const&);
    LinkedAssetValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinkedAssetValidator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit LinkedAssetValidator(bool isClient);
#endif

    MCNAPI void _initThreadAssetCollection();

#ifdef LL_PLAT_C
    MCNAPI void addFile(int assetType, ::std::string const& filepath);
#endif

    MCNAPI void addFileReference(int assetType, ::std::string const& filepath, ::std::string contextString);

    MCNAPI void addIdentifier(int assetType, ::std::string const& identifier);

    MCNAPI void addReference(int assetType, ::std::string const& identifier, ::std::string contextString);

#ifdef LL_PLAT_C
    MCNAPI void reset();
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
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(bool isClient);
#endif
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
