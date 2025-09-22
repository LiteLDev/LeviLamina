#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct LabelSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct SliderSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct ToggleSetting; }
// clang-format on

class PackSettings {
public:
    // PackSettings inner types define
    using UnorderedNameValueMap = ::std::unordered_map<::std::string, ::std::variant<float, bool>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::variant<float, bool>>> mNameValueMap;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSettings(
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting>> const& packSettingDef,
        ::std::map<::std::string, ::std::variant<float, bool>> const*             loadedValues
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting>> const& packSettingDef,
        ::std::map<::std::string, ::std::variant<float, bool>> const*             loadedValues
    );
    // NOLINTEND
};
