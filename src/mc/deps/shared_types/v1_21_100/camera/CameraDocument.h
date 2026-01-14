#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/CameraDefinitions.h"

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
        ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
        // NOLINTEND

    public:
        // prevent constructor by default
        Description& operator=(Description const&);
        Description(Description const&);
        Description();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD_C ::SharedTypes::v1_21_100::CameraDocument::Description&
        operator=(::SharedTypes::v1_21_100::CameraDocument::Description&&);

        MCAPI_C ~Description();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_100::CameraDocument::Description> mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_21_100::CameraDefinitions>           mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDocument& operator=(CameraDocument const&);
    CameraDocument(CameraDocument const&);
    CameraDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::SharedTypes::v1_21_100::CameraDocument& operator=(::SharedTypes::v1_21_100::CameraDocument&&);

    MCAPI_C ~CameraDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
