#pragma once

#include "ll/api/base/Meta.h"
#include "ll/api/command/Optional.h"
#include "ll/api/command/ParamTraits.h"
#include "ll/api/command/Runtime/RuntimeEnum.h"

#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/json/Value.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/Command.h"
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
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/effect/MobEffect.h"

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
    // New types can only be added here, to keep the ABI stable.
    Count,
};
} // namespace ParamKind

using ParamKindList = meta::TypeList<
    int,
    bool,
    float,
    ::DimensionType,
    std::string,
    RuntimeEnum,
    RuntimeSoftEnum,
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
    WildcardCommandSelector<Actor>
    // New types can only be added here, to keep the ABI stable.
    >;

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
