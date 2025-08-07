#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/textobject/TextObjectRoot.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
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

    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CachedLineData();

        MCNAPI CachedLineData(::SignBlockActor::CachedLineData&&);

        MCNAPI ~CachedLineData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::SignBlockActor::CachedLineData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    public:
        // prevent constructor by default
        Text& operator=(Text const&);
        Text(Text const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Text();

        MCAPI Text(::SignBlockActor::Text&&);

        MCAPI void _parseOldVersionText(::CompoundTag const& tag);

        MCAPI void _parseOtherAttributes(::CompoundTag const& tag);

        MCAPI void _parseText(::CompoundTag const& tag);

        MCAPI ::std::string const& getMessage() const;

        MCAPI void load(::CompoundTag const& tag, ::SignBlockActor::Text::LoadMode load);

        MCAPI bool save(::CompoundTag& tag) const;

        MCAPI void setEditedBy(::std::string const& playerXuid);

        MCAPI void setMessage(::TextObjectRoot message);

        MCAPI void setMessage(::std::string message);

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

        MCAPI void* $ctor(::SignBlockActor::Text&&);
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>> mTextFront;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>> mTextBack;
    ::ll::TypedStorage<1, 1, bool>                                      mIsWaxed;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mLockedForEditingBy;
    ::ll::TypedStorage<1, 1, bool>                                      mIsRemoteProfanityFilterEnabled;
    ::ll::TypedStorage<1, 1, bool>                                      mIsLocalProfanityFilterEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignBlockActor() /*override*/ = default;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 21
    virtual float getShadowRadius(::BlockSource& region) const /*override*/;

    // vIndex: 30
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 40
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 41
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 42
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 43
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 45
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 46
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 47
    virtual bool _playerCanUpdate(::Player const& fromPlayer) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignBlockActor(::BlockPos const& pos, ::BlockActorType blockActorType, ::std::string const& typeString);

    MCAPI void _updateTextFromClient(::CompoundTag const& data, ::BlockSource const& region);

    MCAPI ::SignTextSide getSideFacingPlayer(::Player const& player) const;

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::std::string message, ::std::string ownerID);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::TextObjectRoot message, ::std::string ownerID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::BlockActorType blockActorType, ::std::string const& typeString);
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
