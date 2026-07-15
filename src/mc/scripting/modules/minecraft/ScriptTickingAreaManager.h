#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
struct LevelTickingAreaFinishedLoadingEvent;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
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
        ::ll::TypedStorage<8, 32, ::std::string>                                  mName;
        ::ll::TypedStorage<4, 48, ::Bounds>                                       mBounds;
        ::ll::TypedStorage<8, 80, ::Scripting::Promise<void, ::Scripting::Error>> mPromise;
        ::ll::TypedStorage<4, 4, ::DimensionType>                                 mDimensionType;
        ::ll::TypedStorage<1, 1, bool>                                            mFinishedLoading;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTickingAreaManager() /*override*/ = default;

    virtual ::EventResult onEvent(::LevelTickingAreaFinishedLoadingEvent const&) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
