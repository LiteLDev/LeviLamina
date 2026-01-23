#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct LabelSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
    // NOLINTEND

public:
    // prevent constructor by default
    LabelSetting(LabelSetting const&);
    LabelSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting&&);

    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting const&);

    MCAPI ~LabelSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
