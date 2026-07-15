#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptChunkValidator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockVolumeBase : public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable,
                              public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockVolumeBase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::BlockVolumeBase>>> mBlockVolumeBase;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockVolumeBase() /*override*/ = default;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) = 0;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() = 0;

    virtual ::std::vector<::Vec3> getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;

    virtual bool containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::BoundingBox> getBoundingBox() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMax() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMin() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::Vec3> $getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;

    MCAPI bool $containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
