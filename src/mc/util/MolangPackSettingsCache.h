#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class PackInstance;
// clang-format on

class MolangPackSettingsCache {
public:
    // MolangPackSettingsCache inner types define
    using PackSettingValueMolang = ::std::variant<bool, float, ::HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<bool, float, ::HashedString>>> mNameValueMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _addToMap(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);

    MCNAPI_C void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCNAPI_C void updatePackSetting(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
    // NOLINTEND
};
