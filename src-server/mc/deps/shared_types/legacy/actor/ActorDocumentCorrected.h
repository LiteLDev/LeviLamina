#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocumentCorrected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkc1793d;
    ::ll::UntypedStorage<8, 56> mUnke2f09d;
    ::ll::UntypedStorage<8, 64> mUnke2cc91;
    ::ll::UntypedStorage<8, 72> mUnkc44126;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDocumentCorrected& operator=(ActorDocumentCorrected const&);
    ActorDocumentCorrected(ActorDocumentCorrected const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocumentCorrected();

    MCNAPI ActorDocumentCorrected(::SharedTypes::Legacy::ActorDocumentCorrected&&);

    MCNAPI ~ActorDocumentCorrected();
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

    MCNAPI void* $ctor(::SharedTypes::Legacy::ActorDocumentCorrected&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
