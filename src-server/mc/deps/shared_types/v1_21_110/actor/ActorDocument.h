#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk7ed1d7;
    ::ll::UntypedStorage<8, 56> mUnk5697a0;
    ::ll::UntypedStorage<8, 64> mUnkaa69c2;
    ::ll::UntypedStorage<8, 72> mUnka21679;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument& operator=(ActorDocument const&);
    ActorDocument(ActorDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocument();

    MCNAPI ActorDocument(::SharedTypes::v1_21_110::ActorDocument&&);

    MCNAPI ~ActorDocument();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_110::ActorDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
