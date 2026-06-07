#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Placement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mType;
    ::ll::TypedStorage<8, 32, ::std::string> mHeightmap;
    ::ll::TypedStorage<8, 32, ::std::string> mEntitySpawnPredicate;
    ::ll::TypedStorage<8, 32, ::std::string> mObstructionPredicate;
    // NOLINTEND

public:
    // prevent constructor by default
    Placement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Placement(::SharedTypes::v1_21_60::Spawn::Placement const&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::Placement& operator=(::SharedTypes::v1_21_60::Spawn::Placement&&);

    MCFOLD ::SharedTypes::v1_21_60::Spawn::Placement& operator=(::SharedTypes::v1_21_60::Spawn::Placement const&);

    MCAPI ~Placement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_60::Spawn::Placement const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
