/**
 * @file  MC/PackDependencyManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PackDependencyManager.
 *
 */
namespace PackDependencyManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1798324858
     * @symbol ?getMissingDependencyIdentities@PackDependencyManager@@YA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@V?$not_null@PEBVPackSource@@@gsl@@AEBVPackManifest@@@Z
     */
    MCAPI std::vector<struct PackIdVersion> getMissingDependencyIdentities(class gsl::not_null<class PackSource const *>, class PackManifest const &);
    /**
     * @hash   957105842
     * @symbol ?hasMissingDependencies@PackDependencyManager@@YA_NV?$not_null@PEBVPackSource@@@gsl@@AEBVPackManifest@@@Z
     */
    MCAPI bool hasMissingDependencies(class gsl::not_null<class PackSource const *>, class PackManifest const &);
    /**
     * @hash   145383654
     * @symbol ?isNativeModule@PackDependencyManager@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isNativeModule(std::string const &);

};