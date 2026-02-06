#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/util/CallbackToken.h"

// auto generated forward declare list
// clang-format off
struct ImportResult;
struct LegacyOptionsParser;
struct LegacyWorldInfo;
struct Skin;
namespace Legacy { struct WorldImporter; }
// clang-format on

class DayOneExperienceModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LegacyOptionsParser>>   mOptionsParser;
    ::ll::TypedStorage<8, 8, ::Skin const*>                              mLegacySkin;
    ::ll::TypedStorage<1, 1, bool>                                       mLegacySkinRetrievalFinished;
    ::ll::TypedStorage<1, 1, bool>                                       mNeedsRetrievalOnNetworkAvailable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<1, 1, bool>                                       mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                       mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                       mFoundLegacyWorlds;
    ::ll::TypedStorage<8, 48, ::LegacyWorldConversionManager>            mLegacyWorldConversionManager;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                      mImportedWorldIndex;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mImportCallbackToken;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DayOneExperienceModel(::MinecraftScreenModel::Context context);

    MCAPI void _fetchWorlds();

    MCAPI ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)>
    _getWorldImportCallback(::std::string const& levelId, ::std::function<void()> failureCallback);

    MCAPI bool _initOptionsParser();

    MCAPI void _onWorldConversionCompleted(::std::shared_ptr<::ImportResult> result, ::std::string const& levelId);

    MCAPI void convertLegacyWorld(uint worldIndex, ::std::function<void()> failureCallback);

    MCAPI void fetchLegacySkin();

    MCAPI void onWizardComplete();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModel::Context context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMinecraftScreenModel();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIDlcBatcher();
    // NOLINTEND
};
