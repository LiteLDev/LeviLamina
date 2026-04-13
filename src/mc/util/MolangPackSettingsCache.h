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
#ifdef LL_PLAT_C
    MCAPI void _addToMap(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);

    MCAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCAPI void updatePackSetting(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
#endif
    // NOLINTEND
};
