#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelSettings;
struct LevelSummary;
namespace World { struct WorldID; }
// clang-format on

namespace World {

class IWorldStorageHandler {
public:
    // IWorldStorageHandler inner types declare
    // clang-format off
    struct CachedWorldData;
    // clang-format on

    // IWorldStorageHandler inner types define
    enum class ReadWorldError : uchar {
        IncorrectWorldId = 0,
        UnexpectedError  = 1,
    };

    enum class WriteWorldError : uchar {
        IncorrectWorldId                        = 0,
        UnableToCreateWorldDirectoryPath        = 1,
        UnableToCreateResourcePackDirectoryPath = 2,
        UnableToCreateBehaviorDirectoryPath     = 3,
        InsufficientDiskSpace                   = 4,
    };

    enum class DuplicateWorldResult : uchar {
        Ok                    = 0,
        IncorrectWorldId      = 1,
        InsufficientDiskSpace = 2,
        WorldCopyCancelled    = 3,
        UnknownError          = 4,
    };

    enum class ExportWorldResult : uchar {
        Ok               = 0,
        IncorrectWorldId = 1,
        NoFile           = 2,
        ZipError         = 3,
        PremiumContent   = 4,
        EditionMismatch  = 5,
        EditorMismatch   = 6,
        ZipDepthError    = 7,
        UnknownError     = 8,
        Cancelled        = 9,
    };

    enum class StartClearPlayerDataError : int {
        FailedToOpenDatabase = 0,
    };

    enum class ExportWorldStatus : uchar {
        Idle                     = 0,
        Setup                    = 1,
        SelectingFileDestination = 2,
        Exporting                = 3,
    };

    struct CachedWorldData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LevelData&>    cachedLevelData;
        ::ll::TypedStorage<8, 8, ::LevelSummary&> cachedLevelSummary;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedWorldData& operator=(CachedWorldData const&);
        CachedWorldData(CachedWorldData const&);
        CachedWorldData();
    };

    using ReadWorldResult =
        ::std::variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldStorageHandler() = default;

    virtual ::std::
        variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>
        readWorld(::World::WorldID const&) const = 0;

    virtual ::std::optional<::World::IWorldStorageHandler::WriteWorldError>
    updateOrCreateWorld(::LevelData&, ::LevelSummary&, ::std::shared_ptr<::LevelSettings>) const = 0;

    virtual void deleteWorld(::World::WorldID const&) = 0;

    virtual void reloadWorld(::World::WorldID const&) = 0;

    virtual void duplicateWorld(
        ::World::WorldID const&,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)>
    ) = 0;

    virtual void exportWorld(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)>
    ) = 0;

    virtual void exportWorldAsTemplate(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)>
    ) = 0;

    virtual ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const = 0;

    virtual void updateWorldIcon(
        ::World::WorldID const&,
        ::Core::PathBuffer<::std::string> const&,
        ::std::string const&,
        ::std::function<void(::World::WorldID const&)>
    ) = 0;

    virtual void resetWorldIcon(::World::WorldID const&, ::std::function<void(::World::WorldID const&)>) = 0;

    virtual ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&,
        ::World::ClearPlayerDataType,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
