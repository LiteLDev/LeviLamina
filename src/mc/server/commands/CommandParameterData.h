#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandRegistry;
// clang-format on

class CommandParameterData {
public:
    // CommandParameterData inner types define
    using ParseFunction =
        bool (::CommandRegistry::*)(void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, ::std::string&, ::std::vector<::std::string>&)
            const;

public:
    // member variables
    // NOLINTBEGIN
    ::Bedrock::typeid_t<::CommandRegistry> mTypeIndex;
    ParseFunction                          mParse;
    ::std::string                          mName;
    char const*                            mEnumNameOrPostfix;
    CommandRegistry::Symbol                mEnumOrPostfixSymbol;
    char const*                            mChainedSubcommand;
    CommandRegistry::Symbol                mChainedSubcommandSymbol;
    ::CommandParameterDataType             mParamType;
    int                                    mOffset;
    int                                    mSetOffset;
    bool                                   mIsOptional;
    ::CommandParameterOption               mOptions;
    // NOLINTEND


public:
    void addOptions(::CommandParameterOption option) {
        using T  = std::underlying_type_t<::CommandParameterOption>;
        mOptions = static_cast<::CommandParameterOption>((T)option | (T)mOptions);
    }

    CommandParameterData() = default;

    LLNDAPI CommandParameterData(
        Bedrock::typeid_t<CommandRegistry> typeIndex,
        ParseFunction                      parser,
        std::string                        name,
        ::CommandParameterDataType         type,
        char const*                        enumNameOrPostfix,
        char const*                        subChain,
        int                                offset,
        bool                               optional,
        int                                flagOffset,
        CommandParameterOption             options
    );

    LLNDAPI bool operator==(CommandParameterData const& other) const;

    CommandParameterData(CommandParameterData const&)            = default;
    CommandParameterData& operator=(CommandParameterData const&) = default;

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
