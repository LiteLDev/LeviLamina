#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ManifestOrigin.h"
#include "mc/enums/ManifestType.h"
#include "mc/resources/PackCategory.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackScope.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackManifest {
public:
    // prevent constructor by default
    PackManifest& operator=(PackManifest const&);
    PackManifest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PackManifest@@UEAA@XZ
    virtual ~PackManifest();

    // vIndex: 1, symbol:
    // ?clone@PackManifest@@UEBA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@XZ
    virtual std::unique_ptr<class PackManifest> clone() const;

    // symbol: ??0PackManifest@@QEAA@AEBV0@@Z
    MCAPI PackManifest(class PackManifest const&);

    // symbol: ??0PackManifest@@QEAA@W4ManifestType@@@Z
    MCAPI explicit PackManifest(::ManifestType type);

    // symbol: ?addModule@PackManifest@@QEAAXAEBVResourceInformation@@@Z
    MCAPI void addModule(class ResourceInformation const& resourceInfo);

    // symbol: ?addPackDependency@PackManifest@@QEAAXAEBUPackIdVersion@@@Z
    MCAPI void addPackDependency(struct PackIdVersion const& packId);

    // symbol: ?getContentIdentity@PackManifest@@QEBAAEBVContentIdentity@@XZ
    MCAPI class ContentIdentity const& getContentIdentity() const;

    // symbol:
    // ?getDependentPackIdentities@PackManifest@@QEBAAEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@XZ
    MCAPI std::vector<struct PackIdVersion> const& getDependentPackIdentities() const;

    // symbol: ?getDescription@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescription() const;

    // symbol: ?getFormatVersion@PackManifest@@QEBA?AW4PackManifestFormat@@XZ
    MCAPI ::PackManifestFormat getFormatVersion() const;

    // symbol: ?getIdentity@PackManifest@@QEBAAEBUPackIdVersion@@XZ
    MCAPI struct PackIdVersion const& getIdentity() const;

    // symbol:
    // ?getLanguageCodesForPackKeywords@PackManifest@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getLanguageCodesForPackKeywords() const;

    // symbol: ?getLocation@PackManifest@@QEBAAEBVResourceLocation@@XZ
    MCAPI class ResourceLocation const& getLocation() const;

    // symbol: ?getManifestOrigin@PackManifest@@QEBA?AW4ManifestOrigin@@XZ
    MCAPI ::ManifestOrigin getManifestOrigin() const;

    // symbol: ?getMetaData@PackManifest@@QEBAAEBVResourceMetadata@@XZ
    MCAPI class ResourceMetadata const& getMetaData() const;

    // symbol: ?getMinEngineVersion@PackManifest@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& getMinEngineVersion() const;

    // symbol:
    // ?getModuleDependencies@PackManifest@@QEBAAEBV?$vector@UModuleIdentifier@@V?$allocator@UModuleIdentifier@@@std@@@std@@XZ
    MCAPI std::vector<struct ModuleIdentifier> const& getModuleDependencies() const;

    // symbol:
    // ?getModules@PackManifest@@QEBAAEBV?$vector@VResourceInformation@@V?$allocator@VResourceInformation@@@std@@@std@@XZ
    MCAPI std::vector<class ResourceInformation> const& getModules() const;

    // symbol: ?getName@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol: ?getNameForTelemetry@PackManifest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getNameForTelemetry() const;

    // symbol: ?getOriginalFormatVersion@PackManifest@@QEBA?AW4PackManifestFormat@@XZ
    MCAPI ::PackManifestFormat getOriginalFormatVersion() const;

    // symbol: ?getPackCategory@PackManifest@@QEBA?AW4PackCategory@@XZ
    MCAPI ::PackCategory getPackCategory() const;

    // symbol: ?getPackOrigin@PackManifest@@QEBA?AW4PackOrigin@@XZ
    MCAPI ::PackOrigin getPackOrigin() const;

    // symbol: ?getPackScope@PackManifest@@QEBA?AW4PackScope@@XZ
    MCAPI ::PackScope getPackScope() const;

    // symbol: ?getPackSize@PackManifest@@QEBA_KXZ
    MCAPI uint64 getPackSize() const;

    // symbol: ?getPackType@PackManifest@@QEBA?AW4PackType@@XZ
    MCAPI ::PackType getPackType() const;

    // symbol: ?getRequiredBaseGameVersion@PackManifest@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol:
    // ?getTrustedCapabilities@PackManifest@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getTrustedCapabilities() const;

    // symbol: ?hasClientScript@PackManifest@@QEBA_NXZ
    MCAPI bool hasClientScript() const;

    // symbol: ?hasModule@PackManifest@@QEBA_NAEBUPackIdVersion@@@Z
    MCAPI bool hasModule(struct PackIdVersion const& moduleIdentity) const;

    // symbol: ?hasPackCapability@PackManifest@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool hasPackCapability(std::string_view capability) const;

    // symbol: ?hasPlugins@PackManifest@@QEBA_NXZ
    MCAPI bool hasPlugins() const;

    // symbol: ?isAddon@PackManifest@@QEBA_NXZ
    MCAPI bool isAddon() const;

    // symbol: ?isPlatformLocked@PackManifest@@QEBA_NXZ
    MCAPI bool isPlatformLocked() const;

    // symbol: ?isPremium@PackManifest@@QEBA_NXZ
    MCAPI bool isPremium() const;

    // symbol: ?isRestrictedPack@PackManifest@@QEBA_NXZ
    MCAPI bool isRestrictedPack() const;

    // symbol: ?serialize@PackManifest@@QEBAXW4PackManifestFormat@@AEAVValue@Json@@@Z
    MCAPI void serialize(::PackManifestFormat formatVersion, class Json::Value& destination) const;

    // symbol: ?setCanBeRedownloaded@PackManifest@@QEAAX_N@Z
    MCAPI void setCanBeRedownloaded(bool redownloadable);

    // symbol: ?setDescription@PackManifest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setDescription(std::string const& description);

    // symbol: ?setIdentity@PackManifest@@QEAAXAEBUPackIdVersion@@@Z
    MCAPI void setIdentity(struct PackIdVersion const& identity);

    // symbol: ?setLastModifiedDate@PackManifest@@QEAAX_J@Z
    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    // symbol:
    // ?setLocalizedNameKeywords@PackManifest@@QEAAXAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    MCAPI void setLocalizedNameKeywords(std::unordered_map<std::string, std::string> const& localizationNameMap);

    // symbol: ?setManifestOrigin@PackManifest@@QEAAXAEBW4ManifestOrigin@@@Z
    MCAPI void setManifestOrigin(::ManifestOrigin const& origin);

    // symbol: ?setName@PackManifest@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setName(std::string const& name);

    // symbol: ?setPackCategory@PackManifest@@QEAAXW4PackCategory@@@Z
    MCAPI void setPackCategory(::PackCategory packCategory);

    // symbol: ?setPackType@PackManifest@@QEAAXW4PackType@@@Z
    MCAPI void setPackType(::PackType packType);

    // symbol: ?setSourceIdentity@PackManifest@@QEAAXAEBVContentIdentity@@@Z
    MCAPI void setSourceIdentity(class ContentIdentity const& contentIdentity);

    // symbol: ?MarioPackId@PackManifest@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const MarioPackId;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_serializeDependencies@PackManifest@@AEBAXAEAVValue@Json@@@Z
    MCAPI void _serializeDependencies(class Json::Value& destination) const;

    // symbol: ?_serializeHeader@PackManifest@@AEBAXAEAVValue@Json@@@Z
    MCAPI void _serializeHeader(class Json::Value& destination) const;

    // symbol: ?_serializeModules@PackManifest@@AEBAXAEAVValue@Json@@@Z
    MCAPI void _serializeModules(class Json::Value& destination) const;

    // symbol: ?_serializeVersion@PackManifest@@AEBAXAEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI void _serializeVersion(class Json::Value& destination, class SemVersion const& version) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?STRING_TO_PACK_SCOPE@PackManifest@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PackScope@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PackScope@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, ::PackScope> const STRING_TO_PACK_SCOPE;

    // NOLINTEND
};
