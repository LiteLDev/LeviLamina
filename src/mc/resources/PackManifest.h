#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackManifest {

public:
    // prevent constructor by default
    PackManifest& operator=(PackManifest const&) = delete;
    PackManifest()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?clone\@PackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKMANIFEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PackManifest(); // NOLINT
#endif
    /**
     * @symbol ??0PackManifest\@\@QEAA\@W4ManifestType\@\@\@Z
     */
    MCAPI PackManifest(enum class ManifestType); // NOLINT
    /**
     * @symbol ??0PackManifest\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackManifest(class PackManifest const&); // NOLINT
    /**
     * @symbol ?addModule\@PackManifest\@\@QEAAXAEBVResourceInformation\@\@\@Z
     */
    MCAPI void addModule(class ResourceInformation const&); // NOLINT
    /**
     * @symbol ?addPackDependency\@PackManifest\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void addPackDependency(struct PackIdVersion const&); // NOLINT
    /**
     * @symbol ?getContentIdentity\@PackManifest\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const& getContentIdentity() const; // NOLINT
    /**
     * @symbol
     * ?getDependentPackIdentities\@PackManifest\@\@QEBAAEBV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct PackIdVersion> const& getDependentPackIdentities() const; // NOLINT
    /**
     * @symbol
     * ?getDescription\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescription() const; // NOLINT
    /**
     * @symbol ?getFormatVersion\@PackManifest\@\@QEBA?AW4PackManifestFormat\@\@XZ
     */
    MCAPI enum class PackManifestFormat getFormatVersion() const; // NOLINT
    /**
     * @symbol ?getIdentity\@PackManifest\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const& getIdentity() const; // NOLINT
    /**
     * @symbol ?getLocation\@PackManifest\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getLocation() const; // NOLINT
    /**
     * @symbol ?getManifestOrigin\@PackManifest\@\@QEBA?AW4ManifestOrigin\@\@XZ
     */
    MCAPI enum class ManifestOrigin getManifestOrigin() const; // NOLINT
    /**
     * @symbol ?getMetaData\@PackManifest\@\@QEBAAEBVResourceMetadata\@\@XZ
     */
    MCAPI class ResourceMetadata const& getMetaData() const; // NOLINT
    /**
     * @symbol ?getMinEngineVersion\@PackManifest\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& getMinEngineVersion() const; // NOLINT
    /**
     * @symbol
     * ?getModuleDependencies\@PackManifest\@\@QEBAAEBV?$vector\@UModuleIdentifier\@\@V?$allocator\@UModuleIdentifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ModuleIdentifier> const& getModuleDependencies() const; // NOLINT
    /**
     * @symbol
     * ?getModules\@PackManifest\@\@QEBAAEBV?$vector\@VResourceInformation\@\@V?$allocator\@VResourceInformation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ResourceInformation> const& getModules() const; // NOLINT
    /**
     * @symbol
     * ?getName\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const; // NOLINT
    /**
     * @symbol
     * ?getNameForTelemetry\@PackManifest\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getNameForTelemetry() const; // NOLINT
    /**
     * @symbol ?getOriginalFormatVersion\@PackManifest\@\@QEBA?AW4PackManifestFormat\@\@XZ
     */
    MCAPI enum class PackManifestFormat getOriginalFormatVersion() const; // NOLINT
    /**
     * @symbol ?getPackCategory\@PackManifest\@\@QEBA?AW4PackCategory\@\@XZ
     */
    MCAPI enum class PackCategory getPackCategory() const; // NOLINT
    /**
     * @symbol ?getPackOrigin\@PackManifest\@\@QEBA?AW4PackOrigin\@\@XZ
     */
    MCAPI enum class PackOrigin getPackOrigin() const; // NOLINT
    /**
     * @symbol ?getPackScope\@PackManifest\@\@QEBA?AW4PackScope\@\@XZ
     */
    MCAPI enum class PackScope getPackScope() const; // NOLINT
    /**
     * @symbol ?getPackSize\@PackManifest\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPackSize() const; // NOLINT
    /**
     * @symbol ?getPackType\@PackManifest\@\@QEBA?AW4PackType\@\@XZ
     */
    MCAPI enum class PackType getPackType() const; // NOLINT
    /**
     * @symbol ?hasClientScript\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasClientScript() const; // NOLINT
    /**
     * @symbol ?hasModule\@PackManifest\@\@QEBA_NAEBUPackIdVersion\@\@\@Z
     */
    MCAPI bool hasModule(struct PackIdVersion const&) const; // NOLINT
    /**
     * @symbol ?hasPackCapability\@PackManifest\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool hasPackCapability(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?hasPlugins\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool hasPlugins() const; // NOLINT
    /**
     * @symbol ?isHidden\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isHidden() const; // NOLINT
    /**
     * @symbol ?isPlatformLocked\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isPlatformLocked() const; // NOLINT
    /**
     * @symbol ?isPremium\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isPremium() const; // NOLINT
    /**
     * @symbol ?isRestrictedPack\@PackManifest\@\@QEBA_NXZ
     */
    MCAPI bool isRestrictedPack() const; // NOLINT
    /**
     * @symbol ?serialize\@PackManifest\@\@QEBAXW4PackManifestFormat\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(enum class PackManifestFormat, class Json::Value&) const; // NOLINT
    /**
     * @symbol ?setCanBeRedownloaded\@PackManifest\@\@QEAAX_N\@Z
     */
    MCAPI void setCanBeRedownloaded(bool); // NOLINT
    /**
     * @symbol
     * ?setDescription\@PackManifest\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDescription(std::string const&); // NOLINT
    /**
     * @symbol ?setIdentity\@PackManifest\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setIdentity(struct PackIdVersion const&); // NOLINT
    /**
     * @symbol ?setLastModifiedDate\@PackManifest\@\@QEAAX_J\@Z
     */
    MCAPI void setLastModifiedDate(__int64); // NOLINT
    /**
     * @symbol
     * ?setLocalizedNameKeywords\@PackManifest\@\@QEAAXAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    setLocalizedNameKeywords(class std::unordered_map<
                             std::string,
                             std::string,
                             struct std::hash<std::string>,
                             struct std::equal_to<std::string>,
                             class std::allocator<struct std::pair<std::string const, std::string>>> const&); // NOLINT
    /**
     * @symbol ?setManifestOrigin\@PackManifest\@\@QEAAXAEBW4ManifestOrigin\@\@\@Z
     */
    MCAPI void setManifestOrigin(enum class ManifestOrigin const&); // NOLINT
    /**
     * @symbol
     * ?setName\@PackManifest\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const&); // NOLINT
    /**
     * @symbol ?setPackCapabilitiesTrusted\@PackManifest\@\@QEAAXXZ
     */
    MCAPI void setPackCapabilitiesTrusted(); // NOLINT
    /**
     * @symbol ?setPackCategory\@PackManifest\@\@QEAAXW4PackCategory\@\@\@Z
     */
    MCAPI void setPackCategory(enum class PackCategory); // NOLINT
    /**
     * @symbol ?setPackType\@PackManifest\@\@QEAAXW4PackType\@\@\@Z
     */
    MCAPI void setPackType(enum class PackType); // NOLINT
    /**
     * @symbol ?setSourceIdentity\@PackManifest\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setSourceIdentity(class ContentIdentity const&); // NOLINT
    /**
     * @symbol ?MarioPackId\@PackManifest\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MarioPackId; // NOLINT

    // private:
    /**
     * @symbol ?_serializeDependencies\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeDependencies(class Json::Value&) const; // NOLINT
    /**
     * @symbol ?_serializeHeader\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeHeader(class Json::Value&) const; // NOLINT
    /**
     * @symbol ?_serializeModules\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _serializeModules(class Json::Value&) const; // NOLINT
    /**
     * @symbol ?_serializeVersion\@PackManifest\@\@AEBAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void _serializeVersion(class Json::Value&, class SemVersion const&) const; // NOLINT

private:
    /**
     * @symbol
     * ?STRING_TO_PACK_SCOPE\@PackManifest\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PackScope\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PackScope\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class PackScope,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class PackScope>>> const
        STRING_TO_PACK_SCOPE; // NOLINT
};
