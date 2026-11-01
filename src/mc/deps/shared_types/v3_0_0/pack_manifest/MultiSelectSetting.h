#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownOption; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct MultiSelectSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mSelectionText;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption>> mOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                                 mDefaults;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiSelectSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiSelectSetting(::SharedTypes::v3_0_0::PackManifestDefinition::MultiSelectSetting const&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::MultiSelectSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::MultiSelectSetting const&);

    MCNAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::MultiSelectSetting const& other) const;

    MCNAPI ~MultiSelectSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::MultiSelectSetting const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
