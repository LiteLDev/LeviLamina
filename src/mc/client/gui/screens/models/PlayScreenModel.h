#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/WorldType.h"
#include "mc/client/gui/screens/models/interface/IWorldsProvider.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LevelSettings;
struct LocalWorldInfo;
struct NetworkWorldInfo;
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on

class PlayScreenModel : public ::MainMenuScreenModel, public ::IWorldsProvider {
public:
    // PlayScreenModel inner types declare
    // clang-format off
    struct LiveServer;
    class PlayScreenLevelListCacheObserver;
    // clang-format on

    // PlayScreenModel inner types define
    struct LiveServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6b787d;
        ::ll::UntypedStorage<1, 1> mUnk9f7f0d;
        ::ll::UntypedStorage<8, 8> mUnk1db196;
        ::ll::UntypedStorage<1, 1> mUnkfbebb7;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveServer& operator=(LiveServer const&);
        LiveServer(LiveServer const&);
        LiveServer();
    };

    class PlayScreenLevelListCacheObserver : public ::LevelListCacheObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdebdde;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayScreenLevelListCacheObserver& operator=(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver(PlayScreenLevelListCacheObserver const&);
        PlayScreenLevelListCacheObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual void onLevelAdded(::std::string const&) /*override*/;

        // vIndex: 3
        virtual void onLevelUpdated(::std::string const&) /*override*/;

        // vIndex: 4
        virtual void onLevelDeleted(::std::string const&) /*override*/;

        // vIndex: 6
        virtual void onStorageChanged() /*override*/;

        // vIndex: 0
        virtual ~PlayScreenLevelListCacheObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfe9c12;
    ::ll::UntypedStorage<1, 1>  mUnkef984f;
    ::ll::UntypedStorage<8, 24> mUnkcefad8;
    ::ll::UntypedStorage<8, 24> mUnk2652c7;
    ::ll::UntypedStorage<8, 24> mUnk3f9653;
    ::ll::UntypedStorage<8, 24> mUnk98113e;
    ::ll::UntypedStorage<8, 24> mUnk17427c;
    ::ll::UntypedStorage<8, 24> mUnka23e3f;
    ::ll::UntypedStorage<8, 24> mUnkd1e468;
    ::ll::UntypedStorage<8, 24> mUnk3dd62a;
    ::ll::UntypedStorage<8, 24> mUnk3bc784;
    ::ll::UntypedStorage<8, 24> mUnk488a33;
    ::ll::UntypedStorage<8, 24> mUnk124320;
    ::ll::UntypedStorage<8, 24> mUnka68103;
    ::ll::UntypedStorage<8, 64> mUnke492fc;
    ::ll::UntypedStorage<8, 72> mUnke5df74;
    ::ll::UntypedStorage<8, 24> mUnkd91d25;
    ::ll::UntypedStorage<1, 1>  mUnk93708b;
    ::ll::UntypedStorage<8, 24> mUnk478ae4;
    ::ll::UntypedStorage<1, 1>  mUnk63becc;
    ::ll::UntypedStorage<8, 16> mUnkf9cdb1;
    ::ll::UntypedStorage<4, 4>  mUnkbf035e;
    ::ll::UntypedStorage<4, 16> mUnkf62149;
    ::ll::UntypedStorage<1, 1>  mUnkae4f4b;
    ::ll::UntypedStorage<1, 1>  mUnk13f4cd;
    ::ll::UntypedStorage<4, 4>  mUnk1bf2e0;
    ::ll::UntypedStorage<1, 1>  mUnkb40a5e;
    ::ll::UntypedStorage<1, 1>  mUnkf577be;
    ::ll::UntypedStorage<1, 1>  mUnka74247;
    ::ll::UntypedStorage<1, 1>  mUnk23b365;
    ::ll::UntypedStorage<8, 48> mUnk919b99;
    ::ll::UntypedStorage<8, 24> mUnkdbf983;
    ::ll::UntypedStorage<1, 1>  mUnk29ff12;
    ::ll::UntypedStorage<1, 1>  mUnka65fbf;
    ::ll::UntypedStorage<1, 1>  mUnk35d55f;
    ::ll::UntypedStorage<1, 1>  mUnk27c849;
    ::ll::UntypedStorage<4, 4>  mUnk60fb6f;
    ::ll::UntypedStorage<8, 32> mUnkf714e4;
    ::ll::UntypedStorage<8, 16> mUnke0c444;
    ::ll::UntypedStorage<8, 8>  mUnk36a0c6;
    ::ll::UntypedStorage<8, 32> mUnk63414e;
    ::ll::UntypedStorage<1, 1>  mUnk5a3251;
    ::ll::UntypedStorage<8, 8>  mUnkca7731;
    ::ll::UntypedStorage<1, 1>  mUnk598b7c;
    ::ll::UntypedStorage<8, 8>  mUnkb47452;
    ::ll::UntypedStorage<8, 8>  mUnk468cea;
    ::ll::UntypedStorage<4, 4>  mUnk186320;
    ::ll::UntypedStorage<8, 8>  mUnkb92423;
    ::ll::UntypedStorage<8, 16> mUnka44355;
    ::ll::UntypedStorage<8, 16> mUnkf00c0c;
    ::ll::UntypedStorage<1, 1>  mUnk8cc807;
    ::ll::UntypedStorage<1, 1>  mUnk67684c;
    ::ll::UntypedStorage<4, 4>  mUnk6532b1;
    ::ll::UntypedStorage<4, 4>  mUnkc8b16a;
    ::ll::UntypedStorage<8, 8>  mUnk8cc361;
    ::ll::UntypedStorage<8, 24> mUnk90a2f3;
    ::ll::UntypedStorage<8, 16> mUnk13ae0f;
    ::ll::UntypedStorage<1, 1>  mUnk476e4b;
    ::ll::UntypedStorage<1, 1>  mUnkcff4aa;
    ::ll::UntypedStorage<1, 1>  mUnke3cfef;
    ::ll::UntypedStorage<4, 4>  mUnk65c518;
    ::ll::UntypedStorage<8, 16> mUnk390e3f;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenModel& operator=(PlayScreenModel const&);
    PlayScreenModel(PlayScreenModel const&);
    PlayScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayScreenModel() /*override*/ = default;

    // vIndex: 1
    virtual int getWorldCount(::WorldType, ::NetworkWorldType) const /*override*/;

    // vIndex: 2
    virtual ::LocalWorldInfo const* getLocalWorldAtIndex(int const) const /*override*/;

    // vIndex: 3
    virtual ::LocalWorldInfo const* getLocalWorldById(::std::string const&) const /*override*/;

    // vIndex: 4
    virtual bool refresh(::WorldType) /*override*/;

    // vIndex: 5
    virtual void startLocalWorld(::LocalWorldInfo, ::LevelSettings const*) /*override*/;

    // vIndex: 15
    virtual bool isDirty() const /*override*/;

    // vIndex: 18
    virtual ::IMinecraftEventing& getMinecraftEventing() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
