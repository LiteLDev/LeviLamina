#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackSettingsFactory {

public:
    // prevent constructor by default
    PackSettingsFactory& operator=(PackSettingsFactory const&) = delete;
    PackSettingsFactory(PackSettingsFactory const&)            = delete;
    PackSettingsFactory()                                      = delete;

public:
    /**
     * @symbol ?getPackSettings\@PackSettingsFactory\@\@QEAAPEAVPackSettings\@\@AEBVPackManifest\@\@\@Z
     */
    MCAPI class PackSettings* getPackSettings(class PackManifest const&); // NOLINT
    /**
     * @symbol
     * ?loadPackSettings\@PackSettingsFactory\@\@QEAAPEAVPackSettings\@\@AEBUPackIdVersion\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI class PackSettings* loadPackSettings(struct PackIdVersion const&, class Json::Value const&); // NOLINT
};
