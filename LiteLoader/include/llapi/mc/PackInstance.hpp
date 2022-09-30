/**
 * @file  PackInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackInstance.
 *
 */
class PackInstance {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCE
    char filler[480];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCE
public:
    class PackInstance& operator=(class PackInstance const &) = delete;
    PackInstance() = delete;
#endif

public:
    /**
     * @hash   242914735
     * @symbol ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@H_NPEAVPackSettings@@@Z
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings *);
    /**
     * @hash   105580837
     * @symbol ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NPEAVPackSettings@@@Z
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const &, bool, class PackSettings *);
    /**
     * @hash   1013499121
     * @symbol ??0PackInstance@@QEAA@AEBV0@@Z
     */
    MCAPI PackInstance(class PackInstance const &);
    /**
     * @hash   -1208906683
     * @symbol ??0PackInstance@@QEAA@$$QEAV0@@Z
     */
    MCAPI PackInstance(class PackInstance &&);
    /**
     * @hash   -1360588563
     * @symbol ?forEachIn@PackInstance@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   -1008245218
     * @symbol ?getLoadTime@PackInstance@@QEBANXZ
     */
    MCAPI double getLoadTime() const;
    /**
     * @hash   -300282372
     * @symbol ?getManifest@PackInstance@@QEAAAEAVPackManifest@@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @hash   914671274
     * @symbol ?getManifest@PackInstance@@QEBAAEBVPackManifest@@XZ
     */
    MCAPI class PackManifest const & getManifest() const;
    /**
     * @hash   -829758088
     * @symbol ?getPackCategory@PackInstance@@QEBA?AW4PackCategory@@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @hash   -130768856
     * @symbol ?getPackId@PackInstance@@QEBA?BVUUID@mce@@XZ
     */
    MCAPI class mce::UUID const getPackId() const;
    /**
     * @hash   782496776
     * @symbol ?getPackOrigin@PackInstance@@QEBA?AW4PackOrigin@@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   -645036276
     * @symbol ?getPackStats@PackInstance@@QEAAAEAVPackStats@@XZ
     */
    MCAPI class PackStats & getPackStats();
    /**
     * @hash   17790534
     * @symbol ?getPackStats@PackInstance@@QEBAAEBVPackStats@@XZ
     */
    MCAPI class PackStats const & getPackStats() const;
    /**
     * @hash   449538066
     * @symbol ?getResource@PackInstance@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool getResource(class Core::Path const &, std::string &) const;
    /**
     * @hash   169450876
     * @symbol ?getResourceLocation@PackInstance@@QEBAAEBVResourceLocation@@XZ
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @hash   385511374
     * @symbol ?getSubpackFolderName@PackInstance@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getSubpackFolderName() const;
    /**
     * @hash   503033568
     * @symbol ?getTierInfo@PackInstance@@QEBA?AVContentTierInfo@@XZ
     */
    MCAPI class ContentTierInfo getTierInfo() const;
    /**
     * @hash   -1515132664
     * @symbol ?getVersion@PackInstance@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @hash   1357090753
     * @symbol ?hasResource@PackInstance@@QEBA_NAEBVPath@Core@@@Z
     */
    MCAPI bool hasResource(class Core::Path const &) const;
    /**
     * @hash   -2128136098
     * @symbol ?isBaseGamePack@PackInstance@@QEBA_NXZ
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @hash   -639756362
     * @symbol ?isSlicePack@PackInstance@@QEBA_NXZ
     */
    MCAPI bool isSlicePack() const;
    /**
     * @hash   1613190018
     * @symbol ?isZipped@PackInstance@@QEBA_NXZ
     */
    MCAPI bool isZipped() const;
    /**
     * @hash   -1168430599
     * @symbol ??8PackInstance@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class PackInstance const &) const;
    /**
     * @hash   -1975420738
     * @symbol ?setLocale@PackInstance@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @hash   477162776
     * @symbol ??1PackInstance@@QEAA@XZ
     */
    MCAPI ~PackInstance();

//private:
    /**
     * @hash   -1062546920
     * @symbol ?_isPackPointerValid@PackInstance@@AEBA_NXZ
     */
    MCAPI bool _isPackPointerValid() const;

private:

};