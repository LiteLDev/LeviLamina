#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
// clang-format on

struct MolangDataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenGeometry>> mGeometry;
    ::ll::TypedStorage<8, 48, ::HashedString>                        mName;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangDataDrivenGeometry();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MolangDataDrivenGeometry(::std::shared_ptr<::DataDrivenGeometry> geometry, ::HashedString const& name);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::DataDrivenGeometry> geometry, ::HashedString const& name);
#endif
    // NOLINTEND
};
