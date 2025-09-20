#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
namespace mce { class UUID; }
// clang-format on

class PackSettingsFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnk5cc44c;
    ::ll::UntypedStorage<8, 192> mUnk20e64b;
    ::ll::UntypedStorage<8, 64>  mUnk2e10d3;
    ::ll::UntypedStorage<8, 64>  mUnk58480d;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsFactory& operator=(PackSettingsFactory const&);
    PackSettingsFactory(PackSettingsFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackSettingsFactory();

    MCAPI ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>&
    _getPackSettingsMap(::std::string const& worldId);

    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
