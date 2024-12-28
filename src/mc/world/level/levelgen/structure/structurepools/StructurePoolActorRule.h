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
    ::ll::UntypedStorage<8, 8>  mUnk89e0b5;
    ::ll::UntypedStorage<8, 32> mUnk49fbcc;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolActorRule& operator=(StructurePoolActorRule const&);
    StructurePoolActorRule(StructurePoolActorRule const&);
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
    MCAPI void $dtor();
    // NOLINTEND
};
