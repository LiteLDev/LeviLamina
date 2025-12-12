#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/AppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct ConnectionDefinition;
struct PackIdVersion;
// clang-format on

class DataBackedAppConfigs : public ::AppConfigs {
public:
    // DataBackedAppConfigs inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // DataBackedAppConfigs inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk33e408;
        ::ll::UntypedStorage<1, 1>  mUnk2e69ac;
        ::ll::UntypedStorage<1, 1>  mUnkaa6d31;
        ::ll::UntypedStorage<1, 1>  mUnk713eeb;
        ::ll::UntypedStorage<1, 1>  mUnkeb9391;
        ::ll::UntypedStorage<1, 1>  mUnkc8e22e;
        ::ll::UntypedStorage<1, 1>  mUnk556953;
        ::ll::UntypedStorage<1, 1>  mUnke9b26e;
        ::ll::UntypedStorage<1, 1>  mUnk2a2090;
        ::ll::UntypedStorage<1, 1>  mUnk63e8b0;
        ::ll::UntypedStorage<1, 1>  mUnk12099f;
        ::ll::UntypedStorage<1, 1>  mUnk2989d6;
        ::ll::UntypedStorage<1, 1>  mUnked6027;
        ::ll::UntypedStorage<1, 1>  mUnk12a360;
        ::ll::UntypedStorage<1, 1>  mUnk351487;
        ::ll::UntypedStorage<1, 1>  mUnkd1f2c4;
        ::ll::UntypedStorage<1, 1>  mUnkf0c77b;
        ::ll::UntypedStorage<1, 1>  mUnk7a6716;
        ::ll::UntypedStorage<1, 1>  mUnk9d0dab;
        ::ll::UntypedStorage<1, 1>  mUnkeff0d7;
        ::ll::UntypedStorage<1, 1>  mUnkafa516;
        ::ll::UntypedStorage<1, 1>  mUnk4b7f87;
        ::ll::UntypedStorage<1, 1>  mUnk227431;
        ::ll::UntypedStorage<1, 1>  mUnk6b66c7;
        ::ll::UntypedStorage<1, 1>  mUnk468138;
        ::ll::UntypedStorage<4, 4>  mUnk241cfc;
        ::ll::UntypedStorage<8, 8>  mUnkc9ec04;
        ::ll::UntypedStorage<1, 1>  mUnkf20421;
        ::ll::UntypedStorage<8, 8>  mUnke21764;
        ::ll::UntypedStorage<8, 8>  mUnkab1964;
        ::ll::UntypedStorage<8, 32> mUnk6f9474;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk83fb84;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBackedAppConfigs& operator=(DataBackedAppConfigs const&);
    DataBackedAppConfigs(DataBackedAppConfigs const&);
    DataBackedAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataBackedAppConfigs() /*override*/ = default;

    virtual bool arePremiumSkinPacksAllowed() const /*override*/;

    virtual bool areResourcePacksAllowed() const /*override*/;

    virtual bool isPlayScreenAllowed() const /*override*/;

    virtual bool areEmotesSupported() const /*override*/;

    virtual bool canUseAzureNotebooks() const /*override*/;

    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const /*override*/;

    virtual bool useNormalizedFontSize() const /*override*/;

    virtual bool useFullScreenByDefault() const /*override*/;

    virtual bool muteByDefault() const /*override*/;

    virtual bool isCoursesCacheEnabled() const /*override*/;

    virtual bool isChatScreenAllowed() const /*override*/;

    virtual bool shouldPromptBeforeExit() const /*override*/;

    virtual bool gameArgumentsNeedAuthentication() const /*override*/;

    virtual ::EducationEditionOffer getEducationEditionOffering() const /*override*/;

    virtual bool worldsAreSingleUse() const /*override*/;

    virtual bool isSaveToCloudOn() const /*override*/;

    virtual bool isEduAIOn() const /*override*/;

    virtual bool isDedicatedServerOn() const /*override*/;

    virtual bool requireEduLevelSettings() const /*override*/;

    virtual bool requireTrustedContent() const /*override*/;

    virtual bool supports3DExport() const /*override*/;

    virtual bool isExternalPlayerCommunicationAllowed() const /*override*/;

    virtual ::ConnectionDefinition getConnectionDefinition() const /*override*/;

    virtual bool supportsChangingMultiplayerDuringPlay() const /*override*/;

    virtual bool worldBuilderDisabled() const /*override*/;

    virtual bool webSocketsDisabled() const /*override*/;

    virtual bool sendPermissionsTelemetry() const /*override*/;

    virtual bool useEduDemoUpsellDialog() const /*override*/;

    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const /*override*/;

    virtual ::std::string getFeedbackURL() const /*override*/;

    virtual void applyLevelDataOverride(::LevelData&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
