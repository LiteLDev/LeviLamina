#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "ScriptBinderComponent.h"

#include "../dll.h"

namespace ScriptApi {
class ScriptObjectHandle;
} // namespace ScriptApi

class ScriptObjectBinder {
public:
    std::string                                         type;
    uint32_t                                            mask{};
    std::vector<std::unique_ptr<ScriptBinderComponent>> components;

    inline ScriptObjectBinder(std::string type)
        : type(type) {
    }

    // static MCAPI std::unique_ptr<ScriptObjectBinder> extract(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &);
    MCAPI bool serialize(ScriptEngine&, ScriptApi::ScriptObjectHandle&);
};