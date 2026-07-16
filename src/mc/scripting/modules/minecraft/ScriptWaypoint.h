#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/scripting/modules/minecraft/ScriptWaypointTextureSelector.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWaypoint {
public:
    // ScriptWaypoint inner types define
    using PropertyVariantType = ::std::variant<
        bool,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
        ::ScriptModuleMinecraft::ScriptDimensionLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptWaypointTextureSelector> mTextureSelector;
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>>    mColor;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsEnabled;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope const>                   mScope;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::variant<
                 bool,
                 ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
                 ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
                 ::ScriptModuleMinecraft::ScriptDimensionLocation> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnSetPropertyEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnRemoveEvent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWaypoint() = default;

    virtual ::std::unique_ptr<::ServerWaypoint> createWaypoint() const = 0;

    virtual ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptDimensionLocation,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getDimensionLocation() const = 0;

    virtual bool isValid() const = 0;
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
