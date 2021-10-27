#pragma once

#include <string>

namespace ScriptApi {
class ScriptObjectHandle;
}

namespace Json {
class Value;
}

class ScriptEngine {
public:
    virtual ~ScriptEngine();
    struct ScriptQueueData {
        std::string relative_path, virtual_path, content, uuid, version_code;
    };

    bool deserializeScriptObjectHandleToJson(ScriptApi::ScriptObjectHandle const&, Json::Value&);
    bool serializeJsonToScriptObjectHandle(ScriptApi::ScriptObjectHandle&, Json::Value const&);
};