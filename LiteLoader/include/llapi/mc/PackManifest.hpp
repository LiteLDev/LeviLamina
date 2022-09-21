/**
 * @file  MC/PackManifest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~PackManifest();
    /**
     * @hash   159077982
     * @vftbl  1
     * @symbol ?clone@PackManifest@@UEBA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
    /**
     * @hash   -1924036075
     * @symbol ??0PackManifest@@QEAA@W4ManifestType@@@Z
     */
    MCAPI PackManifest(enum ManifestType);
    /**
     * @hash   -2015772895
     * @symbol ??0PackManifest@@QEAA@AEBV0@@Z
     */
    MCAPI PackManifest(class PackManifest const &);
    /**
     * @hash   -590104930
     * @symbol ?addLegacyModuleDependency@PackManifest@@QEAAXAEBULegacyPackIdVersion@@@Z
     */
    MCAPI void addLegacyModuleDependency(struct LegacyPackIdVersion const &);
    /**
     * @hash   -1953238442
     * @symbol ?addModule@PackManifest@@QEAAXAEBVResourceInformation@@@Z
     */
    MCAPI void addModule(class ResourceInformation const &);
    /**
     * @symbol ?addModuleDependency@PackManifest@@QEAAXAEBUModuleIdentifier@@@Z
     */
    MCAPI void addModuleDependency(struct ModuleIdentifier const &);
    /**
     * @hash   954829056
     * @symbol ?addPackCapability@PackManifest@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI void addPackCapability(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1165553556
     * @symbol ?addPackDependency@PackManifest@@QEAAXAEBUPackIdVersion@@@Z
     */
    MCAPI void addPackDependency(struct PackIdVersion const &);
    /**
     * @hash   1975563843
     * @symbol ?clearLegacyModuleDependencies@PackManifest@@QEAAXXZ
     */
    MCAPI void clearLegacyModuleDependencies();
    /**
     * @hash   -317786443
     * @symbol ?clearModules@PackManifest@@QEAAXXZ
     */
    MCAPI void clearModules();
    /**
     * @hash   1465299716
     * @symbol ?getContentIdentity@PackManifest@@QEBAAEBVContentIdentity@@XZ
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @hash   -835711754
     * @symbol ?getDependentPackIdentities@PackManifest@@QEBAAEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct PackIdVersion> const & getDependentPackIdentities() const;
    /**
     * @hash   -195422632
     * @symbol ?getDescription@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescription() const;
    /**
     * @hash   -1428496466
     * @symbol ?getFormatVersion@PackManifest@@QEBA?AW4PackManifestFormat@@XZ
     */
    MCAPI enum PackManifestFormat getFormatVersion() const;
    /**
     * @hash   -1756874534
     * @symbol ?getIdentity@PackManifest@@QEBAAEBUPackIdVersion@@XZ
     */
    MCAPI struct PackIdVersion const & getIdentity() const;
    /**
     * @hash   -1929301852
     * @symbol ?getLegacyModuleDependencies@PackManifest@@QEBAAEBV?$vector@ULegacyPackIdVersion@@V?$allocator@ULegacyPackIdVersion@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct LegacyPackIdVersion> const & getLegacyModuleDependencies() const;
    /**
     * @hash   33576172
     * @symbol ?getLocation@PackManifest@@QEBAAEBVResourceLocation@@XZ
     */
    MCAPI class ResourceLocation const & getLocation() const;
    /**
     * @hash   -1532213036
     * @symbol ?getManifestOrigin@PackManifest@@QEBA?AW4ManifestOrigin@@XZ
     */
    MCAPI enum ManifestOrigin getManifestOrigin() const;
    /**
     * @hash   -344709988
     * @symbol ?getMetaData@PackManifest@@QEBAAEBVResourceMetadata@@XZ
     */
    MCAPI class ResourceMetadata const & getMetaData() const;
    /**
     * @hash   1926970390
     * @symbol ?getMinEngineVersion@PackManifest@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getMinEngineVersion() const;
    /**
     * @symbol ?getModuleDependencies@PackManifest@@QEBAAEBV?$vector@UModuleIdentifier@@V?$allocator@UModuleIdentifier@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ModuleIdentifier> const & getModuleDependencies() const;
    /**
     * @hash   -1759480976
     * @symbol ?getModules@PackManifest@@QEBAAEBV?$vector@VResourceInformation@@V?$allocator@VResourceInformation@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ResourceInformation> const & getModules() const;
    /**
     * @hash   -1522346176
     * @symbol ?getName@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   -803388080
     * @symbol ?getNameForTelemetry@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getNameForTelemetry() const;
    /**
     * @hash   1508345740
     * @symbol ?getOriginalFormatVersion@PackManifest@@QEBA?AW4PackManifestFormat@@XZ
     */
    MCAPI enum PackManifestFormat getOriginalFormatVersion() const;
    /**
     * @hash   -2133859852
     * @symbol ?getPackCategory@PackManifest@@QEBA?AW4PackCategory@@XZ
     */
    MCAPI enum PackCategory getPackCategory() const;
    /**
     * @hash   1084661892
     * @symbol ?getPackOrigin@PackManifest@@QEBA?AW4PackOrigin@@XZ
     */
    MCAPI enum PackOrigin getPackOrigin() const;
    /**
     * @hash   421745316
     * @symbol ?getPackScope@PackManifest@@QEBA?AW4PackScope@@XZ
     */
    MCAPI enum PackScope getPackScope() const;
    /**
     * @hash   -49323296
     * @symbol ?getPackSettings@PackManifest@@QEBAAEBVValue@Json@@XZ
     */
    MCAPI class Json::Value const & getPackSettings() const;
    /**
     * @hash   -1984093557
     * @symbol ?getPackSize@PackManifest@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPackSize() const;
    /**
     * @hash   230833476
     * @symbol ?getPackType@PackManifest@@QEBA?AW4PackType@@XZ
     */
    MCAPI enum PackType getPackType() const;
    /**
     * @hash   -1804483288
     * @symbol ?getRequiredBaseGameVersion@PackManifest@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   -1352376624
     * @symbol ?hasClientScript@PackManifest@@QEBA_NXZ
     */
    MCAPI bool hasClientScript() const;
    /**
     * @hash   -1946051880
     * @symbol ?hasEducationMetadata@PackManifest@@QEBA_NXZ
     */
    MCAPI bool hasEducationMetadata() const;
    /**
     * @hash   -929004224
     * @symbol ?hasLegacyModuleDependencies@PackManifest@@QEBA_NXZ
     */
    MCAPI bool hasLegacyModuleDependencies() const;
    /**
     * @hash   -1306956319
     * @symbol ?hasModule@PackManifest@@QEBA_NAEBUPackIdVersion@@@Z
     */
    MCAPI bool hasModule(struct PackIdVersion const &) const;
    /**
     * @hash   -2078575475
     * @symbol ?hasPackCapability@PackManifest@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool hasPackCapability(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   777720202
     * @symbol ?hasPlugins@PackManifest@@QEBA_NXZ
     */
    MCAPI bool hasPlugins() const;
    /**
     * @hash   -1912051722
     * @symbol ?isHidden@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isHidden() const;
    /**
     * @hash   -890424836
     * @symbol ?isPlatformLocked@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isPlatformLocked() const;
    /**
     * @hash   -1379657542
     * @symbol ?isPremium@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isPremium() const;
    /**
     * @hash   -80648934
     * @symbol ?isRestrictedPack@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isRestrictedPack() const;
    /**
     * @hash   937782912
     * @symbol ?isUsingPackDescriptionKeyword@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isUsingPackDescriptionKeyword() const;
    /**
     * @hash   92106884
     * @symbol ?isUsingPackNameKeyword@PackManifest@@QEBA_NXZ
     */
    MCAPI bool isUsingPackNameKeyword() const;
    /**
     * @hash   -1886230765
     * @symbol ?serialize@PackManifest@@QEBAXW4PackManifestFormat@@AEAVValue@Json@@@Z
     */
    MCAPI void serialize(enum PackManifestFormat, class Json::Value &) const;
    /**
     * @hash   -536726632
     * @symbol ?setCanBeRedownloaded@PackManifest@@QEAAX_N@Z
     */
    MCAPI void setCanBeRedownloaded(bool);
    /**
     * @hash   2043818210
     * @symbol ?setContentIdentity@PackManifest@@QEAAXAEBVContentIdentity@@@Z
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @hash   -565407380
     * @symbol ?setDescription@PackManifest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setDescription(std::string const &);
    /**
     * @hash   1929011676
     * @symbol ?setFormatVersion@PackManifest@@QEAAXW4PackManifestFormat@@@Z
     */
    MCAPI void setFormatVersion(enum PackManifestFormat);
    /**
     * @hash   -829011579
     * @symbol ?setHasClientScript@PackManifest@@QEAAXXZ
     */
    MCAPI void setHasClientScript();
    /**
     * @hash   -1284969602
     * @symbol ?setHasEducationMetadata@PackManifest@@QEAAX_N@Z
     */
    MCAPI void setHasEducationMetadata(bool);
    /**
     * @hash   1032517308
     * @symbol ?setHasPlugins@PackManifest@@QEAAX_N@Z
     */
    MCAPI void setHasPlugins(bool);
    /**
     * @hash   -1600253116
     * @symbol ?setHidden@PackManifest@@QEAAX_N@Z
     */
    MCAPI void setHidden(bool);
    /**
     * @hash   -192572068
     * @symbol ?setIdentity@PackManifest@@QEAAXAEBUPackIdVersion@@@Z
     */
    MCAPI void setIdentity(struct PackIdVersion const &);
    /**
     * @hash   -484651195
     * @symbol ?setInvalidUUID@PackManifest@@QEAAXXZ
     */
    MCAPI void setInvalidUUID();
    /**
     * @hash   609236037
     * @symbol ?setLanguageCodesForPackKeywords@PackManifest@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void setLanguageCodesForPackKeywords(std::vector<std::string>);
    /**
     * @hash   651865567
     * @symbol ?setLastModifiedDate@PackManifest@@QEAAX_J@Z
     */
    MCAPI void setLastModifiedDate(__int64);
    /**
     * @hash   1893496422
     * @symbol ?setLocalizedNameKeywords@PackManifest@@QEAAXAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     */
    MCAPI void setLocalizedNameKeywords(class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    /**
     * @hash   416037268
     * @symbol ?setLocation@PackManifest@@QEAAXAEBVResourceLocation@@@Z
     */
    MCAPI void setLocation(class ResourceLocation const &);
    /**
     * @hash   -854894546
     * @symbol ?setManifestOrigin@PackManifest@@QEAAXAEBW4ManifestOrigin@@@Z
     */
    MCAPI void setManifestOrigin(enum ManifestOrigin const &);
    /**
     * @hash   858112268
     * @symbol ?setMetadata@PackManifest@@QEAAXAEBVResourceMetadata@@@Z
     */
    MCAPI void setMetadata(class ResourceMetadata const &);
    /**
     * @hash   540746482
     * @symbol ?setMinEngineVersion@PackManifest@@QEAAXAEBVSemVersion@@@Z
     */
    MCAPI void setMinEngineVersion(class SemVersion const &);
    /**
     * @hash   -856313554
     * @symbol ?setName@PackManifest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @hash   1589236302
     * @symbol ?setOptionLockedState@PackManifest@@QEAAXW4TemplateLockState@@@Z
     */
    MCAPI void setOptionLockedState(enum TemplateLockState);
    /**
     * @hash   2146275662
     * @symbol ?setOriginalFormatVersion@PackManifest@@QEAAXW4PackManifestFormat@@@Z
     */
    MCAPI void setOriginalFormatVersion(enum PackManifestFormat);
    /**
     * @hash   -463245435
     * @symbol ?setPackCapabilitiesTrusted@PackManifest@@QEAAXXZ
     */
    MCAPI void setPackCapabilitiesTrusted();
    /**
     * @hash   1181304070
     * @symbol ?setPackCategory@PackManifest@@QEAAXW4PackCategory@@@Z
     */
    MCAPI void setPackCategory(enum PackCategory);
    /**
     * @hash   -664505930
     * @symbol ?setPackOrigin@PackManifest@@QEAAXW4PackOrigin@@@Z
     */
    MCAPI void setPackOrigin(enum PackOrigin);
    /**
     * @hash   -526984544
     * @symbol ?setPackScope@PackManifest@@QEAAXW4PackScope@@@Z
     */
    MCAPI void setPackScope(enum PackScope);
    /**
     * @hash   1924433404
     * @symbol ?setPackSettings@PackManifest@@QEAAXAEBVValue@Json@@@Z
     */
    MCAPI void setPackSettings(class Json::Value const &);
    /**
     * @hash   2035601007
     * @symbol ?setPackSize@PackManifest@@QEAAX_K@Z
     */
    MCAPI void setPackSize(unsigned __int64);
    /**
     * @hash   -1782748698
     * @symbol ?setPackType@PackManifest@@QEAAXW4PackType@@@Z
     */
    MCAPI void setPackType(enum PackType);
    /**
     * @hash   621749854
     * @symbol ?setPlatformLocked@PackManifest@@QEAAX_N@Z
     */
    MCAPI void setPlatformLocked(bool);
    /**
     * @hash   544197590
     * @symbol ?setRequiredBaseGameVersion@PackManifest@@QEAAXAEBVBaseGameVersion@@@Z
     */
    MCAPI void setRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   2064945860
     * @symbol ?setSourceIdentity@PackManifest@@QEAAXAEBVContentIdentity@@@Z
     */
    MCAPI void setSourceIdentity(class ContentIdentity const &);
    /**
     * @hash   472217581
     * @symbol ?MarioPackId@PackManifest@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MarioPackId;
    /**
     * @hash   -1295409213
     * @symbol ?StringToPackScope@PackManifest@@SA?AW4PackScope@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum PackScope StringToPackScope(std::string const &);

//private:
    /**
     * @hash   -565477452
     * @symbol ?_serializeDependencies@PackManifest@@AEBAXAEAVValue@Json@@@Z
     */
    MCAPI void _serializeDependencies(class Json::Value &) const;
    /**
     * @hash   -2030419280
     * @symbol ?_serializeHeader@PackManifest@@AEBAXAEAVValue@Json@@@Z
     */
    MCAPI void _serializeHeader(class Json::Value &) const;
    /**
     * @hash   -185796392
     * @symbol ?_serializeModules@PackManifest@@AEBAXAEAVValue@Json@@@Z
     */
    MCAPI void _serializeModules(class Json::Value &) const;
    /**
     * @hash   1436654883
     * @symbol ?_serializeVersion@PackManifest@@AEBAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI void _serializeVersion(class Json::Value &, class SemVersion const &) const;

private:
    /**
     * @hash   887683445
     * @symbol ?STRING_TO_PACK_SCOPE@PackManifest@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PackScope@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PackScope@@@std@@@2@@std@@B
     */
    MCAPI static class std::unordered_map<std::string, enum PackScope, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum PackScope>>> const STRING_TO_PACK_SCOPE;

};