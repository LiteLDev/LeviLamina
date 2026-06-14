#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/resource/ResourceMetadata.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/ManifestType.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackCapability.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackScope.h"
#include "mc/resources/TemplateLockState.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class ResourceInformation;
struct LegacyPackIdVersion;
namespace Json { class Value; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct LabelSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct NativeModuleDependency; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct SliderSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct ToggleSetting; }
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
    ::ll::TypedStorage<1, 1, ::ManifestType>                          mManifestType;
    ::ll::TypedStorage<1, 1, ::ManifestOrigin>                        mManifestOrigin;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mPackIconLocation;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                      mContentIdentity;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                      mSourceIdentity;
    ::ll::TypedStorage<4, 4, ::PackCategory>                          mPackCategory;
    ::ll::TypedStorage<1, 1, ::PackOrigin>                            mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTitleLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mExpired;
    ::ll::TypedStorage<8, 8, uint64>                                  mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLastModifiedDate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mLanguageCodesForPackKeywords;
    ::ll::TypedStorage<1, 1, bool>                                    mFailsGameVersionMatch;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat>                    mFormatVersion;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat>                    mOriginalFormatVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDescription;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                        mIdentity;
    ::ll::TypedStorage<1, 1, ::PackScope>                             mPackScope;
    ::ll::TypedStorage<1, 1, ::PackType>                              mPackType;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                      mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                     mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::TemplateLockState>                     mTemplateOptionLockState;
    ::ll::TypedStorage<4, 4, ::PackManifest::PackRedownloadableState> mPackReDownloadableState;
    ::ll::TypedStorage<4, 4, ::PackCapability::TrustLevel>            mMaximumAllowedTrustLevel;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHidden;
    ::ll::TypedStorage<1, 1, bool>                                    mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<1, 1, bool>                                    mHasClientScript;
    ::ll::TypedStorage<1, 1, bool>                                    mHasEducationMetadata;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPlugins;
    ::ll::TypedStorage<1, 1, bool>                                    mHasValidUUID;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceInformation>>   mModules;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyPackIdVersion>>   mLegacyModuleDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>         mPackDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency>>
        mNativeModuleDependencies;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>>>
                                                                                                 mPackSettingsDef;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackCapability::TrustLevel>> mCapabilities;
    ::ll::TypedStorage<8, 136, ::ResourceMetadata>                                               mMetadata;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                                      mOptimizationVersion;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PackManifest& operator=(PackManifest const&);
    PackManifest();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackManifest();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManifest() /*override*/;

    virtual ::std::unique_ptr<::PackManifest> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManifest(::PackManifest const&);

    MCAPI explicit PackManifest(::ManifestType type);

    MCAPI void _serializeDependencies(::Json::Value& destination) const;

    MCAPI void _serializeHeader(::Json::Value& destination) const;

    MCAPI void _serializeLegacyModuleDependencies(::Json::Value& destination) const;

    MCAPI void _serializeMeta(::Json::Value& destination) const;

    MCAPI void _serializeModules(::Json::Value& destination) const;

    MCAPI void _serializeVersion(::Json::Value& destination, ::SemVersion const& version) const;

    MCAPI void addModule(::ResourceInformation const& resourceInfo);

    MCAPI void addPackCapability(::std::string_view capability, ::PackCapability::TrustLevel trustLevel);

#ifdef LL_PLAT_C
    MCAPI bool canBeRedownloaded() const;

    MCAPI ::Core::PathBuffer<::std::string> generateBaseIconPath() const;

    MCAPI ::Core::PathBuffer<::std::string> generateIconPath() const;
#endif

    MCFOLD ::ContentIdentity const& getContentIdentity() const;

    MCFOLD ::std::vector<::PackIdVersion> const& getDependentPackIdentities() const;

    MCAPI ::std::string getDescription() const;

#ifdef LL_PLAT_C
    MCAPI ::ResourceFileSystem getFileSystemFromOrigin() const;
#endif

    MCFOLD ::PackManifestFormat getFormatVersion() const;

    MCFOLD ::PackIdVersion const& getIdentity() const;

    MCFOLD ::std::vector<::std::string> const& getLanguageCodesForPackKeywords() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const& getLastModifiedDate() const;

    MCFOLD ::std::vector<::LegacyPackIdVersion> const& getLegacyModuleDependencies() const;
