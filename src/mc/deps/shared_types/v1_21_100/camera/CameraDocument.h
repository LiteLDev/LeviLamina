#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraDocument {
public:
    // CameraDocument inner types declare
    // clang-format off
    struct Description;
    // clang-format on

    // CameraDocument inner types define
    struct Description {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk6051ff;
        // NOLINTEND

    public:
        // prevent constructor by default
        Description& operator=(Description const&);
        Description(Description const&);
        Description();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::SharedTypes::v1_21_100::CameraDocument::Description&
        operator=(::SharedTypes::v1_21_100::CameraDocument::Description&&);

        MCNAPI_C ~Description();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c6e47;
    ::ll::UntypedStorage<8, 56> mUnkb150b1;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDocument& operator=(CameraDocument const&);
    CameraDocument(CameraDocument const&);
    CameraDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::SharedTypes::v1_21_100::CameraDocument& operator=(::SharedTypes::v1_21_100::CameraDocument&&);

    MCNAPI_C ~CameraDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
