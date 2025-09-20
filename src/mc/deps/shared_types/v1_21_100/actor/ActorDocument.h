#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_21_100 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk7dc7da;
    ::ll::UntypedStorage<8, 56> mUnkbe10ae;
    ::ll::UntypedStorage<8, 64> mUnk753369;
    ::ll::UntypedStorage<8, 72> mUnk513b70;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocument& operator=(ActorDocument const&);
    ActorDocument(ActorDocument const&);
    ActorDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocument(::SharedTypes::v1_21_100::ActorDocument&&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_100::ActorDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
