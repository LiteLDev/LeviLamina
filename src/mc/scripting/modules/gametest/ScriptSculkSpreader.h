#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk731900;
    ::ll::UntypedStorage<8, 8>  mUnka70c1b;
    ::ll::UntypedStorage<4, 12> mUnk6529e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSculkSpreader& operator=(ScriptSculkSpreader const&);
    ScriptSculkSpreader(ScriptSculkSpreader const&);
    ScriptSculkSpreader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCursorsWithOffset(::Vec3 const& offset, int charge);

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getCursorPosition(int index) const;

    MCNAPI ::Scripting::Result_deprecated<int> getMaxCharge() const;

    MCNAPI ::Scripting::Result_deprecated<int> getNumberOfCursors() const;

    MCNAPI ::Scripting::Result_deprecated<int> getTotalCharge() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptSculkSpreader> bind();

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSculkSpreader>>
    getHandle(::BlockSource& region, ::BlockPos const& pos, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
