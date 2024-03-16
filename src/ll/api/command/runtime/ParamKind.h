#pragma once

#include "ll/api/base/Meta.h"
#include "ll/api/command/Optional.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/effect/MobEffect.h"
#include "mc/world/level/Command.h"

namespace ll::command {

using ParamKindType = size_t;

namespace ParamKind {

enum Kind : ParamKindType {
    Int,
    Bool,
    Float,
    Dimension,
    String,
    Enum,
    SoftEnum,
    Actor,
    Player,
    BlockPos,
    Vec3,
    RawText,
    Message,
    JsonValue,
    Item,
    BlockName,
    BlockState,
    Effect,
    ActorType,
    Command,
    RelativeFloat,
    IntegerRange,
    FilePath,
    WildcardInt,
    WildcardActor,
    Count,
};
} // namespace ParamKind

using ParamKindList = meta::TypeList<
    int,
    bool,
    float,
    ::DimensionType,
    std::string,
    std::pair<std::string, uint64>,
    std::string,
    CommandSelector<Actor>,
    CommandSelector<Player>,
    CommandPosition,
    CommandPositionFloat,
    CommandRawText,
    CommandMessage,
    Json::Value,
    CommandItem,
    CommandBlockName,
    std::vector<BlockStateCommandParam>,
    MobEffect const*,
    ActorDefinitionIdentifier const*,
    std::unique_ptr<::Command>,
    RelativeFloat,
    CommandIntegerRange,
    CommandFilePath,
    CommandWildcardInt,
    WildcardCommandSelector<Actor>>;

class ParamStorageType : public Optional<ParamKindList::to<std::variant>> {
public:
    using Optional<ParamKindList::to<std::variant>>::Optional;

    ParamKindType index() const { return mValue.index(); }
    bool          hold(ParamKindType kind) const { return has_value() && kind == index(); }
    template <size_t N>
    decltype(auto) get() const {
        return std::get<N>(value());
    }
};

} // namespace ll::command
