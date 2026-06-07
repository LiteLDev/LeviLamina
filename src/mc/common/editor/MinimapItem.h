#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
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
    ::ll::UntypedStorage<8, 64> mUnke8c2ec;
    ::ll::UntypedStorage<8, 16> mUnk2a09a2;
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

    MCNAPI void addMarker(::Editor::Services::MinimapMarkerType markerType);

    MCNAPI ::WeakRef<::ICustomBiomeSource> const& getCustomBiome() const;

    MCNAPI ::mce::UUID const& getId() const;

    MCNAPI int getMapHeight() const;

    MCNAPI int getMapWidth() const;

    MCNAPI ::std::unordered_set<::Editor::Services::MinimapMarkerType> const& getMarkerTypes() const;

    MCNAPI ::Editor::Services::MinimapViewType getViewType() const;

    MCNAPI bool hasMarker(::Editor::Services::MinimapMarkerType markerType) const;

    MCNAPI bool isActive() const;

    MCNAPI void removeMarker(::Editor::Services::MinimapMarkerType markerType);

    MCNAPI void setActive(bool active);

    MCNAPI bool setCustomBiome(::WeakRef<::ICustomBiomeSource> const& customBiome);

    MCNAPI void setMapSize(int mapWidth, int mapHeight);

    MCNAPI void setMinimapViewType(::Editor::Services::MinimapViewType viewType);

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
