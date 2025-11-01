#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/versionless/molang/MolangVersion.h"

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion> mSemVersion;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion> mMolangVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    MinEngineVersion& operator=(MinEngineVersion const&);
    MinEngineVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinEngineVersion(::MinEngineVersion const&);

    MCAPI ::MinEngineVersion& operator=(::MinEngineVersion&&);

    MCAPI ~MinEngineVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MinEngineVersion fromString(::std::string const& string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinEngineVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
