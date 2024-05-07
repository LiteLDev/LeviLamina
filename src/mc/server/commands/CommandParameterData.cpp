#include "mc/server/commands/CommandParameterData.h"

CommandParameterData::CommandParameterData(
    Bedrock::typeid_t<CommandRegistry> typeIndex,
    ParseFn                            parser,
    std::string                        name,
    ::CommandParameterDataType         type,
    char const*                        enumNameOrPostfix,
    int                                offset,
    bool                               optional,
    int                                flagOffset
)
: mTypeIndex(typeIndex),
  mParse(parser),
  mName(std::move(name)),
  mEnumNameOrPostfix(enumNameOrPostfix),
  mSubChain(nullptr),
  mParamType(type),
  mOffset(offset),
  mSettedOffset(flagOffset),
  mIsOptional(optional),
  mOptions(CommandParameterOption::None){};

bool CommandParameterData::operator==(CommandParameterData const& other) const {
    return mTypeIndex == other.mTypeIndex && mName == other.mName
        && ((mEnumNameOrPostfix == other.mEnumNameOrPostfix)
            || (mEnumNameOrPostfix && other.mEnumNameOrPostfix
                && strcmp(mEnumNameOrPostfix, other.mEnumNameOrPostfix) == 0))
        && ((mSubChain == other.mSubChain) || (mSubChain && other.mSubChain && strcmp(mSubChain, other.mSubChain) == 0))
        && mParamType == other.mParamType && mIsOptional == other.mIsOptional && mOptions == other.mOptions;
}
