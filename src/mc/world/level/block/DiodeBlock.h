#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DiodeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DiodeBlock& operator=(DiodeBlock const&);
    DiodeBlock(DiodeBlock const&);
    DiodeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiodeBlock();

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 54
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual int getSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 165
    virtual bool isSameDiode(class Block const& block) const;

    // vIndex: 166
    virtual bool shouldPrioritize(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167
    virtual bool isOn() const;

    // vIndex: 168
    virtual bool shouldTurnOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 169
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173
    virtual int getTurnOffDelay(class Block const& block) const;

    MCVAPI bool isLocked(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DiodeBlock(std::string const& nameId, int id, bool on);

    MCAPI static bool isDiode(class Block const& block);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI int getAlternateSignalAt(class BlockSource& region, class BlockPos const& pos, int facing) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getAlternateSignal$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getDirectSignal$(class BlockSource& region, class BlockPos const& pos, int dir) const;

    MCAPI int getInputSignal$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getOutputSignal$(class Block const& block) const;

    MCAPI int getSignal$(class BlockSource& region, class BlockPos const& pos, int dir) const;

    MCAPI int getTurnOffDelay$(class Block const& block) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAlternateInput$(class Block const& block) const;

    MCAPI bool isLocked$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isOn$() const;

    MCAPI bool isSameDiode$(class Block const& block) const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI bool shouldPrioritize$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldTurnOn$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
