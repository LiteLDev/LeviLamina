#pragma once

#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/mod/NativeMod.h"

#include "mc/deps/core/utility/typeid_t.h"
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
    LLNDAPI CommandRegistry::FactoryFn* getFactory();
    LLNDAPI std::vector<CommandParameterData>& getParams();
    LLNDAPI CommandHandle&                     getHandle();
    LLNDAPI std::weak_ptr<mod::Mod>& getMod();
    LLNDAPI std::lock_guard<std::recursive_mutex> lock();

    LLNDAPI char const* storeStr(std::string_view);

    LLNDAPI explicit OverloadData(CommandHandle& handle, std::weak_ptr<mod::Mod> mod);

    LLNDAPI CommandParameterData& back();

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

    LLAPI CommandParameterData& addParamImpl(
        Bedrock::typeid_t<CommandRegistry> id,
        CommandRegistry::ParseFn           parser,
        std::string_view                   name,
        CommandParameterDataType           type,
        std::string_view                   enumNameOrPostfix,
        std::string_view                   subChain,
        int                                offset,
        int                                flagOffset,
        bool                               optional,
        CommandParameterOption             options
    );

    LLAPI CommandParameterData& addTextImpl(std::string_view text, int offset);

    LLAPI void setFactory(std::function<std::unique_ptr<::Command>()>&& fn);

public:
    LLAPI ~OverloadData();
    LLAPI OverloadData& operator=(OverloadData&&);
    LLNDAPI             OverloadData(OverloadData&&);
};
} // namespace ll::command
