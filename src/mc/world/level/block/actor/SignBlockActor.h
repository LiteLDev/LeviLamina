#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

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
        CachedLineData& operator=(CachedLineData const&) = delete;
        CachedLineData(CachedLineData const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0CachedLineData\@SignBlockActor\@\@QEAA\@XZ
         */
        MCAPI CachedLineData();
        /**
         * @symbol ??0CachedLineData\@SignBlockActor\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI CachedLineData(struct SignBlockActor::CachedLineData&&);
        /**
         * @symbol ??1CachedLineData\@SignBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedLineData();
        // NOLINTEND
    };

    class CachedMessageData {

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&) = delete;
        CachedMessageData(CachedMessageData const&)            = delete;
        CachedMessageData()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1CachedMessageData\@SignBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedMessageData();
        // NOLINTEND
    };

    class Text {
    public:
        // Text inner types define
        enum class LoadMode {};

    public:
        // prevent constructor by default
        Text& operator=(Text const&) = delete;
        Text(Text const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Text\@SignBlockActor\@\@QEAA\@XZ
         */
        MCAPI Text();
        /**
         * @symbol ?getColor\@Text\@SignBlockActor\@\@QEBAAEBVColor\@mce\@\@XZ
         */
        MCAPI class mce::Color const& getColor() const;
        /**
         * @symbol
         * ?getMessage\@Text\@SignBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string const& getMessage() const;
        /**
         * @symbol ?getTextObject\@Text\@SignBlockActor\@\@QEBAAEBVTextObjectRoot\@\@XZ
         */
        MCAPI class TextObjectRoot const& getTextObject() const;
        /**
         * @symbol ?isGlowing\@Text\@SignBlockActor\@\@QEBA?B_NXZ
         */
        MCAPI bool const isGlowing() const;
        /**
         * @symbol ?load\@Text\@SignBlockActor\@\@QEAAXAEBVCompoundTag\@\@W4LoadMode\@12\@\@Z
         */
        MCAPI void load(class CompoundTag const&, enum class SignBlockActor::Text::LoadMode);
        /**
         * @symbol ?save\@Text\@SignBlockActor\@\@QEBA_NAEAVCompoundTag\@\@\@Z
         */
        MCAPI bool save(class CompoundTag&) const;
        /**
         * @symbol ?setColor\@Text\@SignBlockActor\@\@QEAAXAEBVColor\@mce\@\@\@Z
         */
        MCAPI void setColor(class mce::Color const&);
        /**
         * @symbol
         * ?setEditedBy\@Text\@SignBlockActor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void setEditedBy(std::string const&);
        /**
         * @symbol ?setGlowing\@Text\@SignBlockActor\@\@QEAAX_N\@Z
         */
        MCAPI void setGlowing(bool);
        /**
         * @symbol ?setHideGlowOutline\@Text\@SignBlockActor\@\@QEAAX_N\@Z
         */
        MCAPI void setHideGlowOutline(bool);
        /**
         * @symbol ?setMessage\@Text\@SignBlockActor\@\@QEAAXVTextObjectRoot\@\@\@Z
         */
        MCAPI void setMessage(class TextObjectRoot);
        /**
         * @symbol
         * ?setMessage\@Text\@SignBlockActor\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void setMessage(std::string);
        /**
         * @symbol ??1Text\@SignBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~Text();
        /**
         * @symbol ?SIGN_PERSIST_FORMATTING_TAG\@Text\@SignBlockActor\@\@2QBDB
         */
        MCAPI static char const SIGN_PERSIST_FORMATTING_TAG[];
        // NOLINTEND

        // private:
        // NOLINTBEGIN
        /**
         * @symbol ?_parseOldVersionText\@Text\@SignBlockActor\@\@AEAAXAEBVCompoundTag\@\@\@Z
         */
        MCAPI void _parseOldVersionText(class CompoundTag const&);
        /**
         * @symbol ?_parseOtherAttributes\@Text\@SignBlockActor\@\@AEAAXAEBVCompoundTag\@\@\@Z
         */
        MCAPI void _parseOtherAttributes(class CompoundTag const&);
        /**
         * @symbol ?_parseText\@Text\@SignBlockActor\@\@AEAAXAEBVCompoundTag\@\@\@Z
         */
        MCAPI void _parseText(class CompoundTag const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SignBlockActor& operator=(SignBlockActor const&) = delete;
    SignBlockActor(SignBlockActor const&)            = delete;
    SignBlockActor()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SignBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@SignBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@SignBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@SignBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol ?getShadowRadius\@SignBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource&) const;
    /**
     * @vftbl 28
     * @symbol
     * ?getImmersiveReaderText\@SignBlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource&);
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol
     * ?getUgcStrings\@SignBlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;
    /**
     * @vftbl 38
     * @symbol
     * ?setUgcStrings\@SignBlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@SignBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@SignBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @vftbl 42
     * @symbol ?_playerCanUpdate\@SignBlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIGNBLOCKACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SignBlockActor();
#endif
    /**
     * @symbol
     * ??0SignBlockActor\@\@QEAA\@AEBVBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SignBlockActor(class BlockPos const&, enum class BlockActorType, std::string const&);
    /**
     * @symbol ?getIsGlowing\@SignBlockActor\@\@QEBA_NW4SignTextSide\@\@\@Z
     */
    MCAPI bool getIsGlowing(enum class SignTextSide) const;
    /**
     * @symbol ?getIsLockedForEditing\@SignBlockActor\@\@QEAA_NAEAVILevel\@\@\@Z
     */
    MCAPI bool getIsLockedForEditing(class ILevel&);
    /**
     * @symbol ?getIsWaxed\@SignBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaxed() const;
    /**
     * @symbol
     * ?getMessage\@SignBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI std::string const& getMessage(enum class SignTextSide) const;
    /**
     * @symbol ?getSideFacingPlayer\@SignBlockActor\@\@QEBA?AW4SignTextSide\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI enum class SignTextSide getSideFacingPlayer(class Player const&) const;
    /**
     * @symbol ?getSignTextColor\@SignBlockActor\@\@QEBAAEBVColor\@mce\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class mce::Color const& getSignTextColor(enum class SignTextSide) const;
    /**
     * @symbol ?getTextObject\@SignBlockActor\@\@QEBAAEBVTextObjectRoot\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class TextObjectRoot const& getTextObject(enum class SignTextSide) const;
    /**
     * @symbol ?isStringMessage\@SignBlockActor\@\@QEBA_NW4SignTextSide\@\@\@Z
     */
    MCAPI bool isStringMessage(enum class SignTextSide) const;
    /**
     * @symbol ?serverOnlySetIsLockedForEditing\@SignBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void serverOnlySetIsLockedForEditing(class Player&);
    /**
     * @symbol ?setHideGlowOutline\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@_N\@Z
     */
    MCAPI void setHideGlowOutline(enum class SignTextSide, bool);
    /**
     * @symbol ?setIsGlowing\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@_N\@Z
     */
    MCAPI void setIsGlowing(enum class SignTextSide, bool);
    /**
     * @symbol
     * ?setMessageForServerScripingOnly\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@VTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMessageForServerScripingOnly(enum class SignTextSide, class TextObjectRoot, std::string);
    /**
     * @symbol
     * ?setMessageForServerScripingOnly\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void setMessageForServerScripingOnly(enum class SignTextSide, std::string, std::string);
    /**
     * @symbol ?setSignTextColor\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void setSignTextColor(enum class SignTextSide, class mce::Color const&);
    /**
     * @symbol ?setWaxed\@SignBlockActor\@\@QEAAXXZ
     */
    MCAPI void setWaxed();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_updateTextFromClient\@SignBlockActor\@\@AEAAXAEBVCompoundTag\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI void _updateTextFromClient(class CompoundTag const&, class BlockSource const&);
    // NOLINTEND
};
