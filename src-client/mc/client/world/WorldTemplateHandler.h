#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldTemplateHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
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
    virtual ~WorldTemplateHandler() /*override*/ = default;

    virtual void loadTemplate(
        ::std::string const&,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)>
    ) /*override*/;

    virtual ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    saveTemplate(::LevelSummary const&) const /*override*/;

    virtual bool isTemplateExportEnabled() const /*override*/;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
