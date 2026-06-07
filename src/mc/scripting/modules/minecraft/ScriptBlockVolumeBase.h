#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
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
    // prevent constructor by default
    ScriptBlockVolumeBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockVolumeBase() /*override*/;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) = 0;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBlockVolumeBase(::std::unique_ptr<::BlockVolumeBase> blockVolumeBase);

#ifdef LL_PLAT_C
    MCAPI void forEach(::std::function<bool(::BlockPos const&)> callback) const;
#endif

    MCAPI ::Scripting::Result_deprecated<::BoundingBox> getBoundingBox() const;

#ifdef LL_PLAT_C
    MCAPI int getCapacity() const;
#endif

    MCAPI ::std::set<::ChunkPos> getChunks() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMax() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getMin() const;

    MCAPI ::Vec3 getSpan() const;

    MCAPI bool isInside(::Vec3 const& location) const;

    MCAPI void translate(::Vec3 const& delta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::BlockVolumeBase> blockVolumeBase);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
