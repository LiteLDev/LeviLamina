#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

class ChalkboardBlockActor : public ::BlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    class CachedLineData;
    class CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    class CachedLineData {
    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

    public:
        // NOLINTBEGIN
        MCAPI CachedLineData();

        MCAPI ~CachedLineData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void dtor$();

        // NOLINTEND
    };

    class CachedMessageData {
    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
        CachedMessageData();

    public:
        // NOLINTBEGIN
        MCAPI ~CachedMessageData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct ChalkboardFinder {
    public:
        // prevent constructor by default
        ChalkboardFinder& operator=(ChalkboardFinder const&);
        ChalkboardFinder(ChalkboardFinder const&);
        ChalkboardFinder();

    public:
        // NOLINTBEGIN
        MCAPI bool confirmedBroken(class ChalkboardBlockActor& compare, class BlockSource& region) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChalkboardBlockActor& operator=(ChalkboardBlockActor const&);
    ChalkboardBlockActor(ChalkboardBlockActor const&);
    ChalkboardBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChalkboardBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 28
    virtual std::string getImmersiveReaderText(class BlockSource& region);

    // vIndex: 37
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const& tag) const;

    // vIndex: 38
    virtual void setUgcStrings(class CompoundTag& tag, std::vector<std::string> const& list) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit ChalkboardBlockActor(class BlockPos const& pos);

    MCAPI ::ChalkboardSize const getChalkboardSize() const;

    MCAPI bool getLocked() const;

    MCAPI int getRotation(class BlockSource& region) const;

    MCAPI std::string const& getText() const;

    MCAPI int getTextCharCount() const;

    MCAPI void setText(std::string const& text);

    MCAPI void validate(class BlockSource& region);

    MCAPI static std::vector<class BlockPos>
    calculateAllBlocks(class BlockPos const& basePos, ::ChalkboardSize boardSize, int dir);

    MCAPI static bool canCreateChalkboard(
        class Actor*                 creator,
        class BlockSource&           region,
        class BlockPos const&        basePos,
        ::ChalkboardSize             boardSize,
        uchar                        face,
        int                          dir,
        std::vector<class BlockPos>& occupiedBlocks,
        class ItemStack const&       instance,
        bool                         generateParticles
    );

    MCAPI static class ChalkboardBlockActor* convertFromEntity(class BlockSource& region, class CompoundTag const& tag);

    MCAPI static class ChalkboardBlockActor* createChalkboard(
        class Actor*           creator,
        class BlockSource&     region,
        class BlockPos const&  basePos,
        ::ChalkboardSize       boardSize,
        uchar                  face,
        int                    dir,
        bool                   isOnGround,
        class ItemStack const& instance,
        std::string            text
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder
    _findChalkboard(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI std::string getImmersiveReaderText$(class BlockSource& region);

    MCAPI std::vector<std::string> getUgcStrings$(class CompoundTag const& tag) const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void setUgcStrings$(class CompoundTag& tag, std::vector<std::string> const& list) const;

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
