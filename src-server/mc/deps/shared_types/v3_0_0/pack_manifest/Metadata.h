#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Metadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf74ef6;
    ::ll::UntypedStorage<8, 40> mUnkd2a493;
    ::ll::UntypedStorage<8, 40> mUnk5473e6;
    ::ll::UntypedStorage<8, 40> mUnk795b88;
    ::ll::UntypedStorage<8, 24> mUnk2aa6a1;
    // NOLINTEND

public:
    // prevent constructor by default
    Metadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCNAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Metadata& operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Metadata& operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCNAPI ~Metadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
