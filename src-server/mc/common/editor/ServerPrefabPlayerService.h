#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ServerPrefabPlayerServiceProvider.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

namespace Editor::Services {

class ServerPrefabPlayerService : public ::Editor::Services::IEditorService, public ::Editor::Prefabs::ServerPrefabPlayerServiceProvider, public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd20dca;
    ::ll::UntypedStorage<4, 4> mUnk281e56;
    ::ll::UntypedStorage<4, 12> mUnke74db6;
    ::ll::UntypedStorage<4, 4> mUnk1cf793;
    ::ll::UntypedStorage<8, 64> mUnkc4c47a;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPrefabPlayerService& operator=(ServerPrefabPlayerService const&);
    ServerPrefabPlayerService(ServerPrefabPlayerService const&);
    ServerPrefabPlayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPrefabPlayerService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
