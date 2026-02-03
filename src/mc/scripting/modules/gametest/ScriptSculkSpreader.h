#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SculkSpreader;
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                  mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mCatalystPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SculkSpreader* _getSculkSpreader() const;

    MCAPI void addCursorsWithOffset(::Vec3 const& offset, int charge);

    MCAPI ::Scripting::Result_deprecated<::Vec3> getCursorPosition(int index) const;

    MCAPI ::Scripting::Result_deprecated<int> getMaxCharge() const;

    MCAPI ::Scripting::Result_deprecated<int> getNumberOfCursors() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalCharge() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSculkSpreader>>
    getHandle(::BlockSource& region, ::BlockPos const& pos, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
