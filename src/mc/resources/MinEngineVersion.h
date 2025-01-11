#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
// clang-format on

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkce6b03;
    ::ll::UntypedStorage<4, 4>   mUnk7524e3;
    ::ll::UntypedStorage<2, 2>   mUnk2c6d18;
    // NOLINTEND

public:
    // prevent constructor by default
    MinEngineVersion& operator=(MinEngineVersion const&);
    MinEngineVersion(MinEngineVersion const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinEngineVersion();

    MCAPI explicit MinEngineVersion(::SemVersion const& version);

    MCAPI ::std::string asString() const;

    MCAPI ::Json::Value createJsonValue() const;

    MCFOLD ::CurrentCmdVersion getCommandVersion() const;

    MCAPI ::MolangVersion getMolangVersion() const;

    MCAPI bool isValid() const;

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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SemVersion const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
