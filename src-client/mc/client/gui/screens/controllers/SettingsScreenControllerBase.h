#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/world/PostCreateWorldAction.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/NetherWorldType.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class Experiments;
class IContentManager;
class LevelDataWrapper;
class LevelSeed64;
struct LevelSummary;
struct LocalWorldInfo;
struct PackManagerContentSource;
struct SpawnSettings;
namespace Json { class Value; }
namespace Realms { struct World; }
// clang-format on

class SettingsScreenControllerBase : public ::MainMenuScreenController {
public:
    // SettingsScreenControllerBase inner types define
    using BooleanOptionGetter = ::std::function<bool()>;

    using BooleanOptionSetter = ::std::function<void(bool)>;

    using StringOptionSetter = ::std::function<void(::std::string const&)>;

    using StringValidator = ::std::function<bool(::std::string const&)>;

    using StringFinished = ::std::function<void()>;

    using IntegerOptionGetter = ::std::function<int()>;

    using IntegerOptionSetter = ::std::function<void(int)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenControllerBase() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void _displayLockedWorldPopup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addResourcePacks(::LocalWorldInfo const& worldInfo);

    MCAPI bool _copyResourcePacks(
        ::PackManagerContentSource* worldContentSource,
        ::IContentManager&          contentManager,
        ::LevelSummary              levelSummary,
        ::std::function<void()>     progressCallback
    );

    MCAPI ::ui::ViewRequest _createWorld(
        ::Experiments*                                 experiments,
        ::SettingsScreenMode                           settingsMode,
        ::LevelSeed64                                  levelSeed,
        ::LevelSummary                                 levelSummary,
        ::LevelDataWrapper&                            levelData,
        ::SpawnSettings                                spawnSettings,
        ::NetherWorldType                              netherType,
        ::PackManagerContentSource*                    worldContentSource,
        ::IContentManager&                             contentManager,
        ::PostCreateWorldAction                        postCreateWorldAction,
        ::DlcUIWrapper*                                dlcUIWrapper,
        ::Realms::World&                               realmWorld,
        ::std::function<void(::std::function<void()>)> postUploadWorldToRealm
    );

    MCAPI void _initLevelData(::LevelDataWrapper& levelData, bool platformMultiplayerRestrictions);

    MCAPI void _initNewWorldLevelData(::LevelDataWrapper& levelData);

    MCAPI ::ui::ViewRequest _playWorld(
        ::SettingsScreenMode        settingsMode,
        ::LevelSummary const&       levelSummary,
        ::LevelDataWrapper&         levelData,
        ::PackManagerContentSource* worldContentSource,
        ::IContentManager&          contentManager,
        ::DlcUIWrapper*             dlcUIWrapper
    );

    MCAPI void _removeResourcePacks();

    MCAPI void confirmationHardcoreDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void confirmationNoAchievementsDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void setUpCallbacksForBooleanOption(::OptionID optionID, ::std::string const& toggleName);

    MCAPI void setUpCallbacksForBooleanOption(
        ::OptionID           optionID,
        ::std::string const& toggleName,
        ::std::string const& valueBindingName,
        ::std::string const& enabledBindingName
    );

    MCAPI void setUpCallbacksForBooleanOption(
        ::std::string const&        toggleName,
        ::std::string const&        valueBindingName,
        ::std::string const&        enabledBindingName,
        ::std::function<bool()>     isEnabled,
        ::std::function<bool()>     getValue,
        ::std::function<void(bool)> setValue
    );

    MCAPI void setupCallbacksForStringOption(
        ::OptionID                                  optionID,
        ::std::string const&                        textboxName,
        ::std::function<bool(::std::string const&)> changedValidator,
        ::std::function<bool(::std::string const&)> finishedValidator
    );

    MCAPI void setupCallbacksForStringOption(
        ::OptionID                                  optionID,
        ::std::string const&                        textboxName,
        ::std::string const&                        valueBindingName,
        ::std::string const&                        enabledBindingName,
        ::std::function<bool(::std::string const&)> changedValidator,
        ::std::function<bool(::std::string const&)> finishedValidator
    );

    MCAPI void setupCallbacksForStringOption(
        ::std::string const&                        textboxName,
        ::std::string const&                        valueBindingName,
        ::std::string const&                        enabledBindingName,
        ::std::function<bool()>                     isEnabled,
        ::std::function<::std::string()>            getValue,
        ::std::function<void(::std::string const&)> setValue,
        ::std::function<bool(::std::string const&)> changedValidator,
        ::std::function<bool(::std::string const&)> finishedValidator,
        ::std::function<void()>                     onFinished
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $_displayLockedWorldPopup();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
