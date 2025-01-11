#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class Level;
class Player;
class SaveContext;
class TextObjectRoot;
struct ActorUniqueID;
namespace mce { class Color; }
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
        MCAPI CachedLineData();

        MCAPI CachedLineData(::SignBlockActor::CachedLineData&&);

        MCAPI ~CachedLineData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();

        MCFOLD void* $ctor(::SignBlockActor::CachedLineData&&);
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
        ::ll::UntypedStorage<8, 160> mUnkbfd50f;
        ::ll::UntypedStorage<4, 4>   mUnkf1d1da;
        ::ll::UntypedStorage<8, 32>  mUnk7dddfe;
        ::ll::UntypedStorage<8, 8>   mUnkeb613c;
        ::ll::UntypedStorage<1, 1>   mUnk6a42b3;
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
        ::ll::UntypedStorage<8, 216> mUnk5f1573;
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
    virtual ~SignBlockActor() /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 19
    virtual float getShadowRadius(::BlockSource& region) const /*override*/;

    // vIndex: 28
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 38
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 39
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 40
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 41
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual bool _playerCanUpdate(::Player const& fromPlayer) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignBlockActor(::BlockPos const& pos, ::BlockActorType blockActorType, ::std::string const& typeString);

    MCAPI void _updateTextFromClient(::CompoundTag const& data, ::BlockSource const& region);

    MCAPI bool getIsGlowing(::SignTextSide side) const;

    MCAPI bool getIsLockedForEditing(::ILevel& level);

    MCFOLD bool getIsWaxed() const;

    MCAPI ::std::string const& getMessage(::SignTextSide side) const;

    MCAPI ::std::string const& getRawMessage(::SignTextSide side) const;

    MCAPI ::SignTextSide getSideFacingPlayer(::Player const& player) const;

    MCAPI ::mce::Color const& getSignTextColor(::SignTextSide side) const;

    MCAPI ::TextObjectRoot const& getTextObject(::SignTextSide side) const;

    MCAPI bool isStringMessage(::SignTextSide side) const;

    MCAPI void serverOnlySetIsLockedForEditing(::Player& player);

    MCAPI void setHideGlowOutline(::SignTextSide side, bool hideGlowOutline);

    MCAPI void setIsGlowing(::SignTextSide side, bool isGlowing);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::std::string message, ::std::string ownerID);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::TextObjectRoot message, ::std::string ownerID);

    MCAPI void setSignTextColor(::SignTextSide side, ::mce::Color const& color);

    MCAPI void setWaxed(bool waxed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::BlockActorType blockActorType, ::std::string const& typeString);
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

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

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
