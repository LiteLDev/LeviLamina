#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { struct MinimapMarkerData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class MinimapItem : public ::EnableGetWeakRef<::Editor::Services::MinimapItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk411f42;
    ::ll::UntypedStorage<1, 1>  mUnkce9a39;
    ::ll::UntypedStorage<4, 4>  mUnk55e031;
    ::ll::UntypedStorage<4, 4>  mUnkd00df6;
    ::ll::UntypedStorage<4, 4>  mUnk3753e4;
    ::ll::UntypedStorage<8, 16> mUnk2a09a2;
    ::ll::UntypedStorage<4, 4>  mUnk4d0c0c;
    ::ll::UntypedStorage<4, 4>  mUnk9b8dec;
    ::ll::UntypedStorage<4, 8>  mUnk658126;
    ::ll::UntypedStorage<4, 4>  mUnk6039ec;
    ::ll::UntypedStorage<4, 4>  mUnk3d138a;
    ::ll::UntypedStorage<4, 4>  mUnke8cfd8;
    ::ll::UntypedStorage<8, 16> mUnkc253c9;
    ::ll::UntypedStorage<8, 64> mUnkd8a2aa;
    ::ll::UntypedStorage<1, 1>  mUnk13fa10;
    ::ll::UntypedStorage<1, 1>  mUnkd2de74;
    ::ll::UntypedStorage<1, 1>  mUnke5920d;
    ::ll::UntypedStorage<1, 1>  mUnkb5163a;
    ::ll::UntypedStorage<8, 24> mUnkdb74a5;
    ::ll::UntypedStorage<8, 24> mUnk384288;
    ::ll::UntypedStorage<8, 64> mUnkf3e105;
    ::ll::UntypedStorage<4, 8>  mUnkf44e5c;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapItem& operator=(MinimapItem const&);
    MinimapItem(MinimapItem const&);
    MinimapItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    MinimapItem(::mce::UUID id, int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType);

    MCNAPI void
    addCustomMarker(::std::string const& iconIdentifier, ::std::vector<::Editor::Services::MinimapMarkerData> data);

    MCNAPI void addLocationMarker(::std::vector<::Editor::Services::MinimapMarkerData> data);

    MCNAPI bool hasCustomGroup(::std::string const& iconIdentifier) const;

#ifdef LL_PLAT_C
    MCNAPI void markChunkDirty(int blockX, int blockZ);

    MCNAPI void removeAllCustomMarkers();

    MCNAPI void setMultiplayerMarkers(::std::vector<::Editor::Services::MinimapMarkerData> data);
#endif

    MCNAPI ~MinimapItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::UUID id, int mapWidth, int mapHeight, ::Editor::Services::MinimapViewType minimapViewType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
