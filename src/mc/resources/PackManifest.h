#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
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

public:
    // prevent constructor by default
    PackManifest();

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

    MCAPI void _serializeModules(::Json::Value& destination) const;

    MCAPI void addModule(::ResourceInformation const& resourceInfo);

    MCAPI void
    addNativeModuleDependency(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const& moduleId);

    MCAPI void addPackCapability(::std::string_view capability, ::PackCapability::TrustLevel trustLevel);

    MCAPI void addPackDependency(::PackIdVersion const& packId);

    MCAPI_C ::Core::PathBuffer<::std::string> generateBaseIconPath() const;

    MCAPI_C ::Core::PathBuffer<::std::string> generateIconPath() const;

    MCAPI ::std::string getDescription() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::string getNameForTelemetry() const;

    MCAPI ::std::string getNameWithVersionForTelemetry() const;

    MCAPI_C ::std::unordered_map<::std::string, ::std::string> getPackNameLocalization() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getPackSettingsLocKeys() const;

    MCAPI_C ::Core::PathBuffer<::std::string> getZipFolderPath() const;

    MCAPI bool hasPackCapability(::std::string_view capability) const;

    MCAPI_C bool isRestrictedPack() const;

    MCAPI_C bool isUsingPackNameKeyword() const;

    MCAPI_C ::PackManifest& operator=(::PackManifest const&);

    MCAPI void serialize(::PackManifestFormat formatVersion, ::Json::Value& destination) const;

    MCAPI void setDescription(::std::string const& description);

    MCAPI void setIdentity(::PackIdVersion const& identity);

    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    MCAPI void setLocalizedNameKeywords(::std::unordered_map<::std::string, ::std::string> const& localizationNameMap);

    MCAPI_S void setMetadata(::ResourceMetadata const& metadata);

    MCAPI void setMinEngineVersion(::MinEngineVersion const& engineVersion);

    MCFOLD void setName(::std::string const& name);

    MCAPI void setOptimizationVersion(::SemVersion const& optimizationVersion);

    MCAPI void setPackSettingsDef(
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> packSettingsDef
    );
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
