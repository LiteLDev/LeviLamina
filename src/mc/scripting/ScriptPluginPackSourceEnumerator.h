#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSourceEnumerator.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class PackInstance;
// clang-format on

class ScriptPluginPackSourceEnumerator : public ::IScriptPluginSourceEnumerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5b034a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginPackSourceEnumerator& operator=(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const /*override*/;

    // vIndex: 0
    virtual ~ScriptPluginPackSourceEnumerator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptPluginPackSourceEnumerator(::std::string const& scriptRoot, ::std::vector<::PackInstance> const& packStack);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& scriptRoot, ::std::vector<::PackInstance> const& packStack);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& $getPluginSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
