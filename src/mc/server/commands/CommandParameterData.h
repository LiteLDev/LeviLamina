#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandRegistry.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"

class CommandParameterData {
public:
    using ParseFn = typename CommandRegistry::ParseFn;

    Bedrock::typeid_t<CommandRegistry> mTypeIndex;             // this+0x0
    ParseFn                            mParse;                 // this+0x8
    std::string                        mName;                  // this+0x10
    char const*                        mEnumNameOrPostfix;     // this+0x30
    CommandRegistry::Symbol            mEnumOrPostfixSymbol{}; // this+0x38
    char const*                        mSubChain;              // this+0x40
    CommandRegistry::Symbol            mSubChainSymbol{};      // this+0x48
    CommandParameterDataType           mParamType;             // this+0x4c
    int                                mOffset;                // this+0x50
    int                                mSettedOffset;          // this+0x54
    bool                               mIsOptional;            // this+0x58
    CommandParameterOption             mOptions;               // this+0x59

    CommandParameterData() = default;

    LLNDAPI CommandParameterData(
        Bedrock::typeid_t<CommandRegistry> typeIndex,
        ParseFn                            parser,
        std::string                        name,
        ::CommandParameterDataType         type,
        char const*                        enumNameOrPostfix,
        char const*                        subChain,
        int                                offset,
        bool                               optional,
        int                                flagOffset,
        CommandParameterOption             options
    );

    CommandParameterData& addOptions(::CommandParameterOption options) {
        mOptions = (CommandParameterOption)((uchar)mOptions | (uchar)options);
        return *this;
    }

    LLNDAPI bool operator==(CommandParameterData const& other) const;

    CommandParameterData(CommandParameterData const&)            = default;
    CommandParameterData& operator=(CommandParameterData const&) = default;
    // NOLINTEND
};
