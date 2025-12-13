#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class SerializedSkin;
struct ActorUniqueID;
// clang-format on

class TrustedSkinHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkfffbb1;
    ::ll::UntypedStorage<8, 8>   mUnkf3bdd1;
    ::ll::UntypedStorage<8, 16>  mUnk2ebe2c;
    ::ll::UntypedStorage<8, 16>  mUnk7c3db9;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustedSkinHelper& operator=(TrustedSkinHelper const&);
    TrustedSkinHelper(TrustedSkinHelper const&);
    TrustedSkinHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool canUseSkin(
        ::SerializedSkin const&    skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCNAPI_C ~TrustedSkinHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
