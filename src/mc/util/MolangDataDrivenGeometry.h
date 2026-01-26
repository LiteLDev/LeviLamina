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

public:
    // prevent constructor by default
    MolangDataDrivenGeometry& operator=(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::MolangDataDrivenGeometry& operator=(::MolangDataDrivenGeometry&&);

    MCFOLD bool operator==(::MolangDataDrivenGeometry const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::MolangDataDrivenGeometry const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::MolangDataDrivenGeometry const&);

    MCAPI_C void* $ctor(::std::shared_ptr<::DataDrivenGeometry> geometry, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
