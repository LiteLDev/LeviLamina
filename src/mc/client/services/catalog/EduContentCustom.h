#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
struct HardwareCompatibilityContext;
namespace Json { class Value; }
// clang-format on

struct EduContentCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1328> mUnkec7d26;
    ::ll::UntypedStorage<8, 32>   mUnkae4a9e;
    ::ll::UntypedStorage<4, 4>    mUnk3d3ac7;
    ::ll::UntypedStorage<4, 4>    mUnkf4e1f4;
    ::ll::UntypedStorage<4, 4>    mUnkc90de3;
    ::ll::UntypedStorage<8, 32>   mUnk243cba;
    ::ll::UntypedStorage<8, 32>   mUnkb167f9;
    ::ll::UntypedStorage<8, 32>   mUnk41fdfe;
    ::ll::UntypedStorage<8, 32>   mUnk18e32d;
    ::ll::UntypedStorage<8, 32>   mUnk4a0ea8;
    ::ll::UntypedStorage<8, 32>   mUnk2f1438;
    ::ll::UntypedStorage<8, 32>   mUnk8ca84d;
    ::ll::UntypedStorage<8, 32>   mUnk69a6b2;
    ::ll::UntypedStorage<8, 32>   mUnk62e675;
    ::ll::UntypedStorage<8, 32>   mUnk329bd0;
    ::ll::UntypedStorage<8, 32>   mUnk661e38;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentCustom& operator=(EduContentCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C EduContentCustom();

    MCNAPI_C EduContentCustom(::EduContentCustom&&);

    MCNAPI_C EduContentCustom(::EduContentCustom const&);

    MCNAPI_C void fromJson(
        ::Json::Value const&                  customObject,
        bool                                  pascalCase,
        ::CustomDocumentModifier*             modifier,
        ::HardwareCompatibilityContext const& hwCompContext
    );

    MCNAPI_C ~EduContentCustom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::EduContentCustom&&);

    MCNAPI_C void* $ctor(::EduContentCustom const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
