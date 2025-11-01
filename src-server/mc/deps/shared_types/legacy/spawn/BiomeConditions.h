#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkae6666;
    ::ll::UntypedStorage<4, 12> mUnk799f7b;
    ::ll::UntypedStorage<8, 88> mUnk342552;
    ::ll::UntypedStorage<8, 88> mUnkd3a343;
    ::ll::UntypedStorage<8, 96> mUnk1143e5;
    ::ll::UntypedStorage<8, 88> mUnk77bc4a;
    ::ll::UntypedStorage<8, 48> mUnka13bce;
    ::ll::UntypedStorage<4, 16> mUnkae6d5c;
    ::ll::UntypedStorage<4, 12> mUnk38d0f1;
    ::ll::UntypedStorage<4, 12> mUnka275b1;
    ::ll::UntypedStorage<8, 24> mUnk17a6cc;
    ::ll::UntypedStorage<8, 328> mUnk24fc42;
    ::ll::UntypedStorage<8, 56> mUnk7e68b3;
    ::ll::UntypedStorage<8, 40> mUnkdac360;
    ::ll::UntypedStorage<4, 12> mUnk875cd9;
    ::ll::UntypedStorage<4, 12> mUnk13ebd7;
    ::ll::UntypedStorage<1, 2> mUnk217936;
    ::ll::UntypedStorage<1, 2> mUnk977fc6;
    ::ll::UntypedStorage<1, 2> mUnk272efd;
    ::ll::UntypedStorage<1, 2> mUnk94f2ef;
    ::ll::UntypedStorage<1, 2> mUnk954113;
    ::ll::UntypedStorage<1, 2> mUnk28edaf;
    ::ll::UntypedStorage<1, 2> mUnkfb692c;
    ::ll::UntypedStorage<8, 32> mUnk64d6cf;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeConditions();

    MCNAPI BiomeConditions(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCNAPI BiomeConditions(::SharedTypes::Legacy::Spawn::BiomeConditions const&);

    MCNAPI ::SharedTypes::Legacy::Spawn::BiomeConditions& operator=(::SharedTypes::Legacy::Spawn::BiomeConditions const&);

    MCNAPI ::SharedTypes::Legacy::Spawn::BiomeConditions& operator=(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCNAPI ~BiomeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCNAPI void* $ctor(::SharedTypes::Legacy::Spawn::BiomeConditions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
