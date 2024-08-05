#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/SignTextSide.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/utils/BlockActorType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SignBlockActor : public ::BlockActor {
public:
    // SignBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    class CachedMessageData;
    class Text;
    // clang-format on

    // SignBlockActor inner types define
    struct CachedLineData {
    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

    public:
        // NOLINTBEGIN
        MCAPI CachedLineData();

        MCAPI CachedLineData(struct SignBlockActor::CachedLineData&&);

        MCAPI ~CachedLineData();

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
    };

    class Text {
    public:
        // Text inner types define
        enum class LoadMode {};

    public:
        // prevent constructor by default
        Text& operator=(Text const&);
        Text(Text const&);

    public:
        // NOLINTBEGIN
        MCAPI Text();

        MCAPI class mce::Color const& getColor() const;

        MCAPI std::string const& getMessage() const;

        MCAPI class TextObjectRoot const& getTextObject() const;

        MCAPI bool const isGlowing() const;

        MCAPI void load(class CompoundTag const& tag, ::SignBlockActor::Text::LoadMode);

        MCAPI bool save(class CompoundTag& tag) const;

        MCAPI void setColor(class mce::Color const& color);

        MCAPI void setEditedBy(std::string const&);

        MCAPI void setGlowing(bool);

        MCAPI void setHideGlowOutline(bool);

        MCAPI void setMessage(class TextObjectRoot message);

        MCAPI void setMessage(std::string message);

        MCAPI ~Text();

        MCAPI static char const SIGN_PERSIST_FORMATTING_TAG[];

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _parseOldVersionText(class CompoundTag const& tag);

        MCAPI void _parseOtherAttributes(class CompoundTag const& tag);

        MCAPI void _parseText(class CompoundTag const& tag);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SignBlockActor& operator=(SignBlockActor const&);
    SignBlockActor(SignBlockActor const&);
    SignBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignBlockActor();

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 19
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 28
    virtual std::string getImmersiveReaderText(class BlockSource&);

    // vIndex: 37
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38
    virtual void setUgcStrings(class CompoundTag& tag, std::vector<std::string> const& list) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // vIndex: 42
    virtual bool _playerCanUpdate(class Player const& fromPlayer) const;

    MCAPI SignBlockActor(class BlockPos const& pos, ::BlockActorType blockActorType, std::string const&);

    MCAPI bool getIsGlowing(::SignTextSide side) const;

    MCAPI bool getIsLockedForEditing(class ILevel& level);

    MCAPI bool getIsWaxed() const;

    MCAPI std::string const& getMessage(::SignTextSide) const;

    MCAPI ::SignTextSide getSideFacingPlayer(class Player const& player) const;

    MCAPI class mce::Color const& getSignTextColor(::SignTextSide side) const;

    MCAPI class TextObjectRoot const& getTextObject(::SignTextSide side) const;

    MCAPI bool isStringMessage(::SignTextSide side) const;

    MCAPI void serverOnlySetIsLockedForEditing(class Player& player);

    MCAPI void setHideGlowOutline(::SignTextSide, bool);

    MCAPI void setIsGlowing(::SignTextSide side, bool isGlowing);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, class TextObjectRoot message, std::string ownerID);

    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, std::string message, std::string ownerID);

    MCAPI void setSignTextColor(::SignTextSide side, class mce::Color const& color);

    MCAPI void setWaxed(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updateTextFromClient(class CompoundTag const& data, class BlockSource const& region);

    // NOLINTEND
};
