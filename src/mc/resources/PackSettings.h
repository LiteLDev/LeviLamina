#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class PackSetting;
struct PackIdVersion;
// clang-format on

class PackSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value>                                      mSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackSetting>> mPackSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initPackSetting(::std::string const& name, ::Json::Value const& value);

    MCNAPI void loadPackSettings(::PackIdVersion const& packId, ::Json::Value const& packSettings);
    // NOLINTEND
};
