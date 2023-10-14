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

    CommandParameterData() : mTypeIndex(0){};

    CommandParameterData(
        const Bedrock::typeid_t<CommandRegistry>& typeIndex,
        ParseFn                                   parser,
        std::string_view                          name,
        ::CommandParameterDataType                type,
        char const*                               enumName,
        int                                       offset,
        bool                                      optional,
        int                                       flag_offset
    )
    : mTypeIndex(typeIndex),
      mParse(parser),
      mName(name),
      mEnumName(enumName),
      mEnumSymbol(-1),
      mPostfix(nullptr),
      mPostfixSymbol(-1),
      mParamType(type),
      mOffset(offset),
      mSetOffset(flag_offset),
      mIsOptional(optional),
      mOptions(CommandParameterOption::None){};

public:
    // NOLINTBEGIN
    // symbol: ??0CommandParameterData@@QEAA@AEBV0@@Z
    MCAPI CommandParameterData(class CommandParameterData const&);

    // symbol:
    // ??0CommandParameterData@@QEAA@V?$typeid_t@VCommandRegistry@@@Bedrock@@P8CommandRegistry@@EBA_NPEAXAEBUParseToken@3@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@7@@ZPEBDW4CommandParameterDataType@@77H_NH@Z
    MCAPI CommandParameterData(
        class Bedrock::typeid_t<class CommandRegistry> typeIndex,
        ParseFn                                        parser,
        char const*                                    name,
        ::CommandParameterDataType                     paramType,
        char const*                                    enumName,
        char const*                                    postFix,
        int                                            offset,
        bool                                           optional,
        int                                            flagOffset
    );

    // symbol: ?addOptions@CommandParameterData@@QEAAAEAV1@W4CommandParameterOption@@@Z
    MCAPI class CommandParameterData&
        addOptions(::CommandParameterOption = CommandParameterOption::EnumAutocompleteExpansion);

    // symbol: ??1CommandParameterData@@QEAA@XZ
    MCAPI ~CommandParameterData();

    // NOLINTEND
};
