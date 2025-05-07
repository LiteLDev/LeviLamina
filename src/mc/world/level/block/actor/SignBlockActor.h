#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class SaveContext;
class TextObjectRoot;
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
        ::ll::UntypedStorage<8, 32> mUnk91ce4f;
        ::ll::UntypedStorage<4, 4>  mUnk35f0f1;
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
        ::ll::UntypedStorage<8, 160> mUnkbfd50f;
        ::ll::UntypedStorage<4, 4>   mUnkf1d1da;
        ::ll::UntypedStorage<8, 32>  mUnk7dddfe;
        ::ll::UntypedStorage<8, 8>   mUnkeb613c;
        ::ll::UntypedStorage<1, 1>   mUnk6a42b3;
        ::ll::UntypedStorage<4, 4>   mUnkcd7811;
        ::ll::UntypedStorage<4, 4>   mUnk770afe;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
        CachedMessageData();
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
        ::ll::UntypedStorage<8, 32>  mUnk88dc11;
        ::ll::UntypedStorage<8, 32>  mUnkaa8b5f;
        ::ll::UntypedStorage<8, 32>  mUnk5885e2;
        ::ll::UntypedStorage<8, 224> mUnk5f1573;
        ::ll::UntypedStorage<4, 16>  mUnke0f953;
        ::ll::UntypedStorage<1, 1>   mUnkf0c705;
        ::ll::UntypedStorage<1, 1>   mUnkd4ffb0;
        ::ll::UntypedStorage<1, 1>   mUnkd39979;
        ::ll::UntypedStorage<8, 32>  mUnk96a516;
        ::ll::UntypedStorage<8, 32>  mUnk293de5;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignBlockActor() /*override*/ = default;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual float getShadowRadius(::BlockSource& region) const /*override*/;

    // vIndex: 29
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 39
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 40
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 41
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 42
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 46
    virtual bool _playerCanUpdate(::Player const& fromPlayer) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateTextFromClient(::CompoundTag const& data, ::BlockSource const& region);

    MCNAPI ::SignTextSide getSideFacingPlayer(::Player const& player) const;

    MCNAPI void setMessageForServerScripingOnly(::SignTextSide side, ::std::string message, ::std::string ownerID);

    MCNAPI void setMessageForServerScripingOnly(::SignTextSide side, ::TextObjectRoot message, ::std::string ownerID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI float $getShadowRadius(::BlockSource& region) const;

    MCNAPI ::std::string $getImmersiveReaderText(::BlockSource& region);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;

    MCNAPI ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;

    MCNAPI void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCNAPI void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCNAPI bool $_playerCanUpdate(::Player const& fromPlayer) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
