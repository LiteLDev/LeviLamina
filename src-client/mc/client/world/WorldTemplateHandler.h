#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldTemplateHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class FilePickerSettings;
class IContentKeyProvider;
class ILevelListCache;
class WorldTemplateManager;
class WorldTemplateProvider;
struct LevelSummary;
struct WorldTemplateInfo;
namespace Social { class IUserManager; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldTemplateHandler : public ::World::IWorldTemplateHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldTemplateProvider>>                  mWorldTemplateProvider;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                                     mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>>              mFileArchiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateHandler& operator=(WorldTemplateHandler const&);
    WorldTemplateHandler(WorldTemplateHandler const&);
    WorldTemplateHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateHandler() /*override*/;

    virtual void loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    ) /*override*/;

    virtual ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    saveTemplate(::LevelSummary const& levelSummary) const /*override*/;

    virtual bool isTemplateExportEnabled() const /*override*/;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::FilePickerSettings> _generateFilePickerSettingsForExport(
        ::std::string const&       levelId,
        ::std::string const&       levelName,
        ::FileArchiver::ExportType type
    ) const;

    MCFOLD void _showPickFileDialog(::std::shared_ptr<::FilePickerSettings> settings) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    );

    MCAPI ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    $saveTemplate(::LevelSummary const& levelSummary) const;

    MCFOLD bool $isTemplateExportEnabled() const;

    MCAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& $getLocalTemplates() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
