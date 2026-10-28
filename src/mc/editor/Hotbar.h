#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/editor/IHotbarPayloadHandler.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class HotbarElementBase; }
namespace Editor::Network { class HotbarCollectionElementChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
// clang-format on

namespace Editor {

class Hotbar : public ::Editor::IHotbarPayloadHandler, public ::EnableGetWeakRef<::Editor::Hotbar> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk3d96f5;
    ::ll::UntypedStorage<8, 48>  mUnk2a2014;
    ::ll::UntypedStorage<8, 144> mUnkd92544;
    ::ll::UntypedStorage<8, 40>  mUnk6bb346;
    ::ll::UntypedStorage<1, 1>   mUnkdd6abb;
    // NOLINTEND

public:
    // prevent constructor by default
    Hotbar& operator=(Hotbar const&);
    Hotbar(Hotbar const&);
    Hotbar();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Hotbar() = default;

    virtual void _handleHotbarCollectionElementChangedPayload(
        ::Editor::Network::HotbarCollectionElementChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarDisplayNameChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) /*override*/;
    // NOLINTEND
};

} // namespace Editor
