#include "mc/server/commands/BlockStateCommandParam.h"
#include "ll/api/utils/StringUtils.h"

std::optional<Block::BlockStateValueType> BlockStateCommandParam::toStateValue() const {
    switch (mType) {
    case Type::Integer:
        return ll::string_utils::svtoi(mValue);
    case Type::Float:
        return ll::string_utils::svtof(mValue);
    case Type::Bool:
        return ll::string_utils::strtobool(mValue);
    case Type::String:
        return mValue;
    default:
        return std::nullopt;
    }
}
Block::BlockStatesType BlockStateCommandParam::toStateMap(std::vector<BlockStateCommandParam> const& vec) {
    Block::BlockStatesType res;
    res.reserve(vec.size());
    for (auto& p : vec) {
        if (auto val = p.toStateValue(); val) {
            res.emplace_back(p.mBlockState, *std::move(val));
        }
    }
    return res;
}
