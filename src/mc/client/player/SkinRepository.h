#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/ImagePickingCallback.h"

class SkinRepository : public ::Bedrock::EnableNonOwnerReferences,
                       public ::std::enable_shared_from_this<::SkinRepository>,
                       public ::ImagePickingCallback {
public:
    // SkinRepository inner types declare
    // clang-format off
    struct LoadListener;
    // clang-format on

    // SkinRepository inner types define
    struct LoadListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke441c0;
        ::ll::UntypedStorage<8, 64> mUnkb206d2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadListener& operator=(LoadListener const&);
        LoadListener(LoadListener const&);
        LoadListener();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk715019;
    ::ll::UntypedStorage<8, 8>  mUnk8c2e3d;
    ::ll::UntypedStorage<8, 8>  mUnk60d10f;
    ::ll::UntypedStorage<8, 24> mUnkfd8437;
    ::ll::UntypedStorage<8, 24> mUnk4b0178;
    ::ll::UntypedStorage<8, 64> mUnk97be98;
    ::ll::UntypedStorage<8, 24> mUnk4bd95d;
    ::ll::UntypedStorage<8, 8>  mUnk70a3c9;
    ::ll::UntypedStorage<8, 8>  mUnkbbc430;
    ::ll::UntypedStorage<8, 24> mUnk269f8a;
    ::ll::UntypedStorage<8, 24> mUnk9f9098;
    ::ll::UntypedStorage<8, 64> mUnkd40422;
    ::ll::UntypedStorage<1, 1>  mUnk184d8d;
    ::ll::UntypedStorage<8, 16> mUnk5c7fe7;
    ::ll::UntypedStorage<8, 24> mUnkdbc0b1;
    ::ll::UntypedStorage<8, 8>  mUnk65c979;
    ::ll::UntypedStorage<1, 1>  mUnk44a0c2;
    ::ll::UntypedStorage<8, 8>  mUnkbe90bf;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinRepository& operator=(SkinRepository const&);
    SkinRepository(SkinRepository const&);
    SkinRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkinRepository() /*override*/ = default;

    // vIndex: 1
    virtual void onImagePickingSuccess(::std::string const&) /*override*/;

    // vIndex: 2
    virtual void onImagePickingCanceled() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
