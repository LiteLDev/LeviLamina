#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Module {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8a526e;
    ::ll::UntypedStorage<8, 16> mUnkb5c853;
    ::ll::UntypedStorage<8, 24> mUnk9777c3;
    ::ll::UntypedStorage<8, 40> mUnke2b406;
    ::ll::UntypedStorage<8, 40> mUnk74a91c;
    ::ll::UntypedStorage<8, 40> mUnk708316;
    // NOLINTEND

public:
    // prevent constructor by default
    Module();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Module(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Module&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Module&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Module&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);

    MCNAPI ~Module();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
