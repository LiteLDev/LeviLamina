#pragma once

namespace ScriptApi {
class ScriptObjectHandle;
} // namespace ScriptApi

class ScriptBinderComponent {
public:
    virtual ~ScriptBinderComponent()                                                              = default;
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const = 0;
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&)     = 0;
};