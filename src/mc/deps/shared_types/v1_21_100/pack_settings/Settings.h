#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct Settings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                           mPackId;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                               mLastUsed;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::variant<float, bool, ::std::string>>> mNamedValueMap;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_100::PackSettingsDefinition::Settings&
    operator=(::SharedTypes::v1_21_100::PackSettingsDefinition::Settings&&);

    MCAPI_C ~Settings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
