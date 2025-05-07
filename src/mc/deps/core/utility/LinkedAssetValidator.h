#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LinkedAssetValidator : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LinkedAssetValidator inner types declare
    // clang-format off
    struct AssetCollection;
    struct KnownObject;
    struct KnownObjectHasher;
    struct Reference;
    // clang-format on

    // LinkedAssetValidator inner types define
    struct Reference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk6cb2bf;
        ::ll::UntypedStorage<8, 32> mUnk532ea1;
        ::ll::UntypedStorage<8, 32> mUnk6b5cf2;
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

    struct KnownObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk34eb49;
        ::ll::UntypedStorage<8, 32> mUnk9340c6;
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

    struct AssetCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkd365b1;
        ::ll::UntypedStorage<8, 24> mUnk8408b9;
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
        MCNAPI ~AssetCollection();
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
    ::ll::UntypedStorage<8, 184> mUnk2a951c;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkedAssetValidator& operator=(LinkedAssetValidator const&);
    LinkedAssetValidator(LinkedAssetValidator const&);
    LinkedAssetValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkedAssetValidator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addIdentifier(int assetType, ::std::string const& identifier);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
