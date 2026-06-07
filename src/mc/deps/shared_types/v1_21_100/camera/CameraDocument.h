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
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~Description();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_100::CameraDocument::Description> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_100::CameraDefinitions>           mComponents;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CameraDocument& operator=(CameraDocument const&);
    CameraDocument();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CameraDocument(::SharedTypes::v1_21_100::CameraDocument const&);

    MCAPI ~CameraDocument();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::SharedTypes::v1_21_100::CameraDocument const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
