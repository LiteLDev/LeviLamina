#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class LoadResultAny; }
// clang-format on

namespace Puv {

class Upgrader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk90f022;
    ::ll::UntypedStorage<8, 24> mUnk85be2e;
    // NOLINTEND

public:
    // prevent constructor by default
    Upgrader& operator=(Upgrader const&);
    Upgrader(Upgrader const&);
    Upgrader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Upgrader();

    // vIndex: 1
    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Upgrader(::SemVersion const& from, ::SemVersion const& to);

    MCNAPI ::Puv::LoadResultAny upgrade(::Puv::LoadResultAny source) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion const& from, ::SemVersion const& to);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
