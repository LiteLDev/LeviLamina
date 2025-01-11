#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackSetting;
struct PackIdVersion;
namespace Json { class Value; }
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
    MCAPI void _initPackSetting(::std::string const& name, ::Json::Value const& value);

    MCFOLD ::Json::Value const& getAllSettings() const;

    MCAPI void loadPackSettings(::PackIdVersion const& packId, ::Json::Value const& packSettings);
    // NOLINTEND
};
