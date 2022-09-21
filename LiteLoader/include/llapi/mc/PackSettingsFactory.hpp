/**
 * @file  MC/PackSettingsFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSettingsFactory.
 *
 */
class PackSettingsFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTINGSFACTORY
public:
    class PackSettingsFactory& operator=(class PackSettingsFactory const &) = delete;
    PackSettingsFactory(class PackSettingsFactory const &) = delete;
    PackSettingsFactory() = delete;
#endif

public:
    /**
     * @hash   -253499764
     * @symbol ?getPackSettings@PackSettingsFactory@@QEAAPEAVPackSettings@@AEBVPackManifest@@@Z
     */
    MCAPI class PackSettings * getPackSettings(class PackManifest const &);

};