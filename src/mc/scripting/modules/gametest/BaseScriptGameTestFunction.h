#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScriptGameTestFunction() /*override*/;

    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    createContext(::gametest::BaseGameTestHelper& helper) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseScriptGameTestFunction(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);

    MCAPI void addTag(::std::string tag);

    MCFOLD void setBatch(::std::string batchName);

    MCFOLD void setMaxAttempts(int maxAttempts);

    MCAPI void setMaxTicks(int maxTicks);

    MCAPI void setPadding(int blockPadding);

    MCFOLD void setRequired(bool required);

    MCFOLD void setRequiredSuccesses(int requiredSuccesses);

    MCFOLD void setRotate(bool rotate);

    MCFOLD void setSetupTicks(int setupTicks);

    MCAPI void setStructureDimension(::DimensionType structureDimension);

    MCAPI void setStructureLocation(::BlockPos structureLocation);

    MCAPI void setStructureName(::std::string structureName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    $createContext(::gametest::BaseGameTestHelper& helper) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
