#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {

public:
    // prevent constructor by default
    PackInstance() = delete;

public:
    /**
     * @symbol
     * ??0PackInstance\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VResourcePack\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NPEAVPackSettings\@\@\@Z
     */
    MCAPI
    PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const&, bool, class PackSettings*); // NOLINT
    /**
     * @symbol ??0PackInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackInstance(class PackInstance const&); // NOLINT
    /**
     * @symbol
     * ??0PackInstance\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VResourcePack\@\@\@Bedrock\@\@\@gsl\@\@H_NPEAVPackSettings\@\@\@Z
     */
    MCAPI
    PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings*); // NOLINT
    /**
     * @symbol ?forEachIn\@PackInstance\@\@QEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    MCAPI void
    forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool) const; // NOLINT
    /**
     * @symbol
     * ?getFolderName\@PackInstance\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFolderName() const; // NOLINT
    /**
     * @symbol ?getLoadTime\@PackInstance\@\@QEBANXZ
     */
    MCAPI double getLoadTime() const; // NOLINT
    /**
     * @symbol ?getManifest\@PackInstance\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest& getManifest(); // NOLINT
    /**
     * @symbol ?getManifest\@PackInstance\@\@QEBAAEBVPackManifest\@\@XZ
     */
    MCAPI class PackManifest const& getManifest() const; // NOLINT
    /**
     * @symbol ?getPackCategory\@PackInstance\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const; // NOLINT
    /**
     * @symbol ?getPackId\@PackInstance\@\@QEBA?BVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const getPackId() const; // NOLINT
    /**
     * @symbol ?getPackOrigin\@PackInstance\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @symbol ?getPackStats\@PackInstance\@\@QEAAAEAVPackStats\@\@XZ
     */
    MCAPI class PackStats& getPackStats(); // NOLINT
    /**
     * @symbol ?getPackStats\@PackInstance\@\@QEBAAEBVPackStats\@\@XZ
     */
    MCAPI class PackStats const& getPackStats() const; // NOLINT
    /**
     * @symbol
     * ?getResource\@PackInstance\@\@QEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getResource(class Core::Path const&, std::string&) const; // NOLINT
    /**
     * @symbol ?getResourceLocation\@PackInstance\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getResourceLocation() const; // NOLINT
    /**
     * @symbol
     * ?getSubpackFolderName\@PackInstance\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getSubpackFolderName() const; // NOLINT
    /**
     * @symbol ?getTierInfo\@PackInstance\@\@QEBA?AVContentTierInfo\@\@XZ
     */
    MCAPI class ContentTierInfo getTierInfo() const; // NOLINT
    /**
     * @symbol ?getVersion\@PackInstance\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getVersion() const; // NOLINT
    /**
     * @symbol ?hasResource\@PackInstance\@\@QEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool hasResource(class Core::Path const&) const; // NOLINT
    /**
     * @symbol ?isBaseGamePack\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isBaseGamePack() const; // NOLINT
    /**
     * @symbol ?isTrusted\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isTrusted() const; // NOLINT
    /**
     * @symbol ?isZipped\@PackInstance\@\@QEBA_NXZ
     */
    MCAPI bool isZipped() const; // NOLINT
    /**
     * @symbol ??4PackInstance\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class PackInstance& operator=(class PackInstance const&); // NOLINT
    /**
     * @symbol ??8PackInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class PackInstance const&) const; // NOLINT
    /**
     * @symbol ??1PackInstance\@\@QEAA\@XZ
     */
    MCAPI ~PackInstance(); // NOLINT

    // private:
    /**
     * @symbol ?_isPackPointerValid\@PackInstance\@\@AEBA_NXZ
     */
    MCAPI bool _isPackPointerValid() const; // NOLINT

private:
};
