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
    // symbol: ?getAllSettings@PackSettings@@QEBAAEBVValue@Json@@XZ
    MCAPI class Json::Value const& getAllSettings() const;

    // symbol: ?loadPackSettings@PackSettings@@QEAAXAEBUPackIdVersion@@AEBVValue@Json@@@Z
    MCAPI void loadPackSettings(struct PackIdVersion const& packId, class Json::Value const& packSettings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_initPackSetting@PackSettings@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI void _initPackSetting(std::string const& name, class Json::Value const& value);

    // NOLINTEND
};
