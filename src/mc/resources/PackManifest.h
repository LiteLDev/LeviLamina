#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/resource/ResourceMetadata.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/json/Value.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/ManifestType.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackCapability.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackScope.h"
#include "mc/resources/TemplateLockState.h"

// auto generated forward declare list
// clang-format off
class ResourceInformation;
struct LegacyPackIdVersion;
struct ModuleIdentifier;
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
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mLocation;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>    mIdentity;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>  mContentIdentity;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>  mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackCapability::TrustLevel>> mCapabilities;
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mDescription;
    ::ll::TypedStorage<1, 1, bool>                                                               mExpired;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                                mPackIconLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceInformation>>                              mModules;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                                    mPackDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModuleIdentifier>>                                 mModuleDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyPackIdVersion>>   mLegacyModuleDependencies;
    ::ll::TypedStorage<8, 16, ::Json::Value>                          mSettings;
    ::ll::TypedStorage<8, 136, ::ResourceMetadata>                    mMetadata;
    ::ll::TypedStorage<1, 1, ::PackType>                              mPackType;
    ::ll::TypedStorage<4, 4, ::PackCategory>                          mPackCategory;
    ::ll::TypedStorage<1, 1, ::PackOrigin>                            mPackOrigin;
    ::ll::TypedStorage<1, 1, ::ManifestOrigin>                        mManifestOrigin;
    ::ll::TypedStorage<1, 1, ::ManifestType>                          mManifestType;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHidden;
    ::ll::TypedStorage<8, 8, uint64>                                  mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLastModifiedDate;
    ::ll::TypedStorage<1, 1, bool>                                    mHasValidUUID;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPlugins;
    ::ll::TypedStorage<1, 1, bool>                                    mHasClientScript;
    ::ll::TypedStorage<1, 1, bool>                                    mHasEducationMetadata;
    ::ll::TypedStorage<1, 1, bool>                                    mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTitleLocked;
    ::ll::TypedStorage<4, 4, ::PackCapability::TrustLevel>            mMaximumAllowedTrustLevel;
    ::ll::TypedStorage<1, 1, ::TemplateLockState>                     mTemplateOptionLockState;
    ::ll::TypedStorage<1, 1, ::PackScope>                             mScope;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                      mSourceIdentity;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>           mLanguageCodesForPackKeywords;
    ::ll::TypedStorage<4, 4, ::PackManifest::PackRedownloadableState> mPackRedownloadableState;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat>                    mFormatVersion;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat>                    mOriginalFormatVersion;
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

    MCAPI void _serailizeLegacyModuleDependencies(::Json::Value& destination) const;

    MCAPI void _serializeDependencies(::Json::Value& destination) const;

    MCAPI void _serializeHeader(::Json::Value& destination) const;

    MCAPI void _serializeMeta(::Json::Value& destination) const;

    MCAPI void _serializeModules(::Json::Value& destination) const;

    MCAPI void addModule(::ResourceInformation const& resourceInfo);

    MCAPI void addPackCapability(::std::string_view capability, ::PackCapability::TrustLevel trustLevel);

    MCAPI ::std::string getDescription() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::string getNameForTelemetry() const;

    MCAPI bool hasPackCapability(::std::string_view capability) const;

    MCAPI bool isRestrictedPack() const;

    MCAPI bool isUsingPackNameKeyword() const;

    MCAPI void setDescription(::std::string const& description);

    MCAPI void setLastModifiedDate(int64 lastModifiedDate);

    MCAPI void setLocalizedNameKeywords(::std::unordered_map<::std::string, ::std::string> const& localizationNameMap);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
