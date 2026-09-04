#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion>       mSemVersion;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>     mMolangVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    MinEngineVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinEngineVersion(::SemVersion const& version);

#ifdef LL_PLAT_C
    MCAPI ::Json::Value createJsonValue() const;

    MCAPI ::SemVersion getSemVersion() const;
#endif

    MCAPI bool operator==(::MinEngineVersion const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MinEngineVersion fromString(::std::string const& string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SemVersion const& version);
    // NOLINTEND
};
