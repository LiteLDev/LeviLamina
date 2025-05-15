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
    MolangDataDrivenGeometry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangDataDrivenGeometry(::MolangDataDrivenGeometry const&);

    MCFOLD bool operator==(::MolangDataDrivenGeometry const& rhs) const;

    MCAPI ~MolangDataDrivenGeometry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangDataDrivenGeometry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
