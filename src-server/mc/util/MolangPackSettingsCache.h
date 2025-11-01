#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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

};
