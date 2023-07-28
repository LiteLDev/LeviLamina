#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

class CommandParameterData {

public:
    using ParseFn =
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const;

    Bedrock::typeid_t<CommandRegistry> mTypeIndex;     // this+0x0
    ParseFn                            mParse;         // this+0x8
    std::string                        mName;          // this+0x10
    const char*                        mEnumName;      // this+0x30
    int                                mEnumSymbol;    // this+0x38
    const char*                        mPostfix;       // this+0x40
    int                                mPostfixSymbol; // this+0x48
    CommandParameterDataType           mParamType;     // this+0x4c
    int                                mOffset;        // this+0x50
    int                                mSetOffset;     // this+0x54
    bool                               mIsOptional;    // this+0x58
    CommandParameterOption             mOptions;       // this+0x59
    /**
     * @symbol ??0CommandParameterData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandParameterData(class CommandParameterData const&); // NOLINT
    /**
     * @symbol
     * ??0CommandParameterData\@\@QEAA\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@3\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@7\@\@ZPEBDW4CommandParameterDataType\@\@77H_NH\@Z
     */
    MCAPI CommandParameterData(
        class Bedrock::typeid_t<class CommandRegistry> typeIndex,
        ParseFn                                        parser,
        char const*                                    name,
        enum class CommandParameterDataType            paramType,
        char const*                                    enumName,
        char const*                                    postFix,
        int                                            offset,
        bool                                           optional,
        int                                            flagOffset
    ); // NOLINT
    /**
     * @symbol ?addOptions\@CommandParameterData\@\@QEAAAEAV1\@W4CommandParameterOption\@\@\@Z
     */
    MCAPI class CommandParameterData& addOptions(enum class CommandParameterOption); // NOLINT
    /**
     * @symbol ??1CommandParameterData\@\@QEAA\@XZ
     */
    MCAPI ~CommandParameterData(); // NOLINT
};
