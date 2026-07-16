#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/textobject/TextObjectRoot.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Player;
class SaveContext;
// clang-format on

class ChalkboardBlockActor : public ::VanillaBlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    struct CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    struct CachedLineData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 4, int>            lineLength;
        // NOLINTEND
    };

    struct CachedMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 640, ::std::array<::ChalkboardBlockActor::CachedLineData, 16>> lineData;
        ::ll::TypedStorage<4, 4, uint>                                                       numLines;
        ::ll::TypedStorage<8, 32, ::std::string>                                             filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                                                cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                                       dirty;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~CachedMessageData();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
        // NOLINTEND
    };

    struct ChalkboardFinder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                    mChunkFound;
        ::ll::TypedStorage<8, 8, ::ChalkboardBlockActor*> mBoard;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mText;
    ::ll::TypedStorage<8, 32, ::std::string>                              mTextObjectString;
    ::ll::TypedStorage<8, 32, ::TextObjectRoot>                           mTextObjectMessage;
    ::ll::TypedStorage<8, 696, ::ChalkboardBlockActor::CachedMessageData> mCachedMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mSiblings;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldPersistFormatting;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mBasePos;
    ::ll::TypedStorage<1, 1, ::ChalkboardSize>                            mSize;
    ::ll::TypedStorage<1, 1, bool>                                        mIsOnGround;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mInitialized;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    ChalkboardBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChalkboardBlockActor() /*override*/ = default;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual void onChanged(::BlockSource&) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual ::std::string getImmersiveReaderText(::BlockSource&) /*override*/;

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const&) const /*override*/;

    virtual void setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChalkboardBlockActor(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI int getRotation(::BlockSource& region) const;

    MCAPI ::std::string const& getText() const;
#endif

    MCAPI bool playerMayDestroy(::Player& player) const;

#ifdef LL_PLAT_C
    MCAPI ::ChalkboardBlockActor::CachedMessageData&
    setCachedMessage(::ChalkboardBlockActor::CachedMessageData cachedMessage);

    MCAPI void setText(::std::string const& text, ::TextObjectRoot&& root);
#endif

    MCAPI void validate(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canCreateChalkboard(
        ::Actor*                   creator,
        ::BlockSource&             region,
        ::BlockPos const&          basePos,
        ::ChalkboardSize           boardSize,
        uchar                      face,
        int                        dir,
        ::std::vector<::BlockPos>& occupiedBlocks,
        ::ItemStack const&         instance,
        bool                       generateParticles
    );

    MCAPI static ::ChalkboardBlockActor* convertFromEntity(::BlockSource& region, ::CompoundTag const& tag);

    MCAPI static ::ChalkboardBlockActor* createChalkboard(
        ::Actor*           creator,
        ::BlockSource&     region,
        ::BlockPos const&  basePos,
        ::ChalkboardSize   boardSize,
        uchar              face,
        int                dir,
        bool               isOnGround,
        ::ItemStack const& instance,
        ::std::string      text
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
