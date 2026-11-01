#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptChunkValidator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;

    virtual ::std::vector<::Vec3> getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const /*override*/;

    virtual bool containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setFrom(::Vec3 const& from);

    MCNAPI void setTo(::Vec3 const& to);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindEnums();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();

    MCNAPI ::std::vector<::Vec3> $getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;

    MCNAPI bool $containsBlock(
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
