/**
 * @file  PackInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"
#include "../../Bedrock.hpp"

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
     * @hash   -54984481
     * @symbol  ??0PackInstance\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VResourcePack\@\@\@Bedrock\@\@\@gsl\@\@H_NPEAVPackSettings\@\@\@Z
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings *);
    /**
     * @hash   -192333755
     * @symbol  ??0PackInstance\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VResourcePack\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NPEAVPackSettings\@\@\@Z
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const &, bool, class PackSettings *);
    /**
     * @hash   890763297
     * @symbol  ??0PackInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackInstance(class PackInstance const &);
    /**
     * @hash   -1331642507
     * @symbol  ??0PackInstance\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PackInstance(class PackInstance &&);
    /**
     * @hash   -1658395523
     * @symbol  ?forEachIn\@PackInstance\@\@QEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   -1306006050
     * @symbol  ?getLoadTime\@PackInstance\@\@QEBANXZ
     */
    MCAPI double getLoadTime() const;
    /**
     * @hash   -598027828
     * @symbol  ?getManifest\@PackInstance\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @hash   616941194
     * @symbol  ?getManifest\@PackInstance\@\@QEBAAEBVPackManifest\@\@XZ
     */
    MCAPI class PackManifest const & getManifest() const;
    /**
     * @hash   -1127472792
     * @symbol  ?getPackCategory\@PackInstance\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @hash   -428468184
     * @symbol  ?getPackId\@PackInstance\@\@QEBA?BVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const getPackId() const;
    /**
     * @hash   484812824
     * @symbol  ?getPackOrigin\@PackInstance\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   -942704852
     * @symbol  ?getPackStats\@PackInstance\@\@QEAAAEAVPackStats\@\@XZ
     */
    MCAPI class PackStats & getPackStats();
    /**
     * @hash   -279878042
     * @symbol  ?getPackStats\@PackInstance\@\@QEBAAEBVPackStats\@\@XZ
     */
    MCAPI class PackStats const & getPackStats() const;
    /**
     * @hash   151869490
     * @symbol  ?getResource\@PackInstance\@\@QEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getResource(class Core::Path const &, std::string &) const;
    /**
     * @hash   -128202324
     * @symbol  ?getResourceLocation\@PackInstance\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @hash   87873550
     * @symbol  ?getSubpackFolderName\@PackInstance\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getSubpackFolderName() const;
    /**
     * @hash   -1280510554
     * @symbol  ?getSubpackIndex\@PackInstance\@\@QEBAHXZ
     */
    MCAPI int getSubpackIndex() const;
    /**
     * @hash   205441872
     * @symbol  ?getTierInfo\@PackInstance\@\@QEBA?AVContentTierInfo\@\@XZ
     */
    MCAPI class ContentTierInfo getTierInfo() const;
    /**
     * @hash   -1812708984
     * @symbol  ?getVersion\@PackInstance\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @hash   1059560561
     * @symbol  ?hasResource\@PackInstance\@\@QEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool hasResource(class Core::Path const &) const;
    /**
     * @hash   1869316382
     * @symbol  ?isBaseGamePack\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @hash   -937255802
     * @symbol  ?isSlicePack\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isSlicePack() const;
    /**
     * @hash   1315705954
     * @symbol  ?isZipped\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isZipped() const;
    /**
     * @hash   -1466329815
     * @symbol  ??8PackInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class PackInstance const &) const;
    /**
     * @hash   2023077310
     * @symbol  ?setLocale\@PackInstance\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @hash   570694984
     * @symbol  ??1PackInstance\@\@QEAA\@XZ
     */
    MCAPI ~PackInstance();

//private:
    /**
     * @hash   -1360415384
     * @symbol  ?_isPackPointerValid\@PackInstance\@\@AEBA_NXZ
     */
    MCAPI bool _isPackPointerValid() const;

private:

};