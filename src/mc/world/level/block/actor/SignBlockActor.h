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
        // symbol: ??0CachedLineData@SignBlockActor@@QEAA@XZ
        MCAPI CachedLineData();

        // symbol: ??0CachedLineData@SignBlockActor@@QEAA@$$QEAU01@@Z
        MCAPI CachedLineData(struct SignBlockActor::CachedLineData&&);

        // symbol: ??1CachedLineData@SignBlockActor@@QEAA@XZ
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
        // symbol: ??1CachedMessageData@SignBlockActor@@QEAA@XZ
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
        // symbol: ??0Text@SignBlockActor@@QEAA@XZ
        MCAPI Text();

        // symbol:
        // ?getMessage@Text@SignBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string const& getMessage() const;

        // symbol: ?load@Text@SignBlockActor@@QEAAXAEBVCompoundTag@@W4LoadMode@12@@Z
        MCAPI void load(class CompoundTag const& tag, ::SignBlockActor::Text::LoadMode);

        // symbol: ?save@Text@SignBlockActor@@QEBA_NAEAVCompoundTag@@@Z
        MCAPI bool save(class CompoundTag& tag) const;

        // symbol: ?setMessage@Text@SignBlockActor@@QEAAXVTextObjectRoot@@@Z
        MCAPI void setMessage(class TextObjectRoot message);

        // symbol:
        // ?setMessage@Text@SignBlockActor@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void setMessage(std::string message);

        // symbol: ??1Text@SignBlockActor@@QEAA@XZ
        MCAPI ~Text();

        // symbol: ?SIGN_PERSIST_FORMATTING_TAG@Text@SignBlockActor@@2QBDB
        MCAPI static char const SIGN_PERSIST_FORMATTING_TAG[];

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?_parseOldVersionText@Text@SignBlockActor@@AEAAXAEBVCompoundTag@@@Z
        MCAPI void _parseOldVersionText(class CompoundTag const& tag);

        // symbol: ?_parseOtherAttributes@Text@SignBlockActor@@AEAAXAEBVCompoundTag@@@Z
        MCAPI void _parseOtherAttributes(class CompoundTag const& tag);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SignBlockActor& operator=(SignBlockActor const&);
    SignBlockActor(SignBlockActor const&);
    SignBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SignBlockActor@@UEAA@XZ
    virtual ~SignBlockActor();

    // vIndex: 1, symbol: ?load@SignBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@SignBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@SignBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@SignBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 19, symbol: ?getShadowRadius@SignBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 28, symbol:
    // ?getImmersiveReaderText@SignBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
    virtual std::string getImmersiveReaderText(class BlockSource&);

    // vIndex: 37, symbol:
    // ?getUgcStrings@SignBlockActor@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38, symbol:
    // ?setUgcStrings@SignBlockActor@@UEBAXAEAVCompoundTag@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void setUgcStrings(class CompoundTag& tag, std::vector<std::string> const& list) const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@SignBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@SignBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // vIndex: 42, symbol: ?_playerCanUpdate@SignBlockActor@@MEBA_NAEBVPlayer@@@Z
    virtual bool _playerCanUpdate(class Player const& fromPlayer) const;

    // symbol:
    // ??0SignBlockActor@@QEAA@AEBVBlockPos@@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI SignBlockActor(class BlockPos const& pos, ::BlockActorType blockActorType, std::string const&);

    // symbol: ?getIsGlowing@SignBlockActor@@QEBA_NW4SignTextSide@@@Z
    MCAPI bool getIsGlowing(::SignTextSide side) const;

    // symbol: ?getIsLockedForEditing@SignBlockActor@@QEAA_NAEAVILevel@@@Z
    MCAPI bool getIsLockedForEditing(class ILevel& level);

    // symbol: ?getIsWaxed@SignBlockActor@@QEBA_NXZ
    MCAPI bool getIsWaxed() const;

    // symbol:
    // ?getMessage@SignBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SignTextSide@@@Z
    MCAPI std::string const& getMessage(::SignTextSide) const;

    // symbol: ?getSideFacingPlayer@SignBlockActor@@QEBA?AW4SignTextSide@@AEBVPlayer@@@Z
    MCAPI ::SignTextSide getSideFacingPlayer(class Player const& player) const;

    // symbol: ?getSignTextColor@SignBlockActor@@QEBAAEBVColor@mce@@W4SignTextSide@@@Z
    MCAPI class mce::Color const& getSignTextColor(::SignTextSide side) const;

    // symbol: ?getTextObject@SignBlockActor@@QEBAAEBVTextObjectRoot@@W4SignTextSide@@@Z
    MCAPI class TextObjectRoot const& getTextObject(::SignTextSide side) const;

    // symbol: ?isStringMessage@SignBlockActor@@QEBA_NW4SignTextSide@@@Z
    MCAPI bool isStringMessage(::SignTextSide side) const;

    // symbol: ?serverOnlySetIsLockedForEditing@SignBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void serverOnlySetIsLockedForEditing(class Player& player);

    // symbol: ?setHideGlowOutline@SignBlockActor@@QEAAXW4SignTextSide@@_N@Z
    MCAPI void setHideGlowOutline(::SignTextSide, bool);

    // symbol: ?setIsGlowing@SignBlockActor@@QEAAXW4SignTextSide@@_N@Z
    MCAPI void setIsGlowing(::SignTextSide side, bool isGlowing);

    // symbol:
    // ?setMessageForServerScripingOnly@SignBlockActor@@QEAAXW4SignTextSide@@VTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, class TextObjectRoot message, std::string ownerID);

    // symbol:
    // ?setMessageForServerScripingOnly@SignBlockActor@@QEAAXW4SignTextSide@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, std::string message, std::string ownerID);

    // symbol: ?setSignTextColor@SignBlockActor@@QEAAXW4SignTextSide@@AEBVColor@mce@@@Z
    MCAPI void setSignTextColor(::SignTextSide side, class mce::Color const& color);

    // symbol: ?setWaxed@SignBlockActor@@QEAAX_N@Z
    MCAPI void setWaxed(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateTextFromClient@SignBlockActor@@AEAAXAEBVCompoundTag@@AEBVBlockSource@@@Z
    MCAPI void _updateTextFromClient(class CompoundTag const& data, class BlockSource const& region);

    // NOLINTEND
};