#endif

    MCFOLD ::ResourceLocation const& getLocation() const;

    MCFOLD ::ManifestOrigin getManifestOrigin() const;

#ifdef LL_PLAT_C
    MCFOLD ::ManifestType getManifestType() const;
#endif

    MCFOLD ::ResourceMetadata const& getMetaData() const;

    MCFOLD ::MinEngineVersion const& getMinEngineVersion() const;

    MCFOLD ::std::vector<::ResourceInformation> const& getModules() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::string getNameForTelemetry() const;

    MCAPI ::std::string getNameWithVersionForTelemetry() const;

    MCFOLD ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency> const&
    getNativeModuleDependencies() const;

    MCFOLD ::SemVersion const& getOptimizationVersion() const;

#ifdef LL_PLAT_C
    MCFOLD ::TemplateLockState getOptionLockedState() const;
#endif

    MCAPI ::PackManifestFormat getOriginalFormatVersion() const;

    MCFOLD ::PackCategory getPackCategory() const;

#ifdef LL_PLAT_C
    MCAPI ::std::unordered_map<::std::string, ::std::string> getPackNameLocalization() const;
#endif

    MCFOLD ::PackOrigin getPackOrigin() const;

    MCFOLD ::PackScope getPackScope() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::optional<::std::vector<::std::variant<
        ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
        ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
        ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
        ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>> const&
    getPackSettingsDef() const;
#endif

    MCAPI ::std::optional<::std::vector<::std::string>> getPackSettingsLocKeys() const;

    MCFOLD uint64 getPackSize() const;

    MCAPI ::PackType getPackType() const;

    MCAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCFOLD ::ContentIdentity const& getSourceIdentity() const;

    MCAPI ::std::vector<::std::string> getTrustedCapabilities() const;

#ifdef LL_PLAT_C
    MCAPI ::Core::PathBuffer<::std::string> getZipFolderPath() const;
#endif

    MCAPI bool hasClientScript() const;

    MCAPI bool hasModule(::PackIdVersion const& moduleIdentity) const;

    MCAPI bool hasPackCapability(::std::string_view capability) const;

    MCFOLD bool hasPlugins() const;

#ifdef LL_PLAT_C
    MCAPI bool hasValidUUID() const;
#endif

    MCAPI bool isAddon() const;

#ifdef LL_PLAT_C
    MCAPI bool isBasePackCategory() const;
#endif

    MCAPI bool isHidden() const;

    MCAPI bool isPlatformLocked() const;

    MCAPI bool isPremium() const;

#ifdef LL_PLAT_C
    MCAPI bool isRandomSeedAllowed() const;
#endif

    MCAPI bool isRestrictedPack() const;

#ifdef LL_PLAT_C
    MCAPI bool isTitleLocked() const;

    MCAPI bool isUsingPackNameKeyword() const;

    MCAPI bool isValid() const;

    MCAPI ::PackManifest& operator=(::PackManifest const&);
#endif

    MCAPI void serialize(::PackManifestFormat formatVersion, ::Json::Value& destination) const;

    MCAPI void setCanBeRedownloaded(bool reDownloadable);

#ifdef LL_PLAT_C
    MCAPI void setContentIdentity(::ContentIdentity const& contentIdentity);
#endif

    MCAPI void setDescription(::std::string const& description);

#ifdef LL_PLAT_C
    MCAPI void setExpired(bool expired);
#endif

    MCAPI void setIdentity(::PackIdVersion const& identity);

    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    MCAPI void setLocalizedNameKeywords(::std::unordered_map<::std::string, ::std::string> const& localizationNameMap);

    MCAPI void setManifestOrigin(::ManifestOrigin const& origin);

    MCFOLD void setName(::std::string const& name);

    MCAPI void setOptionLockedState(::TemplateLockState isWorldTemplateOptionLocked);

    MCFOLD void setPackCategory(::PackCategory packCategory);

#ifdef LL_PLAT_C
    MCAPI void setPackIconLocation(::ResourceLocation const& location);
#endif

    MCAPI void setPackSettingsDef(
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> packSettingsDef
    );

    MCAPI void setPackType(::PackType packType);

    MCAPI void setRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI void setSourceIdentity(::ContentIdentity const& contentIdentity);

#ifdef LL_PLAT_C
    MCAPI bool supportsLocalizedSubpackNames() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackScope StringToPackScope(::std::string const& str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& MarioPackId();
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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::PackManifest> $clone() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
