#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptPluginSourceEnumerator.h"

class ScriptPluginPackSourceEnumerator : public ::IScriptPluginSourceEnumerator {
public:
    // prevent constructor by default
    ScriptPluginPackSourceEnumerator& operator=(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator(ScriptPluginPackSourceEnumerator const&);
    ScriptPluginPackSourceEnumerator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPluginPackSourceEnumerator();

    // vIndex: 1
    virtual std::vector<std::shared_ptr<class IScriptPluginSource>> const& getPluginSources() const;

    MCAPI
    ScriptPluginPackSourceEnumerator(std::string const& scriptRoot, std::vector<class PackInstance> const& packStack);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& scriptRoot, std::vector<class PackInstance> const& packStack);

    MCAPI void dtor$();

    MCAPI std::vector<std::shared_ptr<class IScriptPluginSource>> const& getPluginSources$() const;

    // NOLINTEND
};
