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
    // vIndex: 0
    virtual ~DataBackedAppConfigs() /*override*/ = default;

    // vIndex: 2
    virtual bool arePremiumSkinPacksAllowed() const /*override*/;

    // vIndex: 3
    virtual bool areResourcePacksAllowed() const /*override*/;

    // vIndex: 4
    virtual bool isPlayScreenAllowed() const /*override*/;

    // vIndex: 7
    virtual bool areEmotesSupported() const /*override*/;

    // vIndex: 27
    virtual bool canUseAzureNotebooks() const /*override*/;

    // vIndex: 28
    virtual ::AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const /*override*/;

    // vIndex: 8
    virtual bool useNormalizedFontSize() const /*override*/;

    // vIndex: 9
    virtual bool useFullScreenByDefault() const /*override*/;

    // vIndex: 10
    virtual bool muteByDefault() const /*override*/;

    // vIndex: 11
    virtual bool isCoursesCacheEnabled() const /*override*/;

    // vIndex: 5
    virtual bool isChatScreenAllowed() const /*override*/;

    // vIndex: 12
    virtual bool shouldPromptBeforeExit() const /*override*/;

    // vIndex: 13
    virtual bool gameArgumentsNeedAuthentication() const /*override*/;

    // vIndex: 16
    virtual ::EducationEditionOffer getEducationEditionOffering() const /*override*/;

    // vIndex: 15
    virtual bool worldsAreSingleUse() const /*override*/;

    // vIndex: 29
    virtual bool isSaveToCloudOn() const /*override*/;

    // vIndex: 30
    virtual bool isEduAIOn() const /*override*/;

    // vIndex: 31
    virtual bool isDedicatedServerOn() const /*override*/;

    // vIndex: 20
    virtual bool requireEduLevelSettings() const /*override*/;

    // vIndex: 17
    virtual bool requireTrustedContent() const /*override*/;

    // vIndex: 19
    virtual bool supports3DExport() const /*override*/;

    // vIndex: 18
    virtual bool isExternalPlayerCommunicationAllowed() const /*override*/;

    // vIndex: 21
    virtual ::ConnectionDefinition getConnectionDefinition() const /*override*/;

    // vIndex: 22
    virtual bool supportsChangingMultiplayerDuringPlay() const /*override*/;

    // vIndex: 14
    virtual bool worldBuilderDisabled() const /*override*/;

    // vIndex: 23
    virtual bool webSocketsDisabled() const /*override*/;

    // vIndex: 24
    virtual bool sendPermissionsTelemetry() const /*override*/;

    // vIndex: 25
    virtual bool useEduDemoUpsellDialog() const /*override*/;

    // vIndex: 33
    virtual ::std::vector<::PackIdVersion> getAdditionalClientPacks(bool enteringLevel) const /*override*/;

    // vIndex: 36
    virtual ::std::string getFeedbackURL() const /*override*/;

    // vIndex: 38
    virtual void applyLevelDataOverride(::LevelData&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
