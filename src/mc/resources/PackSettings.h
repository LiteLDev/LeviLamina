#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSettings {
public:
    // prevent constructor by default
    PackSettings& operator=(PackSettings const&);
    PackSettings(PackSettings const&);

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
};
