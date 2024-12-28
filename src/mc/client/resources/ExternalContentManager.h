#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ImportContext;
// clang-format on

class ExternalContentManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ExternalContentManager inner types declare
    // clang-format off
    struct ImportRequestData;
    struct LoadingContentData;
    struct LoadingContentDataHasher;
    // clang-format on

    // ExternalContentManager inner types define
    struct ImportRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk3b1c94;
        ::ll::UntypedStorage<8, 32> mUnkea46b2;
        ::ll::UntypedStorage<1, 1>  mUnk9ff810;
        ::ll::UntypedStorage<4, 4>  mUnk49c4f1;
        ::ll::UntypedStorage<1, 1>  mUnk6f6c17;
        ::ll::UntypedStorage<8, 32> mUnk639fcc;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImportRequestData& operator=(ImportRequestData const&);
        ImportRequestData(ImportRequestData const&);
        ImportRequestData();
    };

    struct LoadingContentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkc59ccd;
        ::ll::UntypedStorage<8, 56> mUnk3a33aa;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadingContentData& operator=(LoadingContentData const&);
        LoadingContentData(LoadingContentData const&);
        LoadingContentData();
    };

    struct LoadingContentDataHasher {
    public:
        // prevent constructor by default
        LoadingContentDataHasher& operator=(LoadingContentDataHasher const&);
        LoadingContentDataHasher(LoadingContentDataHasher const&);
        LoadingContentDataHasher();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8fc340;
    ::ll::UntypedStorage<1, 1>  mUnkc147aa;
    ::ll::UntypedStorage<8, 8>  mUnka2b54f;
    ::ll::UntypedStorage<8, 8>  mUnk177959;
    ::ll::UntypedStorage<8, 24> mUnk2d237f;
    ::ll::UntypedStorage<8, 8>  mUnk249720;
    ::ll::UntypedStorage<8, 24> mUnk281cf3;
    ::ll::UntypedStorage<8, 16> mUnkacf3a3;
    ::ll::UntypedStorage<8, 8>  mUnk4b6455;
    ::ll::UntypedStorage<8, 8>  mUnkf8d87b;
    ::ll::UntypedStorage<8, 24> mUnk4fcc6f;
    ::ll::UntypedStorage<1, 1>  mUnk85f83b;
    ::ll::UntypedStorage<8, 40> mUnk906d70;
    ::ll::UntypedStorage<8, 32> mUnkf11192;
    ::ll::UntypedStorage<8, 64> mUnkedebfa;
    ::ll::UntypedStorage<8, 8>  mUnk67f680;
    ::ll::UntypedStorage<8, 8>  mUnk81790a;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManager& operator=(ExternalContentManager const&);
    ExternalContentManager(ExternalContentManager const&);
    ExternalContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalContentManager() /*override*/;

    // vIndex: 1
    virtual void
    importContent(::std::shared_ptr<::ImportContext>, ::Core::PathBuffer<::std::string> const&, bool, ::LoadImportedLevelData, bool, bool, ::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $importContent(::std::shared_ptr<::ImportContext>, ::Core::PathBuffer<::std::string> const&, bool, ::LoadImportedLevelData, bool, bool, ::std::string const&);
    // NOLINTEND
};
