/**
 * @file  PackManifest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../PackCapability.hpp"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackManifest.
 *
 */
class PackManifest {

#define AFTER_EXTRA
// Add Member There
public:
struct CapabilityRegisterer {
    CapabilityRegisterer() = delete;
    CapabilityRegisterer(CapabilityRegisterer const&) = delete;
    CapabilityRegisterer(CapabilityRegisterer const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMANIFEST
public:
    class PackManifest& operator=(class PackManifest const &) = delete;
    PackManifest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PackManifest();
    /**
     * @hash   -1503718002
     * @vftbl  1
     * @symbol  ?clone\@PackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
    /**
     * @hash   707643205
     * @symbol  ??0PackManifest\@\@QEAA\@W4ManifestType\@\@\@Z
     */
    MCAPI PackManifest(enum class ManifestType);
    /**
     * @hash   615768001
     * @symbol  ??0PackManifest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackManifest(class PackManifest const &);
    /**
     * @hash   2041958750
     * @symbol  ?addLegacyModuleDependency\@PackManifest\@\@QEAAXAEBULegacyPackIdVersion\@\@\@Z
     */
    MCAPI void addLegacyModuleDependency(struct LegacyPackIdVersion const &);
    /**
     * @hash   678825238
     * @symbol  ?addModule\@PackManifest\@\@QEAAXAEBVResourceInformation\@\@\@Z
     */
    MCAPI void addModule(class ResourceInformation const &);
    /**
     * @hash   -849821300
     * @symbol  ?addModuleDependency\@PackManifest\@\@QEAAXAEBUModuleIdentifier\@\@\@Z
     */
    MCAPI void addModuleDependency(struct ModuleIdentifier const &);
    /**
     * @symbol  ?addPackCapability\@PackManifest\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4TrustLevel\@PackCapability\@\@\@Z
     */
    MCAPI void addPackCapability(class gsl::basic_string_span<char const, -1>, enum class PackCapability::TrustLevel);
    /**
     * @hash   1466617756
     * @symbol  ?addPackDependency\@PackManifest\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void addPackDependency(struct PackIdVersion const &);
    /**
     * @hash   312767859
     * @symbol  ?clearLegacyModuleDependencies\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void clearLegacyModuleDependencies();
    /**
     * @hash   -1980582427
     * @symbol  ?clearModules\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void clearModules();
    /**
     * @hash   -268164364
     * @symbol  ?getContentIdentity\@PackManifest\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @hash   1796228918
     * @symbol  ?getDependentPackIdentities\@PackManifest\@\@QEBAAEBV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct PackIdVersion> const & getDependentPackIdentities() const;
    /**
     * @hash   -1858449256
     * @symbol  ?getDescription\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescription() const;
    /**
     * @hash   1203444206
     * @symbol  ?getFormatVersion\@PackManifest\@\@QEBA?AW4PackManifestFormat\@\@XZ
     */
    MCAPI enum class PackManifestFormat getFormatVersion() const;
    /**
     * @hash   -1650610998
     * @symbol  ?getIdentity\@PackManifest\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getIdentity() const;
    /**
     * @hash   702638820
     * @symbol  ?getLegacyModuleDependencies\@PackManifest\@\@QEBAAEBV?$vector\@ULegacyPackIdVersion\@\@V?$allocator\@ULegacyPackIdVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct LegacyPackIdVersion> const & getLegacyModuleDependencies() const;
    /**
     * @hash   130198956
     * @symbol  ?getLocation\@PackManifest\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const & getLocation() const;
    /**
     * @hash   1099727636
     * @symbol  ?getManifestOrigin\@PackManifest\@\@QEBA?AW4ManifestOrigin\@\@XZ
     */
    MCAPI enum class ManifestOrigin getManifestOrigin() const;
    /**
     * @hash   -2007736612
     * @symbol  ?getMetaData\@PackManifest\@\@QEBAAEBVResourceMetadata\@\@XZ
     */
    MCAPI class ResourceMetadata const & getMetaData() const;
    /**
     * @hash   -2114431290
     * @symbol  ?getMinEngineVersion\@PackManifest\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & getMinEngineVersion() const;
    /**
     * @hash   -502331202
     * @symbol  ?getModuleDependencies\@PackManifest\@\@QEBAAEBV?$vector\@UModuleIdentifier\@\@V?$allocator\@UModuleIdentifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ModuleIdentifier> const & getModuleDependencies() const;
    /**
     * @hash   872475072
     * @symbol  ?getModules\@PackManifest\@\@QEBAAEBV?$vector\@VResourceInformation\@\@V?$allocator\@VResourceInformation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ResourceInformation> const & getModules() const;
    /**
     * @hash   1109609872
     * @symbol  ?getName\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   1828567968
     * @symbol  ?getNameForTelemetry\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getNameForTelemetry() const;
    /**
     * @hash   -154665508
     * @symbol  ?getOriginalFormatVersion\@PackManifest\@\@QEBA?AW4PackManifestFormat\@\@XZ
     */
    MCAPI enum class PackManifestFormat getOriginalFormatVersion() const;
    /**
     * @hash   498096196
     * @symbol  ?getPackCategory\@PackManifest\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @hash   -578349356
     * @symbol  ?getPackOrigin\@PackManifest\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @hash   -1241265932
     * @symbol  ?getPackScope\@PackManifest\@\@QEBA?AW4PackScope\@\@XZ
     */
    MCAPI enum class PackScope getPackScope() const;
    /**
     * @hash   -1712334544
     * @symbol  ?getPackSettings\@PackManifest\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const & getPackSettings() const;
    /**
     * @hash   647862491
     * @symbol  ?getPackSize\@PackManifest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPackSize() const;
    /**
     * @hash   -1432177772
     * @symbol  ?getPackType\@PackManifest\@\@QEBA?AW4PackType\@\@XZ
     */
    MCAPI enum class PackType getPackType() const;
    /**
     * @hash   827472760
     * @symbol  ?getRequiredBaseGameVersion\@PackManifest\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   1279579424
     * @symbol  ?hasClientScript\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasClientScript() const;
    /**
     * @hash   685904168
     * @symbol  ?hasEducationMetadata\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasEducationMetadata() const;
    /**
     * @hash   1702951824
     * @symbol  ?hasLegacyModuleDependencies\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasLegacyModuleDependencies() const;
    /**
     * @hash   1324999729
     * @symbol  ?hasModule\@PackManifest\@\@QEBA_NAEBUPackIdVersion\@\@\@Z
     */
    MCAPI bool hasModule(struct PackIdVersion const &) const;
    /**
     * @hash   553380573
     * @symbol  ?hasPackCapability\@PackManifest\@\@QEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool hasPackCapability(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -885306422
     * @symbol  ?hasPlugins\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasPlugins() const;
    /**
     * @hash   719888950
     * @symbol  ?isHidden\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isHidden() const;
    /**
     * @hash   1741515836
     * @symbol  ?isPlatformLocked\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isPlatformLocked() const;
    /**
     * @hash   1252283130
     * @symbol  ?isPremium\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isPremium() const;
    /**
     * @hash   -1743675558
     * @symbol  ?isRestrictedPack\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isRestrictedPack() const;
    /**
     * @hash   -725151456
     * @symbol  ?isUsingPackDescriptionKeyword\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isUsingPackDescriptionKeyword() const;
    /**
     * @hash   -1570827484
     * @symbol  ?isUsingPackNameKeyword\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isUsingPackNameKeyword() const;
    /**
     * @hash   745817539
     * @symbol  ?serialize\@PackManifest\@\@QEBAXW4PackManifestFormat\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(enum class PackManifestFormat, class Json::Value &) const;
    /**
     * @hash   2095321672
     * @symbol  ?setCanBeRedownloaded\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setCanBeRedownloaded(bool);
    /**
     * @hash   380899218
     * @symbol  ?setContentIdentity\@PackManifest\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @hash   2066640924
     * @symbol  ?setDescription\@PackManifest\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDescription(std::string const &);
    /**
     * @hash   266092684
     * @symbol  ?setFormatVersion\@PackManifest\@\@QEAAXW4PackManifestFormat\@\@\@Z
     */
    MCAPI void setFormatVersion(enum class PackManifestFormat);
    /**
     * @hash   1803036725
     * @symbol  ?setHasClientScript\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void setHasClientScript();
    /**
     * @hash   1347078702
     * @symbol  ?setHasEducationMetadata\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setHasEducationMetadata(bool);
    /**
     * @hash   -630401684
     * @symbol  ?setHasPlugins\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setHasPlugins(bool);
    /**
     * @hash   1031795188
     * @symbol  ?setHidden\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setHidden(bool);
    /**
     * @hash   -1855491060
     * @symbol  ?setIdentity\@PackManifest\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setIdentity(struct PackIdVersion const &);
    /**
     * @hash   2147397109
     * @symbol  ?setInvalidUUID\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void setInvalidUUID();
    /**
     * @hash   -1053682955
     * @symbol  ?setLanguageCodesForPackKeywords\@PackManifest\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setLanguageCodesForPackKeywords(std::vector<std::string>);
    /**
     * @hash   -1011053425
     * @symbol  ?setLastModifiedDate\@PackManifest\@\@QEAAX_J\@Z
     */
    MCAPI void setLastModifiedDate(__int64);
    /**
     * @hash   230577430
     * @symbol  ?setLocalizedNameKeywords\@PackManifest\@\@QEAAXAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setLocalizedNameKeywords(class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @hash   -1246866348
     * @symbol  ?setLocation\@PackManifest\@\@QEAAXAEBVResourceLocation\@\@\@Z
     */
    MCAPI void setLocation(class ResourceLocation const &);
    /**
     * @hash   1777169134
     * @symbol  ?setManifestOrigin\@PackManifest\@\@QEAAXAEBW4ManifestOrigin\@\@\@Z
     */
    MCAPI void setManifestOrigin(enum class ManifestOrigin const &);
    /**
     * @hash   -804791348
     * @symbol  ?setMetadata\@PackManifest\@\@QEAAXAEBVResourceMetadata\@\@\@Z
     */
    MCAPI void setMetadata(class ResourceMetadata const &);
    /**
     * @hash   -1122172510
     * @symbol  ?setMinEngineVersion\@PackManifest\@\@QEAAXAEBVSemVersion\@\@\@Z
     */
    MCAPI void setMinEngineVersion(class SemVersion const &);
    /**
     * @hash   1775734750
     * @symbol  ?setName\@PackManifest\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @hash   -73682690
     * @symbol  ?setOptionLockedState\@PackManifest\@\@QEAAXW4TemplateLockState\@\@\@Z
     */
    MCAPI void setOptionLockedState(enum class TemplateLockState);
    /**
     * @hash   483356670
     * @symbol  ?setOriginalFormatVersion\@PackManifest\@\@QEAAXW4PackManifestFormat\@\@\@Z
     */
    MCAPI void setOriginalFormatVersion(enum class PackManifestFormat);
    /**
     * @hash   -2126164427
     * @symbol  ?setPackCapabilitiesTrusted\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void setPackCapabilitiesTrusted();
    /**
     * @hash   -481614922
     * @symbol  ?setPackCategory\@PackManifest\@\@QEAAXW4PackCategory\@\@\@Z
     */
    MCAPI void setPackCategory(enum class PackCategory);
    /**
     * @hash   1967542374
     * @symbol  ?setPackOrigin\@PackManifest\@\@QEAAXW4PackOrigin\@\@\@Z
     */
    MCAPI void setPackOrigin(enum class PackOrigin);
    /**
     * @hash   2105063760
     * @symbol  ?setPackScope\@PackManifest\@\@QEAAXW4PackScope\@\@\@Z
     */
    MCAPI void setPackScope(enum class PackScope);
    /**
     * @hash   261514412
     * @symbol  ?setPackSettings\@PackManifest\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void setPackSettings(class Json::Value const &);
    /**
     * @hash   372682015
     * @symbol  ?setPackSize\@PackManifest\@\@QEAAX_K\@Z
     */
    MCAPI void setPackSize(unsigned __int64);
    /**
     * @hash   849299606
     * @symbol  ?setPackType\@PackManifest\@\@QEAAXW4PackType\@\@\@Z
     */
    MCAPI void setPackType(enum class PackType);
    /**
     * @hash   -1041169138
     * @symbol  ?setPlatformLocked\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setPlatformLocked(bool);
    /**
     * @hash   -1118721402
     * @symbol  ?setRequiredBaseGameVersion\@PackManifest\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   402026868
     * @symbol  ?setSourceIdentity\@PackManifest\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setSourceIdentity(class ContentIdentity const &);
    /**
     * @hash   -2112115899
     * @symbol  ?MarioPackId\@PackManifest\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MarioPackId;
    /**
     * @hash   1336208563
     * @symbol  ?StringToPackScope\@PackManifest\@\@SA?AW4PackScope\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class PackScope StringToPackScope(std::string const &);

//private:
    /**
     * @hash   2066278708
     * @symbol  ?_serializeDependencies\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeDependencies(class Json::Value &) const;
    /**
     * @hash   601644400
     * @symbol  ?_serializeHeader\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeHeader(class Json::Value &) const;
    /**
     * @hash   -1848700008
     * @symbol  ?_serializeModules\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeModules(class Json::Value &) const;
    /**
     * @hash   -226248733
     * @symbol  ?_serializeVersion\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void _serializeVersion(class Json::Value &, class SemVersion const &) const;

private:
    /**
     * @hash   2040591301
     * @symbol  ?STRING_TO_PACK_SCOPE\@PackManifest\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PackScope\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PackScope\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class PackScope, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class PackScope>>> const STRING_TO_PACK_SCOPE;

};