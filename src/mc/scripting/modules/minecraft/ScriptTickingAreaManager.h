#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Vec3;
struct Bounds;
struct LevelTickingAreaFinishedLoadingEvent;
namespace ScriptModuleMinecraft { struct ScriptTickingArea; }
namespace ScriptModuleMinecraft { struct ScriptTickingAreaError; }
namespace ScriptModuleMinecraft { struct ScriptTickingAreaOptions; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTickingAreaManager : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // ScriptTickingAreaManager inner types declare
    // clang-format off
    struct Counter;
    struct PromiseContext;
    // clang-format on

    // ScriptTickingAreaManager inner types define
    struct Counter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkef8730;
        // NOLINTEND

    public:
        // prevent constructor by default
        Counter& operator=(Counter const&);
        Counter(Counter const&);
        Counter();
    };

    struct PromiseContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf58131;
        ::ll::UntypedStorage<4, 48> mUnk1461fc;
        ::ll::UntypedStorage<8, 80> mUnke20b79;
        ::ll::UntypedStorage<4, 4>  mUnk3121ad;
        ::ll::UntypedStorage<1, 1>  mUnk60b7ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        PromiseContext& operator=(PromiseContext const&);
        PromiseContext(PromiseContext const&);
        PromiseContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PromiseContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc512a2;
    ::ll::UntypedStorage<8, 16> mUnkfae1f5;
    ::ll::UntypedStorage<4, 4>  mUnk8b769f;
    ::ll::UntypedStorage<8, 16> mUnke15573;
    ::ll::UntypedStorage<8, 8>  mUnka09ee3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaManager& operator=(ScriptTickingAreaManager const&);
    ScriptTickingAreaManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::LevelTickingAreaFinishedLoadingEvent const& event) /*override*/;

    virtual ~ScriptTickingAreaManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTickingAreaManager(::ScriptModuleMinecraft::ScriptTickingAreaManager const&);

    MCNAPI ::Bounds _getChunkBounds(::Vec3 const& from, ::Vec3 const& to) const;

    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptTickingArea>
    _getTickingArea(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const& context) const;

    MCNAPI bool _hasCapacity(::DimensionType const& dimensionId, ::Bounds const& bounds);

    MCNAPI bool _removeTickingAreas(::std::vector<::mce::UUID> const& uuids);

    MCNAPI void _removeTickingChunksFromCache(::DimensionType const& dimensionId, ::Bounds const& bounds);

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<::ScriptModuleMinecraft::ScriptTickingArea, ::Scripting::Error, void>,
        ::ScriptModuleMinecraft::ScriptTickingAreaError,
        ::Scripting::EngineError>
    createTickingArea(
        ::Scripting::ScriptObjectFactory&                        factory,
        ::Scripting::ContextConfig const&                        contextConfig,
        ::std::string const&                                     identifier,
        ::ScriptModuleMinecraft::ScriptTickingAreaOptions const& options
    );

    MCNAPI ::Scripting::Result<::std::vector<::ScriptModuleMinecraft::ScriptTickingArea>, ::Scripting::EngineError>
    getAllTickingAreas() const;

    MCNAPI ::Scripting::Result<::std::optional<::ScriptModuleMinecraft::ScriptTickingArea>, ::Scripting::EngineError>
    getTickingArea(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptTickingArea> const& area) const;

    MCNAPI bool hasCapacity(::ScriptModuleMinecraft::ScriptTickingAreaOptions const& options);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> removeAllTickingAreas();

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptTickingAreaError, ::Scripting::EngineError>
    removeTickingArea(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptTickingArea> const& area);

    MCNAPI bool tryResolvePromise(::mce::UUID uuid);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickingAreaManager const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::LevelTickingAreaFinishedLoadingEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
