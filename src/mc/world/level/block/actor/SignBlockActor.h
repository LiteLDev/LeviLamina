#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/OpenSignPacket.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/textobject/TextObjectRoot.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ILevel;
class Player;
class SaveContext;
// clang-format on

class SignBlockActor : public ::BlockActor {
public:
    // SignBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    struct CachedMessageData;
    struct OpenSignRequest;
    class Text;
    // clang-format on

    // SignBlockActor inner types define
    struct CachedLineData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 4, int>            lineLength;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);

#endif
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CachedLineData();

        MCAPI CachedLineData(::SignBlockActor::CachedLineData&&);

#ifdef LL_PLAT_C
        MCAPI CachedLineData(::SignBlockActor::CachedLineData const&);
#endif

        MCAPI ~CachedLineData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();

        MCFOLD void* $ctor(::SignBlockActor::CachedLineData&&);

#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SignBlockActor::CachedLineData const&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct CachedMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, ::SignBlockActor::CachedLineData[4]> lineData;
        ::ll::TypedStorage<4, 4, uint>                                  numLines;
        ::ll::TypedStorage<8, 32, ::std::string>                        filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                           cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                  dirty;
        ::ll::TypedStorage<4, 4, ::InputMode>                           inputMode;
        ::ll::TypedStorage<4, 4, ::NewInteractionModel>                 interactionModel;
        // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
        CachedMessageData();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI CachedMessageData(::SignBlockActor::CachedMessageData&&);

        MCAPI ::SignBlockActor::CachedMessageData& operator=(::SignBlockActor::CachedMessageData&&);

        MCAPI ~CachedMessageData();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SignBlockActor::CachedMessageData&&);
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

    struct OpenSignRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                                  mIsWaitingForChangeClear;
        ::ll::TypedStorage<8, 72, ::OpenSignPacket>                                     mOpenSignPacket;
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::OpenSignPacket&)>> mSendPacket;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~OpenSignRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class Text {
    public:
        // Text inner types define
        enum class LoadMode : int {
            TextOnly = 0,
            AllData  = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                        mMessage;
        ::ll::TypedStorage<8, 32, ::std::string>                        mFilteredMessage;
        ::ll::TypedStorage<8, 32, ::TextObjectRoot>                     mTextObjectMessage;
        ::ll::TypedStorage<8, 224, ::SignBlockActor::CachedMessageData> mCachedMessage;
        ::ll::TypedStorage<4, 16, ::mce::Color>                         mSignTextColor;
        ::ll::TypedStorage<1, 1, bool>                                  mGlowing;
        ::ll::TypedStorage<1, 1, bool>                                  mHideGlowOutline;
        ::ll::TypedStorage<1, 1, bool>                                  mShouldPersistFormatting;
        ::ll::TypedStorage<8, 32, ::std::string>                        mLastEditXuid;
        ::ll::TypedStorage<8, 32, ::std::string>                        mTextObjectString;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        Text& operator=(Text const&);
        Text(Text const&);

#else // LL_PLAT_C
#endif
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Text();

#ifdef LL_PLAT_S
        MCAPI Text(::SignBlockActor::Text&&);
#endif

        MCAPI void _parseOldVersionText(::CompoundTag const& tag);

        MCAPI void _parseOtherAttributes(::CompoundTag const& tag);

        MCAPI void _parseText(::CompoundTag const& tag);

        MCAPI ::std::string const& getMessage() const;

        MCAPI void load(::CompoundTag const& tag, ::SignBlockActor::Text::LoadMode load);

        MCAPI bool save(::CompoundTag& tag) const;

        MCAPI void setEditedBy(::std::string const& playerXuid);

        MCAPI void setMessage(::std::string message);

        MCAPI void setMessage(::TextObjectRoot message);

        MCAPI ~Text();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::add_lvalue_reference_t<char const[]> SIGN_PERSIST_FORMATTING_TAG();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

#ifdef LL_PLAT_S
        MCAPI void* $ctor(::SignBlockActor::Text&&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>>            mTextFront;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>>            mTextBack;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsWaxed;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                      mLockedForEditingBy;
    ::ll::TypedStorage<8, 152, ::std::optional<::SignBlockActor::OpenSignRequest>> mOpenSignRequest;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsRemoteProfanityFilterEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLocalProfanityFilterEnabled;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SignBlockActor();

#else // LL_PLAT_C
#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignBlockActor() /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual float getShadowRadius(::BlockSource& region) const /*override*/;

    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;

    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    virtual bool validateData(::CompoundTag const& tag) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual bool _playerCanUpdate(::Player const& fromPlayer) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI SignBlockActor(::BlockPos const& pos, ::BlockActorType blockActorType, ::BlockActorRendererId rendererId);
#endif

    MCAPI bool _tryLoadR13Data(::CompoundTag const& tag, ::SignBlockActor::Text& frontText);

    MCAPI void _updateTextFromClient(::CompoundTag const& data, ::BlockSource const& region);

    MCAPI ::SignTextSide getSideFacingPlayer(::Player const& player) const;

    MCAPI void
    requestToSendOpenSignPacket(::WeakRef<::EntityContext> entityRef, ::BlockPos const& position, bool isFrontSide);

#ifdef LL_PLAT_C
    MCAPI void setCachedMessage(::SignTextSide side, ::SignBlockActor::CachedMessageData cachedMessage);

    MCAPI void setMessage(::SignTextSide side, ::std::string message);
#endif

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::std::string message, ::std::string ownerID);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::TextObjectRoot message, ::std::string ownerID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::BlockPos const& pos, ::BlockActorType blockActorType, ::BlockActorRendererId rendererId);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void $onChanged(::BlockSource& region);

    MCAPI float $getShadowRadius(::BlockSource& region) const;

    MCAPI ::std::string $getImmersiveReaderText(::BlockSource& region);

    MCAPI void $tick(::BlockSource& region);

    MCAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;

    MCAPI ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;

    MCAPI void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCAPI void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCAPI bool $validateData(::CompoundTag const& tag) const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI bool $_playerCanUpdate(::Player const& fromPlayer) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
