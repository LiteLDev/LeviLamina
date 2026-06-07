#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IStructurePoolActorPredicate;
// clang-format on

class StructurePoolActorRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolActorPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    mResultActor;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolActorRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolActorRule(
        ::std::unique_ptr<::IStructurePoolActorPredicate>&& sourceActorPredicate,
        ::std::string                                       resultActor
    );

    MCAPI ~StructurePoolActorRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::unique_ptr<::IStructurePoolActorPredicate>&& sourceActorPredicate, ::std::string resultActor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
