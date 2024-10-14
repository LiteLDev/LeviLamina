#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TrialSpawnerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    TrialSpawnerBlock& operator=(TrialSpawnerBlock const&);
    TrialSpawnerBlock(TrialSpawnerBlock const&);
    TrialSpawnerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TrialSpawnerBlock() = default;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    MCAPI TrialSpawnerBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canContainLiquid$() const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isInteractiveBlock$() const;

    // NOLINTEND
};
