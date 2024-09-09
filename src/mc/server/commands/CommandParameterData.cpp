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
  mOptions(CommandParameterOption::None) {}

bool CommandParameterData::operator==(CommandParameterData const& other) const {
    if (mTypeIndex != other.mTypeIndex || mName != other.mName || mOffset != other.mOffset
        || mSettedOffset != other.mSettedOffset) {
        return false;
    }
    if (mParamType == CommandParameterDataType::Postfix && other.mParamType == mParamType) {
        if (!((mEnumNameOrPostfix == other.mEnumNameOrPostfix)
              || (mEnumNameOrPostfix && other.mEnumNameOrPostfix
                  && strcmp(mEnumNameOrPostfix, other.mEnumNameOrPostfix) == 0))) {
            return false;
        }
    }
    return true;
}
