#pragma once
#include <vector>

namespace ScriptApi {
class ScriptObjectHandle;
class ScriptVersionInfo;
class ScriptReportItem;
class ScriptCallbackInterface {
    virtual ~ScriptCallbackInterface();
    virtual void makeErrorResultObject(ScriptObjectHandle&);
    virtual void processLogCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processRegisterEventDataCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processCreateEventDataCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processListenForEventCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processBroadcastEventCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processCreateEntityCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processDestroyEntityCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processIsValidEntityCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processRegisterComponentCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processCreateComponentCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processDestroyComponentCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processHasComponentCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processGetComponentCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processApplyComponentChangesCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processRegisterQueryCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processAddFilterToQueryCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processGetEntitiesFromQueryCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processGetBlockCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processGetBlocksCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processExecuteCommandCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processRegisterSystemCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processInfoCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processWarningCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
    virtual void processErrorCallback(std::vector<ScriptObjectHandle> const&, ScriptObjectHandle&);
};
} // namespace ScriptApi