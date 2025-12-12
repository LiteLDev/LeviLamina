#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkeae628;
    ::ll::UntypedStorage<8, 64>  mUnk1a9e51;
    ::ll::UntypedStorage<8, 256> mUnk6ca56c;
    ::ll::UntypedStorage<8, 56>  mUnk385ede;
    // NOLINTEND

public:
    // prevent constructor by default
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S Description(::SharedTypes::v1_21_110::BlockDefinition::Description const&);

    MCNAPI_S ::SharedTypes::v1_21_110::BlockDefinition::Description&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::Description&&);

    MCNAPI_S ::SharedTypes::v1_21_110::BlockDefinition::Description&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::Description const&);

    MCNAPI_S ~Description();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::Description const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_S void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
