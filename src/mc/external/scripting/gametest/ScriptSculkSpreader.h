#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
    // prevent constructor by default
    ScriptSculkSpreader& operator=(ScriptSculkSpreader const&) = delete;
    ScriptSculkSpreader(ScriptSculkSpreader const&)            = delete;
    ScriptSculkSpreader()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addCursorsWithOffset\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEAAXAEBVVec3\@\@H\@Z
     */
    MCAPI void addCursorsWithOffset(class Vec3 const&, int);
    /**
     * @symbol
     * ?getCursorPosition\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@VVec3\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<class Vec3> getCursorPosition(int) const;
    /**
     * @symbol ?getMaxCharge\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getMaxCharge() const;
    /**
     * @symbol ?getNumberOfCursors\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getNumberOfCursors() const;
    /**
     * @symbol ?getTotalCharge\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getTotalCharge() const;
    /**
     * @symbol ??4ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleGameTest::ScriptSculkSpreader& operator=(class ScriptModuleGameTest::ScriptSculkSpreader&&);
    /**
     * @symbol ??1ScriptSculkSpreader\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSculkSpreader();
    /**
     * @symbol
     * ?bind\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@SA?AV?$ClassBindingBuilder\@VScriptSculkSpreader\@ScriptModuleGameTest\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSculkSpreader> bind();
    /**
     * @symbol
     * ?getHandle\@ScriptSculkSpreader\@ScriptModuleGameTest\@\@SA?AV?$StrongTypedObjectHandle\@VScriptSculkSpreader\@ScriptModuleGameTest\@\@\@Scripting\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSculkSpreader>
    getHandle(class BlockSource&, class BlockPos const&, class Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
