#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct ToggleSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
    ::ll::TypedStorage<1, 1, bool>                                                       mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    ToggleSetting& operator=(ToggleSetting const&);
    ToggleSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToggleSetting(::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting const&);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
