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
  mUnknown(nullptr),
  mParamType(type),
  mOffset(offset),
  mSetOffset(flagOffset),
  mIsOptional(optional),
  mOptions(CommandParameterOption::None){};

bool CommandParameterData::operator==(CommandParameterData const& other) const {
    return mTypeIndex == other.mTypeIndex && mName == other.mName
        && ((mEnumNameOrPostfix == other.mEnumNameOrPostfix)
            || (mEnumNameOrPostfix && other.mEnumNameOrPostfix
                && strcmp(mEnumNameOrPostfix, other.mEnumNameOrPostfix) == 0))
        && ((mUnknown == other.mUnknown) || (mUnknown && other.mUnknown && strcmp(mUnknown, other.mUnknown) == 0))
        && mParamType == other.mParamType && mIsOptional == other.mIsOptional && mOptions == other.mOptions;
}
