#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/resources/PackSetting.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSettings {
public:
    Json::Value                                  mSettings;     // this+0x0
    std::unordered_map<std::string, PackSetting> mPackSettings; // this+0x10

public:
    // NOLINTBEGIN
    MCAPI PackSettings();

    MCAPI class Json::Value const& getAllSettings() const;

    MCAPI void loadPackSettings(struct PackIdVersion const& packId, class Json::Value const& packSettings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initPackSetting(std::string const& name, class Json::Value const& value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
