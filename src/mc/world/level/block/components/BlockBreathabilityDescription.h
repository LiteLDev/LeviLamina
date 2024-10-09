#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockBreathabilityDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockBreathabilityDescription& operator=(BlockBreathabilityDescription const&);
    BlockBreathabilityDescription(BlockBreathabilityDescription const&);
    BlockBreathabilityDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockBreathabilityDescription() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::string const NameID;

    // NOLINTEND
};
