#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/CallbackToken.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class MainMenuScreenModel;
struct ImportResult;
struct LegacyWorldInfo;
namespace Legacy { struct WorldImporter; }
namespace Legacy { struct WorldProcessRequest; }
// clang-format on

class LegacyWorldConverter : public ::std::enable_shared_from_this<::LegacyWorldConverter> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                          mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                         mClient;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                     mModel;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>          mRetailToPreviewWorldList;
    ::ll::TypedStorage<1, 1, bool>                                       mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                       mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                       mFoundLegacyWorlds;
    ::ll::TypedStorage<8, 48, ::LegacyWorldConversionManager>            mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mImportCallbackToken;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConverter& operator=(LegacyWorldConverter const&);
    LegacyWorldConverter(LegacyWorldConverter const&);
    LegacyWorldConverter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _processLegacyWorld(::std::shared_ptr<::Legacy::WorldProcessRequest> processRequest);

    MCAPI void convertLegacyWorld(
        ::LegacyWorldInfo                                                                       worldInfo,
        ::std::string const&                                                                    newWorldDir,
        ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)> callback
    );

    MCAPI ::Core::PathBuffer<::std::string> createUniquePathForWorld() const;

    MCAPI void handleLegacyWorldConversionComplete(::ImportResult const& result);

    MCAPI ~LegacyWorldConverter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
