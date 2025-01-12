#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Logger; }
// clang-format on

namespace Puv {

class LoadResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk545455;
    ::ll::UntypedStorage<8, 40>  mUnk8aa8ef;
    ::ll::UntypedStorage<8, 80>  mUnk6e20bb;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadResultAny& operator=(LoadResultAny const&);
    LoadResultAny(LoadResultAny const&);
    LoadResultAny();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadResultAny(::Puv::LoadResultAny&&);

    MCFOLD bool isValid() const;

    MCAPI ::Puv::Logger const& log() const;

    MCFOLD ::Puv::Logger& log();

    MCFOLD explicit operator bool() const;

    MCFOLD ::SemVersion const& version() const;

    MCAPI ~LoadResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Puv::LoadResultAny makeError(::Puv::Logger log);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Puv::LoadResultAny&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Puv
