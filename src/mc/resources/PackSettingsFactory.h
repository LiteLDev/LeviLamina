#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class PackSettingsFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkad89da;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsFactory& operator=(PackSettingsFactory const&);
    PackSettingsFactory(PackSettingsFactory const&);
    PackSettingsFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest);

    MCAPI ::PackSettings* loadPackSettings(::PackIdVersion const& packId, ::Json::Value const& jsonBlob);
    // NOLINTEND
};
