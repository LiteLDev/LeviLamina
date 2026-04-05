#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion>       mSemVersion;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>     mMolangVersion;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    MinEngineVersion& operator=(MinEngineVersion const&);
    MinEngineVersion(MinEngineVersion const&);
    MinEngineVersion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    MinEngineVersion();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MinEngineVersion(::MinEngineVersion const&);
#endif

    MCAPI ::MinEngineVersion& operator=(::MinEngineVersion&&);

#ifdef LL_PLAT_C
    MCAPI ::MinEngineVersion& operator=(::MinEngineVersion const&);
#endif

    MCAPI bool operator==(::MinEngineVersion const& rhs) const;

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
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MinEngineVersion const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
