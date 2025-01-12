#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/ManifestType.h"
#include "mc/resources/PackCapability.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackScope.h"
#include "mc/resources/TemplateLockState.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ContentIdentity;
class MinEngineVersion;
class ResourceInformation;
class ResourceLocation;
class ResourceMetadata;
struct ModuleIdentifier;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class PackManifest : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PackManifest inner types define
    enum class PackRedownloadableState : int {
        Redownloadable    = 0,
        NotRedownloadable = 1,
        Unknown           = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>  mUnkb1c40e;
    ::ll::UntypedStorage<8, 136> mUnk1e2f34;
    ::ll::UntypedStorage<8, 24>  mUnk7ab187;
    ::ll::UntypedStorage<8, 120> mUnkde7951;
    ::ll::UntypedStorage<8, 120> mUnk5f3fbd;
    ::ll::UntypedStorage<8, 64>  mUnkc59183;
    ::ll::UntypedStorage<8, 32>  mUnk4edafd;
    ::ll::UntypedStorage<8, 32>  mUnkdf5b3f;
    ::ll::UntypedStorage<1, 1>   mUnk25aa0f;
    ::ll::UntypedStorage<8, 56>  mUnkcdbc53;
    ::ll::UntypedStorage<8, 24>  mUnk3d395c;
    ::ll::UntypedStorage<8, 24>  mUnk664099;
    ::ll::UntypedStorage<8, 24>  mUnkf5931b;
    ::ll::UntypedStorage<8, 24>  mUnk7e84bc;
    ::ll::UntypedStorage<8, 16>  mUnk839d16;
    ::ll::UntypedStorage<8, 136> mUnkb07766;
    ::ll::UntypedStorage<1, 1>   mUnkabe2d4;
    ::ll::UntypedStorage<4, 4>   mUnk8878ac;
    ::ll::UntypedStorage<1, 1>   mUnk2eab2d;
    ::ll::UntypedStorage<1, 1>   mUnk8e8733;
    ::ll::UntypedStorage<1, 1>   mUnkeafc7c;
    ::ll::UntypedStorage<1, 1>   mUnk13691a;
    ::ll::UntypedStorage<8, 8>   mUnk188674;
    ::ll::UntypedStorage<8, 32>  mUnk304e41;
    ::ll::UntypedStorage<1, 1>   mUnk38739e;
    ::ll::UntypedStorage<1, 1>   mUnkaab09f;
    ::ll::UntypedStorage<1, 1>   mUnke953c1;
    ::ll::UntypedStorage<1, 1>   mUnk538a60;
    ::ll::UntypedStorage<1, 1>   mUnk926d65;
    ::ll::UntypedStorage<1, 1>   mUnk260ef2;
    ::ll::UntypedStorage<1, 1>   mUnk21ca15;
    ::ll::UntypedStorage<4, 4>   mUnk57897f;
    ::ll::UntypedStorage<1, 1>   mUnkdae40b;
    ::ll::UntypedStorage<1, 1>   mUnkd66f77;
    ::ll::UntypedStorage<8, 24>  mUnk956002;
    ::ll::UntypedStorage<8, 24>  mUnkcc67f2;
    ::ll::UntypedStorage<4, 4>   mUnk2cf8d0;
    ::ll::UntypedStorage<1, 1>   mUnk75fbdd;
    ::ll::UntypedStorage<1, 1>   mUnk980b3b;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifest& operator=(PackManifest const&);
    PackManifest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackManifest() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManifest(::PackManifest const&);

    MCAPI explicit PackManifest(::ManifestType type);

    MCAPI void _serializeDependencies(::Json::Value& destination) const;

    MCAPI void _serializeHeader(::Json::Value& destination) const;

    MCAPI void _serializeModules(::Json::Value& destination) const;

    MCAPI void addModule(::ResourceInformation const& resourceInfo);

    MCAPI void addPackCapability(::std::string_view capability, ::PackCapability::TrustLevel trustLevel);

    MCAPI void addPackDependency(::PackIdVersion const& packId);

    MCFOLD ::ContentIdentity const& getContentIdentity() const;

    MCAPI ::std::vector<::PackIdVersion> const& getDependentPackIdentities() const;

    MCAPI ::std::string getDescription() const;

    MCAPI ::PackManifestFormat getFormatVersion() const;

    MCFOLD ::PackIdVersion const& getIdentity() const;

    MCAPI ::std::vector<::std::string> const& getLanguageCodesForPackKeywords() const;

    MCFOLD ::ResourceLocation const& getLocation() const;

    MCAPI ::ManifestOrigin getManifestOrigin() const;

    MCAPI ::ResourceMetadata const& getMetaData() const;

    MCFOLD ::MinEngineVersion const& getMinEngineVersion() const;

    MCFOLD ::std::vector<::ModuleIdentifier> const& getModuleDependencies() const;

    MCFOLD ::std::vector<::ResourceInformation> const& getModules() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::string getNameForTelemetry() const;

    MCAPI ::PackManifestFormat getOriginalFormatVersion() const;

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI uint64 getPackSize() const;

    MCAPI ::PackType getPackType() const;

    MCAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI ::std::vector<::std::string> getTrustedCapabilities() const;

    MCAPI bool hasClientScript() const;

    MCAPI bool hasEducationMetadata() const;

    MCAPI bool hasLegacyModuleDependencies() const;

    MCAPI bool hasModule(::PackIdVersion const& moduleIdentity) const;

    MCAPI bool hasPackCapability(::std::string_view capability) const;

    MCAPI bool hasPlugins() const;

    MCAPI bool isAddon() const;

    MCAPI bool isPremium() const;

    MCAPI bool isUsingPackDescriptionKeyword() const;

    MCAPI bool isUsingPackNameKeyword() const;

    MCAPI void serialize(::PackManifestFormat formatVersion, ::Json::Value& destination) const;

    MCAPI void setCanBeRedownloaded(bool redownloadable);

    MCAPI void setDescription(::std::string const& description);

    MCAPI void setHasEducationMetadata(bool containsEducationMetadata);

    MCAPI void setIdentity(::PackIdVersion const& identity);

    MCAPI void setLanguageCodesForPackKeywords(::std::vector<::std::string> languageCodes);

    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    MCAPI void setLocalizedNameKeywords(::std::unordered_map<::std::string, ::std::string> const& localizationNameMap);

    MCAPI void setManifestOrigin(::ManifestOrigin const& origin);

    MCAPI void setName(::std::string const& name);

    MCAPI void setOptionLockedState(::TemplateLockState isWorldTemplateOptionLocked);

    MCAPI void setPackCategory(::PackCategory packCategory);

    MCAPI void setPackOrigin(::PackOrigin packOrigin);

    MCAPI void setPackType(::PackType packType);

    MCAPI void setRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI void setSourceIdentity(::ContentIdentity const& contentIdentity);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& MarioPackId();

    MCAPI static ::std::unordered_map<::std::string, ::PackScope> const& STRING_TO_PACK_SCOPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackManifest const&);

    MCAPI void* $ctor(::ManifestType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::PackManifest> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
