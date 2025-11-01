#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct NativeModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf84da0;
    ::ll::UntypedStorage<8, 32> mUnk87e839;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeModuleDependency(NativeModuleDependency const&);
    NativeModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency& operator=(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency& operator=(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const&);

    MCNAPI ~NativeModuleDependency();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
