#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/ManifestType.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackScope.h"

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
    // vIndex: 0
    virtual ~PackManifest();

    // vIndex: 1
    virtual std::unique_ptr<class PackManifest> clone() const;

    MCAPI PackManifest(class PackManifest const&);

    MCAPI explicit PackManifest(::ManifestType type);

    MCAPI void addModule(class ResourceInformation const& resourceInfo);

    MCAPI class ContentIdentity const& getContentIdentity() const;

    MCAPI std::vector<struct PackIdVersion> const& getDependentPackIdentities() const;

    MCAPI std::string getDescription() const;

    MCAPI ::PackManifestFormat getFormatVersion() const;

    MCAPI struct PackIdVersion const& getIdentity() const;

    MCAPI std::vector<std::string> const& getLanguageCodesForPackKeywords() const;

    MCAPI class ResourceLocation const& getLocation() const;

    MCAPI ::ManifestOrigin getManifestOrigin() const;

    MCAPI class ResourceMetadata const& getMetaData() const;

    MCAPI class SemVersion const& getMinEngineVersion() const;

    MCAPI std::vector<struct ModuleIdentifier> const& getModuleDependencies() const;

    MCAPI std::vector<class ResourceInformation> const& getModules() const;

    MCAPI std::string getName() const;

    MCAPI std::string getNameForTelemetry() const;

    MCAPI ::PackManifestFormat getOriginalFormatVersion() const;

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI class Json::Value const& getPackSettings() const;

    MCAPI uint64 getPackSize() const;

    MCAPI ::PackType getPackType() const;

    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI std::vector<std::string> getTrustedCapabilities() const;

    MCAPI bool hasClientScript() const;

    MCAPI bool hasEducationMetadata() const;

    MCAPI bool hasLegacyModuleDependencies() const;

    MCAPI bool hasPackCapability(std::string_view capability) const;

    MCAPI bool hasPlugins() const;

    MCAPI bool isAddon() const;

    MCAPI bool isPlatformLocked() const;

    MCAPI bool isPremium() const;

    MCAPI bool isUsingPackDescriptionKeyword() const;

    MCAPI bool isUsingPackNameKeyword() const;

    MCAPI void serialize(::PackManifestFormat formatVersion, class Json::Value& destination) const;

    MCAPI void setCanBeRedownloaded(bool redownloadable);

    MCAPI void setDescription(std::string const& description);

    MCAPI void setHasEducationMetadata(bool containsEducationMetadata);

    MCAPI void setIdentity(struct PackIdVersion const& identity);

    MCAPI void setLanguageCodesForPackKeywords(std::vector<std::string> languageCodes);

    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    MCAPI void setLocalizedNameKeywords(std::unordered_map<std::string, std::string> const& localizationNameMap);

    MCAPI void setManifestOrigin(::ManifestOrigin const& origin);

    MCAPI void setName(std::string const& name);

    MCAPI void setPackCategory(::PackCategory packCategory);

    MCAPI void setPackOrigin(::PackOrigin packOrigin);

    MCAPI void setPackType(::PackType packType);

    MCAPI void setSourceIdentity(class ContentIdentity const& contentIdentity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _serializeDependencies(class Json::Value& destination) const;

    MCAPI void _serializeHeader(class Json::Value& destination) const;

    MCAPI void _serializeModules(class Json::Value& destination) const;

    MCAPI void _serializeVersion(class Json::Value& destination, class SemVersion const& version) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class PackManifest const&);

    MCAPI void* ctor$(::ManifestType type);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class PackManifest> clone$() const;

    MCAPI static std::string const& MarioPackId();

    MCAPI static std::unordered_map<std::string, ::PackScope> const& STRING_TO_PACK_SCOPE();

    // NOLINTEND
};
