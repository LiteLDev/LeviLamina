#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/util/Bounds.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class ServerLevel;
class Vec3;
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
        ::ll::TypedStorage<4, 4, int> mCount;
        // NOLINTEND
    };

    struct PromiseContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<4, 48, ::Bounds>      mBounds;
        ::ll::TypedStorage<
            8,
            80,
            ::Scripting::Promise<::ScriptModuleMinecraft::ScriptTickingArea, ::Scripting::Error, void>>
                                                  mPromise;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
        ::ll::TypedStorage<1, 1, bool>            mFinishedLoading;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PromiseContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::mce::UUID, ::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext>>
        mPromiseContexts;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::DimensionType,
            ::std::unordered_map<::ChunkPos, ::ScriptModuleMinecraft::ScriptTickingAreaManager::Counter>>>
                                                              mTickingChunksCache;
    ::ll::TypedStorage<4, 4, int const>                       mMaxNumberOfChunks;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
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
    MCAPI ScriptTickingAreaManager(::ScriptModuleMinecraft::ScriptTickingAreaManager const&);

    MCAPI ::Bounds _getChunkBounds(::Vec3 const& from, ::Vec3 const& to) const;

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptTickingArea>
    _getTickingArea(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const& context) const;

    MCAPI bool _hasCapacity(::DimensionType const& dimensionId, ::Bounds const& bounds);

    MCAPI bool _removeTickingAreas(::std::vector<::mce::UUID> const& uuids);

    MCAPI void _removeTickingChunksFromCache(::DimensionType const& dimensionId, ::Bounds const& bounds);

    MCAPI ::Scripting::Result<
        ::Scripting::Promise<::ScriptModuleMinecraft::ScriptTickingArea, ::Scripting::Error, void>,
        ::ScriptModuleMinecraft::ScriptTickingAreaError,
        ::Scripting::EngineError>
    createTickingArea(
        ::Scripting::ScriptObjectFactory&                        factory,
        ::Scripting::ContextConfig const&                        contextConfig,
        ::std::string const&                                     identifier,
        ::ScriptModuleMinecraft::ScriptTickingAreaOptions const& options
    );

    MCAPI ::Scripting::Result<::std::vector<::ScriptModuleMinecraft::ScriptTickingArea>, ::Scripting::EngineError>
    getAllTickingAreas() const;

    MCAPI ::Scripting::Result<::std::optional<::ScriptModuleMinecraft::ScriptTickingArea>, ::Scripting::EngineError>
    getTickingArea(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptTickingArea> const& area) const;

    MCAPI bool hasCapacity(::ScriptModuleMinecraft::ScriptTickingAreaOptions const& options);

    MCAPI ::Scripting::Result<void, ::Scripting::EngineError> removeAllTickingAreas();

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptTickingAreaError, ::Scripting::EngineError>
    removeTickingArea(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptTickingArea> const& area);

    MCAPI bool tryResolvePromise(::mce::UUID uuid);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickingAreaManager const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::LevelTickingAreaFinishedLoadingEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
