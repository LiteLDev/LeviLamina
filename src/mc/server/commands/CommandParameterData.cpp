#include "mc/server/commands/CommandParameterData.h"

CommandParameterData::CommandParameterData(
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
)
: mTypeIndex(typeIndex),
  mParse(parser),
  mName(std::move(name)),
  mEnumNameOrPostfix(enumNameOrPostfix),
  mChainedSubcommand(subChain),
  mParamType(type),
  mOffset(offset),
  mSetOffset(flagOffset),
  mIsOptional(optional),
  mOptions(options) {}

bool CommandParameterData::operator==(CommandParameterData const& other) const {
    if (mTypeIndex != other.mTypeIndex || mName != other.mName || mOffset != other.mOffset
        || mSetOffset != other.mSetOffset) {
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
