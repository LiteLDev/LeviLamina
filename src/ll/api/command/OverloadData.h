#pragma once

#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
class CommandHandle;
class CommandRegistrar;
class OverloadData {
    friend CommandHandle;
    friend CommandRegistrar;

    enum class Placeholder : uint64 {};

    struct Impl;
    std::unique_ptr<Impl> impl;

protected:
    CommandRegistry::FactoryFn            getFactory();
    std::vector<CommandParameterData>&    getParams();
    CommandHandle&                        getHandle();
    std::lock_guard<std::recursive_mutex> lock();

    LLAPI explicit OverloadData(CommandHandle& handle);

    LLAPI CommandParameterData& back();

    LLAPI CommandParameterData& addParamImpl(
        Bedrock::typeid_t<CommandRegistry> id,
        CommandRegistry::ParseFn           parser,
        std::string_view                   name,
        CommandParameterDataType           type,
        char const*                        enumNameOrPostfix,
        int                                offset,
        int                                flagOffset,
        bool                               optional
    );

    LLAPI CommandParameterData& addTextImpl(std::string_view text, int offset);

    LLAPI char const* addPostfix(std::string_view);

    LLAPI void setFactory(CommandRegistry::FactoryFn fn);

public:
    LLAPI ~OverloadData();
    LLAPI OverloadData(OverloadData&&);
};
} // namespace ll::command
